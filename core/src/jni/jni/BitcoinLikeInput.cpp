// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeInput.hpp"  // my header
#include "Amount.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeInput::BitcoinLikeInput() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeInput, BitcoinLikeInput>("co/ledger/core/BitcoinLikeInput$CppProxy") {}

BitcoinLikeInput::~BitcoinLikeInput() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeInput>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1getAddress(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->getAddress();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1getValue(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->getValue();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni_generated::Amount>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1isCoinbase(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->isCoinbase();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1getCoinbase(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->getCoinbase();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jstring JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1getPreviousTxHash(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->getPreviousTxHash();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_ledger_core_BitcoinLikeInput_00024CppProxy_native_1getPreviousOutputIndex(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeInput>(nativeRef);
        auto r = ref->getPreviousOutputIndex();
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni::I32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
