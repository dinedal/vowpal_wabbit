#include <node.h>

#include "../vowpalwabbit/vw.h"
#include "../vowpalwabbit/multiclass.h"
#include "../vowpalwabbit/cost_sensitive.h"
#include "../vowpalwabbit/cb.h"
#include "../vowpalwabbit/search.h"
#include "../vowpalwabbit/search_hooktask.h"
#include "../vowpalwabbit/parse_example.h"
#include "../vowpalwabbit/gd.h"
#include "../vowpalwabbit/parser.h"


using namespace v8;

void Method(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "hello world!"));
}

void InitVW(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);

  VW::initialize("");
  args.GetReturnValue().Set(True(isolate));
}

void init(Handle<Object> exports) {
  NODE_SET_METHOD(exports, "vowpal_wabbit", Method);
  NODE_SET_METHOD(exports, "init", InitVW);
}

NODE_MODULE(addon, init)
