#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <grpcpp/grpcpp.h>
#include "work.grpc.pb.h"


using namespace std;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerReaderWriter;
using grpc::ServerWriter;
using grpc::Status;

using work::Work;
using work::GetUserRequest;
using work::GetUserResponse;
using work::User;

struct Person {
	string name;
	string midName;
	string LastName;
	string phone;
	string Note;
};

vector<User> ReadCSV(){
	ifstream file;
	file.open("StudentData.csv");
	string line;
	getline(file, line);
	vector<Person> users;
	vector<User> u_grpc;
	while (getline(file, line)) {
		stringstream ss(line);
		Person u;
		User u_g;
		getline(ss, u.name, ',');
		u_g.set_name(u.name);
		getline(ss, u.midName, ',');
		u_g.set_midname(u.midName);
		getline(ss, u.LastName, ',');
		u_g.set_lastname(u.LastName);
		getline(ss, u.phone, ',');
		u_g.set_phone(u.phone);
		getline(ss, u.Note, ',');
		u_g.set_note(u.Note);
		users.push_back(u);
		u_grpc.push_back(u_g);
		//cout<<line<<endl;
	}
	file.close();
	return u_grpc;
}


vector<User> FindCSV(const int& type, const string& info){
	ifstream file;
	file.open("StudentData.csv");
	string line;
	getline(file, line);
	vector<Person> users;
	vector<User> u_grpc;
	while (getline(file, line)) {
		stringstream ss(line);
		Person u;
		User u_g;
		getline(ss, u.name, ',');
		getline(ss, u.midName, ',');
		getline(ss, u.LastName, ',');
		getline(ss, u.phone, ',');
		getline(ss, u.Note, ',');
		switch (type)
		{
		case 1:
			if (u.name.find(info) != std::string::npos)
			{
				u_g.set_name(u.name);
				u_g.set_midname(u.midName);
				u_g.set_lastname(u.LastName);
				u_g.set_phone(u.phone);
				u_g.set_note(u.Note);
				users.push_back(u);
				u_grpc.push_back(u_g);
			}
			break;
		
		case 2:
			if (u.midName.find(info) != std::string::npos)
			{
				u_g.set_name(u.name);
				u_g.set_midname(u.midName);
				u_g.set_lastname(u.LastName);
				u_g.set_phone(u.phone);
				u_g.set_note(u.Note);
				users.push_back(u);
				u_grpc.push_back(u_g);
			}
			break;

		case 3:
			if (u.LastName.find(info) != std::string::npos)
			{
				u_g.set_name(u.name);
				u_g.set_midname(u.midName);
				u_g.set_lastname(u.LastName);
				u_g.set_phone(u.phone);
				u_g.set_note(u.Note);
				users.push_back(u);
				u_grpc.push_back(u_g);
			}
			break;

		case 4:
			if (u.phone.find(info) != std::string::npos)
			{
				u_g.set_name(u.name);
				u_g.set_midname(u.midName);
				u_g.set_lastname(u.LastName);
				u_g.set_phone(u.phone);
				u_g.set_note(u.Note);
				users.push_back(u);
				u_grpc.push_back(u_g);
			}
			break;

		case 5:
			if (u.Note.find(info) != std::string::npos)
			{
				u_g.set_name(u.name);
				u_g.set_midname(u.midName);
				u_g.set_lastname(u.LastName);
				u_g.set_phone(u.phone);
				u_g.set_note(u.Note);
				users.push_back(u);
				u_grpc.push_back(u_g);
			}
			break;
		default:
			break;
		}
	}
	file.close();
	return u_grpc;
}

bool checkInformation(const string& ph) {
	bool find =false;
	vector<User> users = ReadCSV();
	ofstream file("StudentData.csv");
	file << "name,midName,LastName,phone,Note\n";
	for (const auto& user : users) {
		if (user.phone() != ph) {
			file << user.name() << "," << user.midname() << "," << user.lastname() << "," << user.phone() << "," << user.note() << "\n";
		}
		else{
			find = true;
		}
	}
	file.close();
	return find;
}

// void addUser(const User* newUser) { 
// 	ofstream file("StudentData.csv", ios::app);
// 	file << newUser->namename() << "," << newUser->midName() << "," << newUser->LastName() << "," << newUser->phone() << "," << newUser->Note() << "\n";
// 	file.close();
// }

class WorkServiceImplementation final : public Work::Service {
	Status GetUser(
            ServerContext* context,
            const GetUserRequest* request,
            ServerWriter<User>* writer
    ) override {
        vector<User> users=ReadCSV();
        for (const User& it : users){
			writer->Write(it);
		}
        return Status::OK;
	}

	Status findUser(
			ServerContext* context,
            const User* request,
            ServerWriter<User>* writer
    ) override {
		vector<User> users;
		if (!request->name().empty()){
			users=FindCSV(1,request->name());
		}
		else if (!request->midname().empty()){
			users=FindCSV(2,request->midname());
		}
		else if (!request->lastname().empty()){
			users=FindCSV(3,request->lastname());
		}
		else if (!request->phone().empty()){
			users=FindCSV(4,request->phone());
		}
		else if (!request->note().empty()){
			users=FindCSV(5,request->note());
		}
		for (const User& it : users){
			writer->Write(it);
		}
        return Status::OK;
	}

	Status addUser(ServerContext* context, const User* request,
                  GetUserResponse* reply) override {
					const string p=request->phone();
					bool ok = true;
					vector<User> users=ReadCSV();
					for (const User& it : users){
						if (p==it.phone()) {
							ok=false;
							break;
						};
					}
					if (ok){
						ofstream file("StudentData.csv", ios::app);
						file << request->name() << "," << request->midname() << "," << request->lastname() << "," << request->phone() << "," << request->note() << "\n";
						file.close();
					}
					else{
						reply->set_message("the number has already been registered");
					}
					return Status::OK;
				  }
	Status deleteUser(ServerContext* context, const User* request,
                  GetUserResponse* reply) override {
					const string p=request->phone();
					bool ok = checkInformation(p);
				  	
					if (!ok){
						reply->set_message("The number is not in the dictionary");	
					}
					
					return Status::OK;
				  }
				
};

void Run() {
    std::string address("0.0.0.0:5000");
    WorkServiceImplementation service;
    ServerBuilder builder;
    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on port: " << address << std::endl;
    server->Wait();
}
 
int main(int argc, char** argv) {
    Run();
    return 0;
}
