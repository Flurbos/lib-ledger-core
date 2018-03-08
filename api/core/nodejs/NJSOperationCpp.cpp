// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSOperationCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSOperation::getUid) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getUid needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getUid : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getUid();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getAccountIndex) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getAccountIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getAccountIndex : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getAccountIndex();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getOperationType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getOperationType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getOperationType : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getOperationType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getDate) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getDate needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getDate : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getDate();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::seconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getSenders) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getSenders needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getSenders : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getSenders();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_0_elem = Nan::New<String>(result[i]).ToLocalChecked();
        arg_0->Set((int)i,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getRecipients) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getRecipients needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getRecipients : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getRecipients();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t i = 0; i < result.size(); i++)
    {
        auto arg_0_elem = Nan::New<String>(result[i]).ToLocalChecked();
        arg_0->Set((int)i,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getAmount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getAmount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getAmount : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getAmount();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getFees : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getFees();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getPreferences : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0 = NJSPreferences::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getTrust) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getTrust needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getTrust : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getTrust();

    //Wrap result in node object
    auto arg_0 = NJSTrustIndicator::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getBlockHeight) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getBlockHeight needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getBlockHeight : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getBlockHeight();

    //Wrap result in node object
    auto arg_0 = Nan::New<Number>((*result));

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::asBitcoinLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::asBitcoinLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::asBitcoinLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->asBitcoinLikeOperation();

    //Wrap result in node object
    auto arg_0 = NJSBitcoinLikeOperation::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfBitcoinLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfBitcoinLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfBitcoinLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfBitcoinLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfEthereumLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfEthereumLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfEthereumLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfEthereumLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isInstanceOfRippleLikeOperation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfRippleLikeOperation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isInstanceOfRippleLikeOperation : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isInstanceOfRippleLikeOperation();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::isComplete) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::isComplete needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::isComplete : implementation of Operation is not valid");
    }

    auto result = cpp_impl->isComplete();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSOperation::getWalletType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSOperation::getWalletType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSOperation* obj = Nan::ObjectWrap::Unwrap<NJSOperation>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSOperation::getWalletType : implementation of Operation is not valid");
    }

    auto result = cpp_impl->getWalletType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSOperation::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSOperation function can only be called as constructor (use New)");
    }
    NJSOperation *node_instance = new NJSOperation(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSOperation::Operation_prototype;

Handle<Object> NJSOperation::wrap(const std::shared_ptr<ledger::core::api::Operation> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Operation_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSOperation *new_obj = new NJSOperation(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSOperation::wrap: object template not valid");
    }
    return obj;
}

void NJSOperation::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSOperation::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSOperation").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getUid", getUid);
    Nan::SetPrototypeMethod(func_template,"getAccountIndex", getAccountIndex);
    Nan::SetPrototypeMethod(func_template,"getOperationType", getOperationType);
    Nan::SetPrototypeMethod(func_template,"getDate", getDate);
    Nan::SetPrototypeMethod(func_template,"getSenders", getSenders);
    Nan::SetPrototypeMethod(func_template,"getRecipients", getRecipients);
    Nan::SetPrototypeMethod(func_template,"getAmount", getAmount);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getTrust", getTrust);
    Nan::SetPrototypeMethod(func_template,"getBlockHeight", getBlockHeight);
    Nan::SetPrototypeMethod(func_template,"asBitcoinLikeOperation", asBitcoinLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfBitcoinLikeOperation", isInstanceOfBitcoinLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfEthereumLikeOperation", isInstanceOfEthereumLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfRippleLikeOperation", isInstanceOfRippleLikeOperation);
    Nan::SetPrototypeMethod(func_template,"isComplete", isComplete);
    Nan::SetPrototypeMethod(func_template,"getWalletType", getWalletType);
    //Set object prototype
    Operation_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSOperation").ToLocalChecked(), func_template->GetFunction());
}
