# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: work.proto
# Protobuf Python Version: 4.25.1
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\nwork.proto\x12\x04work\"T\n\x04User\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0f\n\x07midName\x18\x02 \x01(\t\x12\x10\n\x08lastName\x18\x03 \x01(\t\x12\r\n\x05phone\x18\x04 \x01(\t\x12\x0c\n\x04Note\x18\x05 \x01(\t\"*\n\x0eGetUserRequest\x12\x18\n\x04user\x18\x01 \x01(\x0b\x32\n.work.User\"\"\n\x0fGetUserResponse\x12\x0f\n\x07message\x18\x01 \x01(\t2\xc2\x01\n\x04Work\x12/\n\x07GetUser\x12\x14.work.GetUserRequest\x1a\n.work.User\"\x00\x30\x01\x12.\n\x07\x61\x64\x64User\x12\n.work.User\x1a\x15.work.GetUserResponse\"\x00\x12\x31\n\ndeleteUser\x12\n.work.User\x1a\x15.work.GetUserResponse\"\x00\x12&\n\x08\x66indUser\x12\n.work.User\x1a\n.work.User\"\x00\x30\x01\x62\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'work_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  DESCRIPTOR._options = None
  _globals['_USER']._serialized_start=20
  _globals['_USER']._serialized_end=104
  _globals['_GETUSERREQUEST']._serialized_start=106
  _globals['_GETUSERREQUEST']._serialized_end=148
  _globals['_GETUSERRESPONSE']._serialized_start=150
  _globals['_GETUSERRESPONSE']._serialized_end=184
  _globals['_WORK']._serialized_start=187
  _globals['_WORK']._serialized_end=381
# @@protoc_insertion_point(module_scope)
