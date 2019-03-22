// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#ifndef DJINNI_GENERATED_NJSRIPPLELIKEEXTENDEDPUBLICKEY_HPP
#define DJINNI_GENERATED_NJSRIPPLELIKEEXTENDEDPUBLICKEY_HPP


#include "NJSRippleLikeAddressCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/RippleLikeExtendedPublicKey.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSRippleLikeExtendedPublicKey final {
public:

    static void Initialize(Local<Object> target);
    NJSRippleLikeExtendedPublicKey() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::RippleLikeExtendedPublicKey> &object);
    static Nan::Persistent<ObjectTemplate> RippleLikeExtendedPublicKey_prototype;

private:
    static NAN_METHOD(derive);

    static NAN_METHOD(derivePublicKey);

    static NAN_METHOD(deriveHash160);

    static NAN_METHOD(toBase58);

    static NAN_METHOD(getRootPath);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSRIPPLELIKEEXTENDEDPUBLICKEY_HPP
