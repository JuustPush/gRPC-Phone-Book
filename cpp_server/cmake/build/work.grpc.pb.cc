// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: work.proto

#include "work.pb.h"
#include "work.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace work {

static const char* Work_method_names[] = {
  "/work.Work/GetUser",
  "/work.Work/addUser",
  "/work.Work/deleteUser",
  "/work.Work/findUser",
};

std::unique_ptr< Work::Stub> Work::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Work::Stub> stub(new Work::Stub(channel, options));
  return stub;
}

Work::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetUser_(Work_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_addUser_(Work_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_deleteUser_(Work_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_findUser_(Work_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::ClientReader< ::work::User>* Work::Stub::GetUserRaw(::grpc::ClientContext* context, const ::work::GetUserRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::work::User>::Create(channel_.get(), rpcmethod_GetUser_, context, request);
}

void Work::Stub::async::GetUser(::grpc::ClientContext* context, const ::work::GetUserRequest* request, ::grpc::ClientReadReactor< ::work::User>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::work::User>::Create(stub_->channel_.get(), stub_->rpcmethod_GetUser_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::work::User>* Work::Stub::AsyncGetUserRaw(::grpc::ClientContext* context, const ::work::GetUserRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::work::User>::Create(channel_.get(), cq, rpcmethod_GetUser_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::work::User>* Work::Stub::PrepareAsyncGetUserRaw(::grpc::ClientContext* context, const ::work::GetUserRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::work::User>::Create(channel_.get(), cq, rpcmethod_GetUser_, context, request, false, nullptr);
}

::grpc::Status Work::Stub::addUser(::grpc::ClientContext* context, const ::work::User& request, ::work::GetUserResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_addUser_, context, request, response);
}

void Work::Stub::async::addUser(::grpc::ClientContext* context, const ::work::User* request, ::work::GetUserResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_addUser_, context, request, response, std::move(f));
}

void Work::Stub::async::addUser(::grpc::ClientContext* context, const ::work::User* request, ::work::GetUserResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_addUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::work::GetUserResponse>* Work::Stub::PrepareAsyncaddUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::work::GetUserResponse, ::work::User, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_addUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::work::GetUserResponse>* Work::Stub::AsyncaddUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncaddUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Work::Stub::deleteUser(::grpc::ClientContext* context, const ::work::User& request, ::work::GetUserResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_deleteUser_, context, request, response);
}

void Work::Stub::async::deleteUser(::grpc::ClientContext* context, const ::work::User* request, ::work::GetUserResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_deleteUser_, context, request, response, std::move(f));
}

void Work::Stub::async::deleteUser(::grpc::ClientContext* context, const ::work::User* request, ::work::GetUserResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_deleteUser_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::work::GetUserResponse>* Work::Stub::PrepareAsyncdeleteUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::work::GetUserResponse, ::work::User, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_deleteUser_, context, request);
}

::grpc::ClientAsyncResponseReader< ::work::GetUserResponse>* Work::Stub::AsyncdeleteUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdeleteUserRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::work::User>* Work::Stub::findUserRaw(::grpc::ClientContext* context, const ::work::User& request) {
  return ::grpc::internal::ClientReaderFactory< ::work::User>::Create(channel_.get(), rpcmethod_findUser_, context, request);
}

void Work::Stub::async::findUser(::grpc::ClientContext* context, const ::work::User* request, ::grpc::ClientReadReactor< ::work::User>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::work::User>::Create(stub_->channel_.get(), stub_->rpcmethod_findUser_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::work::User>* Work::Stub::AsyncfindUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::work::User>::Create(channel_.get(), cq, rpcmethod_findUser_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::work::User>* Work::Stub::PrepareAsyncfindUserRaw(::grpc::ClientContext* context, const ::work::User& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::work::User>::Create(channel_.get(), cq, rpcmethod_findUser_, context, request, false, nullptr);
}

Work::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Work_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Work::Service, ::work::GetUserRequest, ::work::User>(
          [](Work::Service* service,
             ::grpc::ServerContext* ctx,
             const ::work::GetUserRequest* req,
             ::grpc::ServerWriter<::work::User>* writer) {
               return service->GetUser(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Work_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Work::Service, ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Work::Service* service,
             ::grpc::ServerContext* ctx,
             const ::work::User* req,
             ::work::GetUserResponse* resp) {
               return service->addUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Work_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Work::Service, ::work::User, ::work::GetUserResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Work::Service* service,
             ::grpc::ServerContext* ctx,
             const ::work::User* req,
             ::work::GetUserResponse* resp) {
               return service->deleteUser(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Work_method_names[3],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Work::Service, ::work::User, ::work::User>(
          [](Work::Service* service,
             ::grpc::ServerContext* ctx,
             const ::work::User* req,
             ::grpc::ServerWriter<::work::User>* writer) {
               return service->findUser(ctx, req, writer);
             }, this)));
}

Work::Service::~Service() {
}

::grpc::Status Work::Service::GetUser(::grpc::ServerContext* context, const ::work::GetUserRequest* request, ::grpc::ServerWriter< ::work::User>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Work::Service::addUser(::grpc::ServerContext* context, const ::work::User* request, ::work::GetUserResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Work::Service::deleteUser(::grpc::ServerContext* context, const ::work::User* request, ::work::GetUserResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Work::Service::findUser(::grpc::ServerContext* context, const ::work::User* request, ::grpc::ServerWriter< ::work::User>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace work
