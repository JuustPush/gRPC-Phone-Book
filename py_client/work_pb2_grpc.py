# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import work_pb2 as work__pb2


class WorkStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.GetUser = channel.unary_stream(
                '/work.Work/GetUser',
                request_serializer=work__pb2.GetUserRequest.SerializeToString,
                response_deserializer=work__pb2.User.FromString,
                )
        self.addUser = channel.unary_unary(
                '/work.Work/addUser',
                request_serializer=work__pb2.User.SerializeToString,
                response_deserializer=work__pb2.GetUserResponse.FromString,
                )
        self.deleteUser = channel.unary_unary(
                '/work.Work/deleteUser',
                request_serializer=work__pb2.User.SerializeToString,
                response_deserializer=work__pb2.GetUserResponse.FromString,
                )
        self.findUser = channel.unary_stream(
                '/work.Work/findUser',
                request_serializer=work__pb2.User.SerializeToString,
                response_deserializer=work__pb2.User.FromString,
                )


class WorkServicer(object):
    """Missing associated documentation comment in .proto file."""

    def GetUser(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def addUser(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def deleteUser(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def findUser(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_WorkServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'GetUser': grpc.unary_stream_rpc_method_handler(
                    servicer.GetUser,
                    request_deserializer=work__pb2.GetUserRequest.FromString,
                    response_serializer=work__pb2.User.SerializeToString,
            ),
            'addUser': grpc.unary_unary_rpc_method_handler(
                    servicer.addUser,
                    request_deserializer=work__pb2.User.FromString,
                    response_serializer=work__pb2.GetUserResponse.SerializeToString,
            ),
            'deleteUser': grpc.unary_unary_rpc_method_handler(
                    servicer.deleteUser,
                    request_deserializer=work__pb2.User.FromString,
                    response_serializer=work__pb2.GetUserResponse.SerializeToString,
            ),
            'findUser': grpc.unary_stream_rpc_method_handler(
                    servicer.findUser,
                    request_deserializer=work__pb2.User.FromString,
                    response_serializer=work__pb2.User.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'work.Work', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Work(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def GetUser(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/work.Work/GetUser',
            work__pb2.GetUserRequest.SerializeToString,
            work__pb2.User.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def addUser(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/work.Work/addUser',
            work__pb2.User.SerializeToString,
            work__pb2.GetUserResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def deleteUser(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/work.Work/deleteUser',
            work__pb2.User.SerializeToString,
            work__pb2.GetUserResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def findUser(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/work.Work/findUser',
            work__pb2.User.SerializeToString,
            work__pb2.User.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
