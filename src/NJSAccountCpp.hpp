// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSACCOUNT_HPP
#define DJINNI_GENERATED_NJSACCOUNT_HPP


#include "../include/TimePeriod.hpp"
#include "../include/WalletType.hpp"
#include "NJSAddressListCallback.hpp"
#include "NJSAmountCallback.hpp"
#include "NJSAmountListCallback.hpp"
#include "NJSBitcoinLikeAccountCpp.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSErrorCodeCallback.hpp"
#include "NJSEthereumLikeAccountCpp.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSOperationQueryCpp.hpp"
#include "NJSPreferencesCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/Account.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAccount final {
public:

    static void Initialize(Local<Object> target);
    NJSAccount() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Account> &object);
    static Nan::Persistent<ObjectTemplate> Account_prototype;

private:
    /**
     * Get index of account in user's wallet
     * 32-bit integer
     */
    static NAN_METHOD(getIndex);

    /** Get the list of all operations. */
    static NAN_METHOD(queryOperations);

    /**
     * Get balance of account.
     * @param callback, if getBalacne, Callback returning an Amount object which represents account's balance
     */
    static NAN_METHOD(getBalance);

    /**
     * Get balance of account at a precise interval with a certain granularity.
     * @param start, lower bound of search range
     * @param end, upper bound of search range
     * @param precision, granularity at which we want results
     * @param callback, ListCallback returning a list of Amount object which represents account's balance
     */
    static NAN_METHOD(getBalanceHistory);

    /**
     * Get synchronization status of account.
     * @return bool
     */
    static NAN_METHOD(isSynchronizing);

    /**
     * Start synchronization of account.
     * @return EventBus, handler will be notified of synchronization outcome
     */
    static NAN_METHOD(synchronize);

    /**
     * Return account's preferences.
     * @return Preferences object
     */
    static NAN_METHOD(getPreferences);

    /**
     * Return account's logger which provides all needed (e.g. database) logs.
     * @return Logger Object
     */
    static NAN_METHOD(getLogger);

    /**
     * Return operation for a specific operation.
     * @param uid, string of operation id
     */
    static NAN_METHOD(getOperationPreferences);

    /**
     * Turn the account into an Bitcoin one, allowing operations to be performerd on the Bitcoin
     * network.
     */
    static NAN_METHOD(asBitcoinLikeAccount);

    /**
     * Turn the account into an Ethereum one, allowing operations to be performerd on the Ethereum
     * network.
     */
    static NAN_METHOD(asEthereumLikeAccount);

    /**
     * Check if account is a Bitcoin one.
     * @return bool
     */
    static NAN_METHOD(isInstanceOfBitcoinLikeAccount);

    /**
     * Check if account is an Ethereum one.
     * @return bool
     */
    static NAN_METHOD(isInstanceOfEthereumLikeAccount);

    /**
     * Check if account is a Ripple one.
     * @return bool
     */
    static NAN_METHOD(isInstanceOfRippleLikeAccount);

    /**TODO */
    static NAN_METHOD(getFreshPublicAddresses);

    /**
     * Get type of wallet to which account belongs.
     * @return WalletType object
     */
    static NAN_METHOD(getWalletType);

    /**
     * Get event bus through which account is notified on synchronization status.
     * @return EventBus object
     */
    static NAN_METHOD(getEventBus);

    /** Start observing blockchain on which account synchronizes and send/receive transactions. */
    static NAN_METHOD(startBlockchainObservation);

    /** Stop observing blockchain. */
    static NAN_METHOD(stopBlockchainObservation);

    /**
     * Get account's observation status.
     * @return boolean
     */
    static NAN_METHOD(isObservingBlockchain);

    /**
     * Get Last block of blockchain on which account operates.
     * @param callback, Callback returning, if getLastBlock succeeds, a Block object
     */
    static NAN_METHOD(getLastBlock);

    /** Get the key used to generate the account. */
    static NAN_METHOD(getRestoreKey);

    /**
     * Erase data (in user's DB) relative to wallet since given date.
     * @param date, start date of data deletion
     */
    static NAN_METHOD(eraseDataSince);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSACCOUNT_HPP
