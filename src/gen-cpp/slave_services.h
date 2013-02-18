/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef slave_services_H
#define slave_services_H

#include <thrift/TDispatchProcessor.h>
#include "slave_services_types.h"

namespace slave {

class slave_servicesIf {
 public:
  virtual ~slave_servicesIf() {}
  virtual bool ActiveStoreTransfer(const Params& p, const int32_t iflags) = 0;
  virtual bool PasvStoreTransfer(const Params& p, const int32_t iflags) = 0;
  virtual bool ActiveRetrieveTransfer(const Params& p) = 0;
  virtual bool PasvRetrieveTransfer(const Params& p) = 0;
};

class slave_servicesIfFactory {
 public:
  typedef slave_servicesIf Handler;

  virtual ~slave_servicesIfFactory() {}

  virtual slave_servicesIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(slave_servicesIf* /* handler */) = 0;
};

class slave_servicesIfSingletonFactory : virtual public slave_servicesIfFactory {
 public:
  slave_servicesIfSingletonFactory(const boost::shared_ptr<slave_servicesIf>& iface) : iface_(iface) {}
  virtual ~slave_servicesIfSingletonFactory() {}

  virtual slave_servicesIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(slave_servicesIf* /* handler */) {}

 protected:
  boost::shared_ptr<slave_servicesIf> iface_;
};

class slave_servicesNull : virtual public slave_servicesIf {
 public:
  virtual ~slave_servicesNull() {}
  bool ActiveStoreTransfer(const Params& /* p */, const int32_t /* iflags */) {
    bool _return = false;
    return _return;
  }
  bool PasvStoreTransfer(const Params& /* p */, const int32_t /* iflags */) {
    bool _return = false;
    return _return;
  }
  bool ActiveRetrieveTransfer(const Params& /* p */) {
    bool _return = false;
    return _return;
  }
  bool PasvRetrieveTransfer(const Params& /* p */) {
    bool _return = false;
    return _return;
  }
};

typedef struct _slave_services_ActiveStoreTransfer_args__isset {
  _slave_services_ActiveStoreTransfer_args__isset() : p(false), iflags(false) {}
  bool p;
  bool iflags;
} _slave_services_ActiveStoreTransfer_args__isset;

class slave_services_ActiveStoreTransfer_args {
 public:

  slave_services_ActiveStoreTransfer_args() : iflags(0) {
  }

  virtual ~slave_services_ActiveStoreTransfer_args() throw() {}

  Params p;
  int32_t iflags;

  _slave_services_ActiveStoreTransfer_args__isset __isset;

  void __set_p(const Params& val) {
    p = val;
  }

  void __set_iflags(const int32_t val) {
    iflags = val;
  }

  bool operator == (const slave_services_ActiveStoreTransfer_args & rhs) const
  {
    if (!(p == rhs.p))
      return false;
    if (!(iflags == rhs.iflags))
      return false;
    return true;
  }
  bool operator != (const slave_services_ActiveStoreTransfer_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_ActiveStoreTransfer_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class slave_services_ActiveStoreTransfer_pargs {
 public:


  virtual ~slave_services_ActiveStoreTransfer_pargs() throw() {}

  const Params* p;
  const int32_t* iflags;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_ActiveStoreTransfer_result__isset {
  _slave_services_ActiveStoreTransfer_result__isset() : success(false) {}
  bool success;
} _slave_services_ActiveStoreTransfer_result__isset;

class slave_services_ActiveStoreTransfer_result {
 public:

  slave_services_ActiveStoreTransfer_result() : success(0) {
  }

  virtual ~slave_services_ActiveStoreTransfer_result() throw() {}

  bool success;

  _slave_services_ActiveStoreTransfer_result__isset __isset;

  void __set_success(const bool val) {
    success = val;
  }

  bool operator == (const slave_services_ActiveStoreTransfer_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const slave_services_ActiveStoreTransfer_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_ActiveStoreTransfer_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_ActiveStoreTransfer_presult__isset {
  _slave_services_ActiveStoreTransfer_presult__isset() : success(false) {}
  bool success;
} _slave_services_ActiveStoreTransfer_presult__isset;

class slave_services_ActiveStoreTransfer_presult {
 public:


  virtual ~slave_services_ActiveStoreTransfer_presult() throw() {}

  bool* success;

  _slave_services_ActiveStoreTransfer_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _slave_services_PasvStoreTransfer_args__isset {
  _slave_services_PasvStoreTransfer_args__isset() : p(false), iflags(false) {}
  bool p;
  bool iflags;
} _slave_services_PasvStoreTransfer_args__isset;

class slave_services_PasvStoreTransfer_args {
 public:

  slave_services_PasvStoreTransfer_args() : iflags(0) {
  }

  virtual ~slave_services_PasvStoreTransfer_args() throw() {}

  Params p;
  int32_t iflags;

  _slave_services_PasvStoreTransfer_args__isset __isset;

  void __set_p(const Params& val) {
    p = val;
  }

  void __set_iflags(const int32_t val) {
    iflags = val;
  }

  bool operator == (const slave_services_PasvStoreTransfer_args & rhs) const
  {
    if (!(p == rhs.p))
      return false;
    if (!(iflags == rhs.iflags))
      return false;
    return true;
  }
  bool operator != (const slave_services_PasvStoreTransfer_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_PasvStoreTransfer_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class slave_services_PasvStoreTransfer_pargs {
 public:


  virtual ~slave_services_PasvStoreTransfer_pargs() throw() {}

  const Params* p;
  const int32_t* iflags;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_PasvStoreTransfer_result__isset {
  _slave_services_PasvStoreTransfer_result__isset() : success(false) {}
  bool success;
} _slave_services_PasvStoreTransfer_result__isset;

class slave_services_PasvStoreTransfer_result {
 public:

  slave_services_PasvStoreTransfer_result() : success(0) {
  }

  virtual ~slave_services_PasvStoreTransfer_result() throw() {}

  bool success;

  _slave_services_PasvStoreTransfer_result__isset __isset;

  void __set_success(const bool val) {
    success = val;
  }

  bool operator == (const slave_services_PasvStoreTransfer_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const slave_services_PasvStoreTransfer_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_PasvStoreTransfer_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_PasvStoreTransfer_presult__isset {
  _slave_services_PasvStoreTransfer_presult__isset() : success(false) {}
  bool success;
} _slave_services_PasvStoreTransfer_presult__isset;

class slave_services_PasvStoreTransfer_presult {
 public:


  virtual ~slave_services_PasvStoreTransfer_presult() throw() {}

  bool* success;

  _slave_services_PasvStoreTransfer_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _slave_services_ActiveRetrieveTransfer_args__isset {
  _slave_services_ActiveRetrieveTransfer_args__isset() : p(false) {}
  bool p;
} _slave_services_ActiveRetrieveTransfer_args__isset;

class slave_services_ActiveRetrieveTransfer_args {
 public:

  slave_services_ActiveRetrieveTransfer_args() {
  }

  virtual ~slave_services_ActiveRetrieveTransfer_args() throw() {}

  Params p;

  _slave_services_ActiveRetrieveTransfer_args__isset __isset;

  void __set_p(const Params& val) {
    p = val;
  }

  bool operator == (const slave_services_ActiveRetrieveTransfer_args & rhs) const
  {
    if (!(p == rhs.p))
      return false;
    return true;
  }
  bool operator != (const slave_services_ActiveRetrieveTransfer_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_ActiveRetrieveTransfer_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class slave_services_ActiveRetrieveTransfer_pargs {
 public:


  virtual ~slave_services_ActiveRetrieveTransfer_pargs() throw() {}

  const Params* p;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_ActiveRetrieveTransfer_result__isset {
  _slave_services_ActiveRetrieveTransfer_result__isset() : success(false) {}
  bool success;
} _slave_services_ActiveRetrieveTransfer_result__isset;

class slave_services_ActiveRetrieveTransfer_result {
 public:

  slave_services_ActiveRetrieveTransfer_result() : success(0) {
  }

  virtual ~slave_services_ActiveRetrieveTransfer_result() throw() {}

  bool success;

  _slave_services_ActiveRetrieveTransfer_result__isset __isset;

  void __set_success(const bool val) {
    success = val;
  }

  bool operator == (const slave_services_ActiveRetrieveTransfer_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const slave_services_ActiveRetrieveTransfer_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_ActiveRetrieveTransfer_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_ActiveRetrieveTransfer_presult__isset {
  _slave_services_ActiveRetrieveTransfer_presult__isset() : success(false) {}
  bool success;
} _slave_services_ActiveRetrieveTransfer_presult__isset;

class slave_services_ActiveRetrieveTransfer_presult {
 public:


  virtual ~slave_services_ActiveRetrieveTransfer_presult() throw() {}

  bool* success;

  _slave_services_ActiveRetrieveTransfer_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _slave_services_PasvRetrieveTransfer_args__isset {
  _slave_services_PasvRetrieveTransfer_args__isset() : p(false) {}
  bool p;
} _slave_services_PasvRetrieveTransfer_args__isset;

class slave_services_PasvRetrieveTransfer_args {
 public:

  slave_services_PasvRetrieveTransfer_args() {
  }

  virtual ~slave_services_PasvRetrieveTransfer_args() throw() {}

  Params p;

  _slave_services_PasvRetrieveTransfer_args__isset __isset;

  void __set_p(const Params& val) {
    p = val;
  }

  bool operator == (const slave_services_PasvRetrieveTransfer_args & rhs) const
  {
    if (!(p == rhs.p))
      return false;
    return true;
  }
  bool operator != (const slave_services_PasvRetrieveTransfer_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_PasvRetrieveTransfer_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class slave_services_PasvRetrieveTransfer_pargs {
 public:


  virtual ~slave_services_PasvRetrieveTransfer_pargs() throw() {}

  const Params* p;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_PasvRetrieveTransfer_result__isset {
  _slave_services_PasvRetrieveTransfer_result__isset() : success(false) {}
  bool success;
} _slave_services_PasvRetrieveTransfer_result__isset;

class slave_services_PasvRetrieveTransfer_result {
 public:

  slave_services_PasvRetrieveTransfer_result() : success(0) {
  }

  virtual ~slave_services_PasvRetrieveTransfer_result() throw() {}

  bool success;

  _slave_services_PasvRetrieveTransfer_result__isset __isset;

  void __set_success(const bool val) {
    success = val;
  }

  bool operator == (const slave_services_PasvRetrieveTransfer_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const slave_services_PasvRetrieveTransfer_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const slave_services_PasvRetrieveTransfer_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _slave_services_PasvRetrieveTransfer_presult__isset {
  _slave_services_PasvRetrieveTransfer_presult__isset() : success(false) {}
  bool success;
} _slave_services_PasvRetrieveTransfer_presult__isset;

class slave_services_PasvRetrieveTransfer_presult {
 public:


  virtual ~slave_services_PasvRetrieveTransfer_presult() throw() {}

  bool* success;

  _slave_services_PasvRetrieveTransfer_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class slave_servicesClient : virtual public slave_servicesIf {
 public:
  slave_servicesClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) :
    piprot_(prot),
    poprot_(prot) {
    iprot_ = prot.get();
    oprot_ = prot.get();
  }
  slave_servicesClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) :
    piprot_(iprot),
    poprot_(oprot) {
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  bool ActiveStoreTransfer(const Params& p, const int32_t iflags);
  void send_ActiveStoreTransfer(const Params& p, const int32_t iflags);
  bool recv_ActiveStoreTransfer();
  bool PasvStoreTransfer(const Params& p, const int32_t iflags);
  void send_PasvStoreTransfer(const Params& p, const int32_t iflags);
  bool recv_PasvStoreTransfer();
  bool ActiveRetrieveTransfer(const Params& p);
  void send_ActiveRetrieveTransfer(const Params& p);
  bool recv_ActiveRetrieveTransfer();
  bool PasvRetrieveTransfer(const Params& p);
  void send_PasvRetrieveTransfer(const Params& p);
  bool recv_PasvRetrieveTransfer();
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class slave_servicesProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<slave_servicesIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (slave_servicesProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ActiveStoreTransfer(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_PasvStoreTransfer(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ActiveRetrieveTransfer(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_PasvRetrieveTransfer(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  slave_servicesProcessor(boost::shared_ptr<slave_servicesIf> iface) :
    iface_(iface) {
    processMap_["ActiveStoreTransfer"] = &slave_servicesProcessor::process_ActiveStoreTransfer;
    processMap_["PasvStoreTransfer"] = &slave_servicesProcessor::process_PasvStoreTransfer;
    processMap_["ActiveRetrieveTransfer"] = &slave_servicesProcessor::process_ActiveRetrieveTransfer;
    processMap_["PasvRetrieveTransfer"] = &slave_servicesProcessor::process_PasvRetrieveTransfer;
  }

  virtual ~slave_servicesProcessor() {}
};

class slave_servicesProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  slave_servicesProcessorFactory(const ::boost::shared_ptr< slave_servicesIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< slave_servicesIfFactory > handlerFactory_;
};

class slave_servicesMultiface : virtual public slave_servicesIf {
 public:
  slave_servicesMultiface(std::vector<boost::shared_ptr<slave_servicesIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~slave_servicesMultiface() {}
 protected:
  std::vector<boost::shared_ptr<slave_servicesIf> > ifaces_;
  slave_servicesMultiface() {}
  void add(boost::shared_ptr<slave_servicesIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  bool ActiveStoreTransfer(const Params& p, const int32_t iflags) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ActiveStoreTransfer(p, iflags);
    }
    return ifaces_[i]->ActiveStoreTransfer(p, iflags);
  }

  bool PasvStoreTransfer(const Params& p, const int32_t iflags) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->PasvStoreTransfer(p, iflags);
    }
    return ifaces_[i]->PasvStoreTransfer(p, iflags);
  }

  bool ActiveRetrieveTransfer(const Params& p) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ActiveRetrieveTransfer(p);
    }
    return ifaces_[i]->ActiveRetrieveTransfer(p);
  }

  bool PasvRetrieveTransfer(const Params& p) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->PasvRetrieveTransfer(p);
    }
    return ifaces_[i]->PasvRetrieveTransfer(p);
  }

};

} // namespace

#endif
