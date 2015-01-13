/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "type_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace photodb {


MetaValue::~MetaValue() throw() {
}


void MetaValue::__set_key(const int64_t val) {
  this->key = val;
__isset.key = true;
}

void MetaValue::__set_contentType(const std::string& val) {
  this->contentType = val;
__isset.contentType = true;
}

void MetaValue::__set_ext(const std::string& val) {
  this->ext = val;
__isset.ext = true;
}

void MetaValue::__set_createdTime(const int64_t val) {
  this->createdTime = val;
__isset.createdTime = true;
}

void MetaValue::__set_updatedTime(const int64_t val) {
  this->updatedTime = val;
__isset.updatedTime = true;
}

void MetaValue::__set_etag(const std::string& val) {
  this->etag = val;
__isset.etag = true;
}

void MetaValue::__set_width(const int32_t val) {
  this->width = val;
__isset.width = true;
}

void MetaValue::__set_height(const int32_t val) {
  this->height = val;
__isset.height = true;
}

const char* MetaValue::ascii_fingerprint = "C3B294C1DC05A03EEF52B6404AD1B714";
const uint8_t MetaValue::binary_fingerprint[16] = {0xC3,0xB2,0x94,0xC1,0xDC,0x05,0xA0,0x3E,0xEF,0x52,0xB6,0x40,0x4A,0xD1,0xB7,0x14};

uint32_t MetaValue::read(::apache::thrift::protocol::TProtocol* iprot) {

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
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->key);
          this->__isset.key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->contentType);
          this->__isset.contentType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->ext);
          this->__isset.ext = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->updatedTime);
          this->__isset.updatedTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->etag);
          this->__isset.etag = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->width);
          this->__isset.width = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->height);
          this->__isset.height = true;
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

uint32_t MetaValue::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("MetaValue");

  if (this->__isset.key) {
    xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_I64, 1);
    xfer += oprot->writeI64(this->key);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.contentType) {
    xfer += oprot->writeFieldBegin("contentType", ::apache::thrift::protocol::T_STRING, 2);
    xfer += oprot->writeString(this->contentType);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.ext) {
    xfer += oprot->writeFieldBegin("ext", ::apache::thrift::protocol::T_STRING, 3);
    xfer += oprot->writeString(this->ext);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.createdTime) {
    xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 4);
    xfer += oprot->writeI64(this->createdTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.updatedTime) {
    xfer += oprot->writeFieldBegin("updatedTime", ::apache::thrift::protocol::T_I64, 5);
    xfer += oprot->writeI64(this->updatedTime);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.etag) {
    xfer += oprot->writeFieldBegin("etag", ::apache::thrift::protocol::T_STRING, 6);
    xfer += oprot->writeString(this->etag);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.width) {
    xfer += oprot->writeFieldBegin("width", ::apache::thrift::protocol::T_I32, 7);
    xfer += oprot->writeI32(this->width);
    xfer += oprot->writeFieldEnd();
  }
  if (this->__isset.height) {
    xfer += oprot->writeFieldBegin("height", ::apache::thrift::protocol::T_I32, 8);
    xfer += oprot->writeI32(this->height);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(MetaValue &a, MetaValue &b) {
  using ::std::swap;
  swap(a.key, b.key);
  swap(a.contentType, b.contentType);
  swap(a.ext, b.ext);
  swap(a.createdTime, b.createdTime);
  swap(a.updatedTime, b.updatedTime);
  swap(a.etag, b.etag);
  swap(a.width, b.width);
  swap(a.height, b.height);
  swap(a.__isset, b.__isset);
}

MetaValue::MetaValue(const MetaValue& other0) {
  key = other0.key;
  contentType = other0.contentType;
  ext = other0.ext;
  createdTime = other0.createdTime;
  updatedTime = other0.updatedTime;
  etag = other0.etag;
  width = other0.width;
  height = other0.height;
  __isset = other0.__isset;
}
MetaValue& MetaValue::operator=(const MetaValue& other1) {
  key = other1.key;
  contentType = other1.contentType;
  ext = other1.ext;
  createdTime = other1.createdTime;
  updatedTime = other1.updatedTime;
  etag = other1.etag;
  width = other1.width;
  height = other1.height;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const MetaValue& obj) {
  using apache::thrift::to_string;
  out << "MetaValue(";
  out << "key="; (obj.__isset.key ? (out << to_string(obj.key)) : (out << "<null>"));
  out << ", " << "contentType="; (obj.__isset.contentType ? (out << to_string(obj.contentType)) : (out << "<null>"));
  out << ", " << "ext="; (obj.__isset.ext ? (out << to_string(obj.ext)) : (out << "<null>"));
  out << ", " << "createdTime="; (obj.__isset.createdTime ? (out << to_string(obj.createdTime)) : (out << "<null>"));
  out << ", " << "updatedTime="; (obj.__isset.updatedTime ? (out << to_string(obj.updatedTime)) : (out << "<null>"));
  out << ", " << "etag="; (obj.__isset.etag ? (out << to_string(obj.etag)) : (out << "<null>"));
  out << ", " << "width="; (obj.__isset.width ? (out << to_string(obj.width)) : (out << "<null>"));
  out << ", " << "height="; (obj.__isset.height ? (out << to_string(obj.height)) : (out << "<null>"));
  out << ")";
  return out;
}


ImgValue::~ImgValue() throw() {
}


void ImgValue::__set_img(const std::string& val) {
  this->img = val;
__isset.img = true;
}

const char* ImgValue::ascii_fingerprint = "66E694018C17E5B65A59AE8F55CCA3CD";
const uint8_t ImgValue::binary_fingerprint[16] = {0x66,0xE6,0x94,0x01,0x8C,0x17,0xE5,0xB6,0x5A,0x59,0xAE,0x8F,0x55,0xCC,0xA3,0xCD};

uint32_t ImgValue::read(::apache::thrift::protocol::TProtocol* iprot) {

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
          xfer += iprot->readBinary(this->img);
          this->__isset.img = true;
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

uint32_t ImgValue::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ImgValue");

  if (this->__isset.img) {
    xfer += oprot->writeFieldBegin("img", ::apache::thrift::protocol::T_STRING, 1);
    xfer += oprot->writeBinary(this->img);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ImgValue &a, ImgValue &b) {
  using ::std::swap;
  swap(a.img, b.img);
  swap(a.__isset, b.__isset);
}

ImgValue::ImgValue(const ImgValue& other2) {
  img = other2.img;
  __isset = other2.__isset;
}
ImgValue& ImgValue::operator=(const ImgValue& other3) {
  img = other3.img;
  __isset = other3.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ImgValue& obj) {
  using apache::thrift::to_string;
  out << "ImgValue(";
  out << "img="; (obj.__isset.img ? (out << to_string(obj.img)) : (out << "<null>"));
  out << ")";
  return out;
}


MetaValueResult::~MetaValueResult() throw() {
}


void MetaValueResult::__set_error(const int32_t val) {
  this->error = val;
}

void MetaValueResult::__set_value(const MetaValue& val) {
  this->value = val;
__isset.value = true;
}

const char* MetaValueResult::ascii_fingerprint = "AB41CDE81BD9D24511C9C3B87D42D4AA";
const uint8_t MetaValueResult::binary_fingerprint[16] = {0xAB,0x41,0xCD,0xE8,0x1B,0xD9,0xD2,0x45,0x11,0xC9,0xC3,0xB8,0x7D,0x42,0xD4,0xAA};

uint32_t MetaValueResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_error = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error);
          isset_error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->value.read(iprot);
          this->__isset.value = true;
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

  if (!isset_error)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t MetaValueResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("MetaValueResult");

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->error);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.value) {
    xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->value.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(MetaValueResult &a, MetaValueResult &b) {
  using ::std::swap;
  swap(a.error, b.error);
  swap(a.value, b.value);
  swap(a.__isset, b.__isset);
}

MetaValueResult::MetaValueResult(const MetaValueResult& other4) {
  error = other4.error;
  value = other4.value;
  __isset = other4.__isset;
}
MetaValueResult& MetaValueResult::operator=(const MetaValueResult& other5) {
  error = other5.error;
  value = other5.value;
  __isset = other5.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const MetaValueResult& obj) {
  using apache::thrift::to_string;
  out << "MetaValueResult(";
  out << "error=" << to_string(obj.error);
  out << ", " << "value="; (obj.__isset.value ? (out << to_string(obj.value)) : (out << "<null>"));
  out << ")";
  return out;
}


ImgValueResult::~ImgValueResult() throw() {
}


void ImgValueResult::__set_error(const int32_t val) {
  this->error = val;
}

void ImgValueResult::__set_value(const ImgValue& val) {
  this->value = val;
__isset.value = true;
}

const char* ImgValueResult::ascii_fingerprint = "87F881FE7A41D5968AF5DB3937962BA8";
const uint8_t ImgValueResult::binary_fingerprint[16] = {0x87,0xF8,0x81,0xFE,0x7A,0x41,0xD5,0x96,0x8A,0xF5,0xDB,0x39,0x37,0x96,0x2B,0xA8};

uint32_t ImgValueResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_error = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->error);
          isset_error = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->value.read(iprot);
          this->__isset.value = true;
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

  if (!isset_error)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ImgValueResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ImgValueResult");

  xfer += oprot->writeFieldBegin("error", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->error);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.value) {
    xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->value.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ImgValueResult &a, ImgValueResult &b) {
  using ::std::swap;
  swap(a.error, b.error);
  swap(a.value, b.value);
  swap(a.__isset, b.__isset);
}

ImgValueResult::ImgValueResult(const ImgValueResult& other6) {
  error = other6.error;
  value = other6.value;
  __isset = other6.__isset;
}
ImgValueResult& ImgValueResult::operator=(const ImgValueResult& other7) {
  error = other7.error;
  value = other7.value;
  __isset = other7.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ImgValueResult& obj) {
  using apache::thrift::to_string;
  out << "ImgValueResult(";
  out << "error=" << to_string(obj.error);
  out << ", " << "value="; (obj.__isset.value ? (out << to_string(obj.value)) : (out << "<null>"));
  out << ")";
  return out;
}

} // namespace
