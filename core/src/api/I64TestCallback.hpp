// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#pragma once

#include "../utils/optional.hpp"
#include <cstdint>

namespace ledger { namespace core { namespace api {

struct Error;

class I64TestCallback {
public:
    virtual ~I64TestCallback() {}

    virtual void onCallback(std::experimental::optional<int64_t> value, const std::experimental::optional<Error> & error) = 0;

    virtual void onValue(int64_t value) = 0;

    virtual int64_t getValue() = 0;
};

} } }  // namespace ledger::core::api