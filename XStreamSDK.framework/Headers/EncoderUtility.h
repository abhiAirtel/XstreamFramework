//
//  EncoderUtility.h
//  PlayerSdk
//
//  Created by B0207468 on 21/01/19.
//  Copyright © 2019 Wynk. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EncoderUtility : NSObject

+ (NSString *)hmac_sha256:(NSString *)key text:(NSString *)text;
+ (NSString *)getCurrentSystemTime;
+ (NSString *)getMCCMNCForAnalytics;
+ (NSString *)hmac_sha1:(NSString *)key text:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
