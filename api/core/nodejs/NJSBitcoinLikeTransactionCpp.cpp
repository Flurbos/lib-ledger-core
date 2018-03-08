// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeTransactionCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeTransaction::getHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getHash : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getInputs) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getInputs needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getInputs : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getInputs();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_0_elem = NJSBitcoinLikeInput::wrap(result[i]);

        arg_0->Set((int)i,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getOutputs) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getOutputs needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getOutputs : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getOutputs();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_0_elem = NJSBitcoinLikeOutput::wrap(result[i]);

        arg_0->Set((int)i,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getBlock) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getBlock needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getBlock : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getBlock();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeBlock::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getLockTime) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getLockTime needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getLockTime : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getLockTime();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getFees : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getFees();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransaction::getTime) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getTime needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransaction* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransaction>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction::getTime : implementation of BitcoinLikeTransaction is not valid");
    }

    auto result = cpp_impl->getTime();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::seconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSBitcoinLikeTransaction::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeTransaction function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeTransaction *node_instance = new NJSBitcoinLikeTransaction(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeTransaction::BitcoinLikeTransaction_prototype;

Handle<Object> NJSBitcoinLikeTransaction::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeTransaction> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeTransaction_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeTransaction *new_obj = new NJSBitcoinLikeTransaction(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeTransaction::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeTransaction::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeTransaction::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeTransaction").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getHash", getHash);
    Nan::SetPrototypeMethod(func_template,"getInputs", getInputs);
    Nan::SetPrototypeMethod(func_template,"getOutputs", getOutputs);
    Nan::SetPrototypeMethod(func_template,"getBlock", getBlock);
    Nan::SetPrototypeMethod(func_template,"getLockTime", getLockTime);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getTime", getTime);
    //Set object prototype
    BitcoinLikeTransaction_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeTransaction").ToLocalChecked(), func_template->GetFunction());
}
