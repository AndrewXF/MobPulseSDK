//
//  MobPulseConfig.h
//  advancelib
//
//  Created by allen on 2024/9/12.
//  Copyright © 2019 Bayescom. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobPulseMediationSDK.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger,MobPulseSDKLogLevel) {
    MobPulseSDKLogLevel_None  = 0, // 不打印
    MobPulseSDKLogLevel_Fatal,
    MobPulseSDKLogLevel_Error,
    MobPulseSDKLogLevel_Warning,
    MobPulseSDKLogLevel_Info,
    MobPulseSDKLogLevel_Debug,
};


// MARK: ======================= SDK =======================
extern NSString *const Mob_AdvanceSdkVersion;

extern NSString *const MOBPULSE_SDK_TAG_GDT;
extern NSString *const MOBPULSE_SDK_TAG_CSJ;
extern NSString *const MOBPULSE_SDK_TAG_KS;
extern NSString *const MOBPULSE_SDK_TAG_BAIDU;
extern NSString *const MOBPULSE_SDK_TAG_UBIX;
extern NSString *const MOBPULSE_SDK_TAG_MS;

extern NSString *const MobPulseSDKSdkTypeAdName;
extern NSString *const MobPulseSDKSdkTypeAdNameSplash;
extern NSString *const MobPulseSDKSdkTypeAdNameBanner;
extern NSString *const MobPulseSDKSdkTypeAdNameInterstitial;
extern NSString *const MobPulseSDKSdkTypeAdNameFullScreenVideo;
extern NSString *const MobPulseSDKSdkTypeAdNameNativeExpress;
extern NSString *const MobPulseSDKSdkTypeAdNameRewardVideo;

@interface MobPulseConfig : NSObject

/// SDK版本
+ (NSString *)sdkVersion;

+ (instancetype)shareInstance;

/// 控制台log级别
/// 0 不打印
/// 1 打印fatal
/// 2 fatal + error
/// 3 fatal + error + warning
/// 4 fatal + error + warning + info
/// 5 全部打印
@property (nonatomic, assign) MobPulseSDKLogLevel level;

///初始配置
@property (nonatomic, strong) MobPulseMediationSDK *configModel;

@end

NS_ASSUME_NONNULL_END
