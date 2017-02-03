// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "../../api/LedgerCoreTestCallback.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class LedgerCoreTestCallback final : ::djinni::JniInterface<::ledger::core::api::LedgerCoreTestCallback, LedgerCoreTestCallback> {
public:
    using CppType = std::shared_ptr<::ledger::core::api::LedgerCoreTestCallback>;
    using CppOptType = std::shared_ptr<::ledger::core::api::LedgerCoreTestCallback>;
    using JniType = jobject;

    using Boxed = LedgerCoreTestCallback;

    ~LedgerCoreTestCallback();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<LedgerCoreTestCallback>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<LedgerCoreTestCallback>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    LedgerCoreTestCallback();
    friend ::djinni::JniClass<LedgerCoreTestCallback>;
    friend ::djinni::JniInterface<::ledger::core::api::LedgerCoreTestCallback, LedgerCoreTestCallback>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::ledger::core::api::LedgerCoreTestCallback
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void onCallback(const std::shared_ptr<::ledger::core::api::LedgerCore> & value, const std::experimental::optional<::ledger::core::api::Error> & error) override;
        void onValue(const std::shared_ptr<::ledger::core::api::LedgerCore> & value) override;
        std::shared_ptr<::ledger::core::api::LedgerCore> getValue() override;

    private:
        friend ::djinni::JniInterface<::ledger::core::api::LedgerCoreTestCallback, ::djinni_generated::LedgerCoreTestCallback>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/LedgerCoreTestCallback") };
    const jmethodID method_onCallback { ::djinni::jniGetMethodID(clazz.get(), "onCallback", "(Lco/ledger/core/LedgerCore;Lco/ledger/core/Error;)V") };
    const jmethodID method_onValue { ::djinni::jniGetMethodID(clazz.get(), "onValue", "(Lco/ledger/core/LedgerCore;)V") };
    const jmethodID method_getValue { ::djinni::jniGetMethodID(clazz.get(), "getValue", "()Lco/ledger/core/LedgerCore;") };
};

}  // namespace djinni_generated