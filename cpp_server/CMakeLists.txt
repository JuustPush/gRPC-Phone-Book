cmake_minimum_required(VERSION 3.8)

project(HelloWorld C CXX)

include(common.cmake)

get_filename_component(hw_proto "work.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)


set(hw_proto_srcs "${CMAKE_CURRENT_BINARY_DIR}/work.pb.cc")
set(hw_proto_hdrs "${CMAKE_CURRENT_BINARY_DIR}/work.pb.h")
set(hw_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/work.grpc.pb.cc")
set(hw_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/work.grpc.pb.h")

add_custom_command(
      OUTPUT "${hw_proto_srcs}" "${hw_proto_hdrs}" "${hw_grpc_srcs}" "${hw_grpc_hdrs}"
      COMMAND ${_PROTOBUF_PROTOC}
      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
        -I "${hw_proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${hw_proto}"
      DEPENDS "${hw_proto}")
      
include_directories("${CMAKE_CURRENT_BINARY_DIR}")

add_library(hw_grpc_proto
  ${hw_grpc_srcs}
  ${hw_grpc_hdrs}
  ${hw_proto_srcs}
  ${hw_proto_hdrs})
target_link_libraries(hw_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})
  
  add_executable(test "work.cpp")
  target_link_libraries(test
    hw_grpc_proto
    absl::flags
    absl::flags_parse
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})