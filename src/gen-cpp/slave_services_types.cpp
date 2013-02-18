/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "slave_services_types.h"

#include <algorithm>

namespace slave {

const char* Params::ascii_fingerprint = "6BFE6C5BD33AF95FB0364EA75DCDE186";
const uint8_t Params::binary_fingerprint[16] = {0x6B,0xFE,0x6C,0x5B,0xD3,0x3A,0xF9,0x5F,0xB0,0x36,0x4E,0xA7,0x5D,0xCD,0xE1,0x86};

uint32_t Params::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->client_ip);
          this->__isset.client_ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->client_port);
          this->__isset.client_port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->fid);
          this->__isset.fid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->restart_at);
          this->__isset.restart_at = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->transfer_buffer_size);
          this->__isset.transfer_buffer_size = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->server_ip);
          this->__isset.server_ip = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->data_range_start);
          this->__isset.data_range_start = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->data_range_len);
          this->__isset.data_range_len = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Params::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("Params");

  xfer += oprot->writeFieldBegin("client_ip", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->client_ip);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("client_port", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->client_port);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("fid", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->fid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("restart_at", ::apache::thrift::protocol::T_I64, 4);
  xfer += oprot->writeI64(this->restart_at);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("transfer_buffer_size", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32(this->transfer_buffer_size);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("server_ip", ::apache::thrift::protocol::T_I64, 6);
  xfer += oprot->writeI64(this->server_ip);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("data_range_start", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32(this->data_range_start);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("data_range_len", ::apache::thrift::protocol::T_I32, 8);
  xfer += oprot->writeI32(this->data_range_len);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Params &a, Params &b) {
  using ::std::swap;
  swap(a.client_ip, b.client_ip);
  swap(a.client_port, b.client_port);
  swap(a.fid, b.fid);
  swap(a.restart_at, b.restart_at);
  swap(a.transfer_buffer_size, b.transfer_buffer_size);
  swap(a.server_ip, b.server_ip);
  swap(a.data_range_start, b.data_range_start);
  swap(a.data_range_len, b.data_range_len);
  swap(a.__isset, b.__isset);
}

} // namespace
