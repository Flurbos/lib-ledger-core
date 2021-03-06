// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_QUERYFILTER_HPP
#define DJINNI_GENERATED_QUERYFILTER_HPP

#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

namespace ledger { namespace core { namespace api {

class Amount;
enum class OperationType;
enum class TrustLevel;

/**TODO */
class QueryFilter {
public:
    virtual ~QueryFilter() {}

    static std::shared_ptr<QueryFilter> accountEq(const std::string & accountUid);

    static std::shared_ptr<QueryFilter> accountNeq(const std::string & accountUid);

    static std::shared_ptr<QueryFilter> dateLte(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> dateLt(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> dateGt(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> dateGte(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> dateEq(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> dateNeq(const std::chrono::system_clock::time_point & time);

    static std::shared_ptr<QueryFilter> containsRecipient(const std::string & recipientAddress);

    static std::shared_ptr<QueryFilter> containsSender(const std::string & senderAddress);

    static std::shared_ptr<QueryFilter> currencyEq(const std::string & currencyName);

    static std::shared_ptr<QueryFilter> operationUidEq(const std::string & operationUid);

    static std::shared_ptr<QueryFilter> operationUidNeq(const std::string & operationUid);

    static std::shared_ptr<QueryFilter> trustEq(TrustLevel trust);

    static std::shared_ptr<QueryFilter> trustNeq(TrustLevel trust);

    static std::shared_ptr<QueryFilter> feesEq(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> feesNeq(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> feesGte(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> feesGt(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> feesLte(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> feesLt(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountEq(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountNeq(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountGte(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountGt(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountLte(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> amountLt(const std::shared_ptr<Amount> & amount);

    static std::shared_ptr<QueryFilter> blockHeightEq(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightNeq(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightGte(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightGt(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightLte(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightLt(int64_t blockHeight);

    static std::shared_ptr<QueryFilter> blockHeightIsNull();

    static std::shared_ptr<QueryFilter> operationTypeEq(OperationType operationType);

    static std::shared_ptr<QueryFilter> operationTypeNeq(OperationType operationType);

    virtual std::shared_ptr<QueryFilter> op_and(const std::shared_ptr<QueryFilter> & filter) = 0;

    virtual std::shared_ptr<QueryFilter> op_or(const std::shared_ptr<QueryFilter> & filter) = 0;

    virtual std::shared_ptr<QueryFilter> op_and_not(const std::shared_ptr<QueryFilter> & filter) = 0;

    virtual std::shared_ptr<QueryFilter> op_or_not(const std::shared_ptr<QueryFilter> & filter) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_QUERYFILTER_HPP
