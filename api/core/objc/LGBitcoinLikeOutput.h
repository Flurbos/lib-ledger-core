// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import <Foundation/Foundation.h>
@class LGAmount;


@interface LGBitcoinLikeOutput : NSObject

- (nonnull NSString *)getTransactionHash;

- (int32_t)getOutputIndex;

- (nullable LGAmount *)getValue;

- (nonnull NSData *)getScript;

- (nullable NSString *)getAddress;

@end
