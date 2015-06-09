#ifndef VW_INSTANCE_H
#define VW_INSTANCE_H

#include <node.h>
#include <node_object_wrap.h>
#include "../vowpalwabbit/vw.h"

class VWInstance : public node::ObjectWrap {
 public:
  static void Init();
  static void NewInstance(const v8::FunctionCallbackInfo<v8::Value>& args);

private:
  explicit VWInstance(vw* vw_handle);
  ~VWInstance();

  static void New(const v8::FunctionCallbackInfo<v8::Value>& args);
  static v8::Persistent<v8::Function> constructor;
  vw* vw_handle_;

};

#endif
