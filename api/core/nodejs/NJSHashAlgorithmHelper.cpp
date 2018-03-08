// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto.djinni

#include "NJSHashAlgorithmHelper.hpp"

using namespace v8;
using namespace node;
using namespace std;

std::vector<uint8_t> NJSHashAlgorithmHelper::ripemd160(const std::vector<uint8_t> & data)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < data.size(); i++)
    {
        auto arg_0_elem = Nan::New<Uint32>(data[i]);
        arg_0->Set((int)i,arg_0_elem);
    }

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::ripemd160 fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("ripemd160").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_ripemd160 = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_ripemd160.IsEmpty())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::ripemd160 call failed");
    }
    auto checkedResult_ripemd160 = result_ripemd160.ToLocalChecked();
    vector<uint8_t> fResult_ripemd160;
    Local<Array> fResult_ripemd160_container = Local<Array>::Cast(checkedResult_ripemd160);
    for(uint32_t i = 0; i < fResult_ripemd160_container->Length(); i++)
    {
        if(fResult_ripemd160_container->Get(i)->IsUint32())
        {
            auto fResult_ripemd160_elem = Nan::To<uint32_t>(fResult_ripemd160_container->Get(i)).FromJust();
            fResult_ripemd160.emplace_back(fResult_ripemd160_elem);
        }
    }

    return fResult_ripemd160;
}

std::vector<uint8_t> NJSHashAlgorithmHelper::sha256(const std::vector<uint8_t> & data)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < data.size(); i++)
    {
        auto arg_0_elem = Nan::New<Uint32>(data[i]);
        arg_0->Set((int)i,arg_0_elem);
    }

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::sha256 fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("sha256").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_sha256 = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_sha256.IsEmpty())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::sha256 call failed");
    }
    auto checkedResult_sha256 = result_sha256.ToLocalChecked();
    vector<uint8_t> fResult_sha256;
    Local<Array> fResult_sha256_container = Local<Array>::Cast(checkedResult_sha256);
    for(uint32_t i = 0; i < fResult_sha256_container->Length(); i++)
    {
        if(fResult_sha256_container->Get(i)->IsUint32())
        {
            auto fResult_sha256_elem = Nan::To<uint32_t>(fResult_sha256_container->Get(i)).FromJust();
            fResult_sha256.emplace_back(fResult_sha256_elem);
        }
    }

    return fResult_sha256;
}

std::vector<uint8_t> NJSHashAlgorithmHelper::keccak256(const std::vector<uint8_t> & data)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < data.size(); i++)
    {
        auto arg_0_elem = Nan::New<Uint32>(data[i]);
        arg_0->Set((int)i,arg_0_elem);
    }

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::keccak256 fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("keccak256").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_keccak256 = Nan::CallAsFunction(calling_funtion->ToObject(),handle,1,args);
    if(result_keccak256.IsEmpty())
    {
        Nan::ThrowError("NJSHashAlgorithmHelper::keccak256 call failed");
    }
    auto checkedResult_keccak256 = result_keccak256.ToLocalChecked();
    vector<uint8_t> fResult_keccak256;
    Local<Array> fResult_keccak256_container = Local<Array>::Cast(checkedResult_keccak256);
    for(uint32_t i = 0; i < fResult_keccak256_container->Length(); i++)
    {
        if(fResult_keccak256_container->Get(i)->IsUint32())
        {
            auto fResult_keccak256_elem = Nan::To<uint32_t>(fResult_keccak256_container->Get(i)).FromJust();
            fResult_keccak256.emplace_back(fResult_keccak256_elem);
        }
    }

    return fResult_keccak256;
}

NAN_METHOD(NJSHashAlgorithmHelper::addRef) {

    NJSHashAlgorithmHelper *obj = Nan::ObjectWrap::Unwrap<NJSHashAlgorithmHelper>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSHashAlgorithmHelper::removeRef) {

    NJSHashAlgorithmHelper *obj = Nan::ObjectWrap::Unwrap<NJSHashAlgorithmHelper>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSHashAlgorithmHelper::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSHashAlgorithmHelper function can only be called as constructor (use New)");
    }

    NJSHashAlgorithmHelper *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSHashAlgorithmHelper(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSHashAlgorithmHelper::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSHashAlgorithmHelper::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSHashAlgorithmHelper::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSHashAlgorithmHelper").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSHashAlgorithmHelper").ToLocalChecked(), func_template->GetFunction());
}
