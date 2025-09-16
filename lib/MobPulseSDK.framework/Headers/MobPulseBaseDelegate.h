//
//  MobPulseBaseDelegate.h
//  Pods
//
//  Created by MS on 2020/12/9.
//

#ifndef MobPulseBaseDelegate_h
#define MobPulseBaseDelegate_h
#import "MobPulseCommonDelegate.h"

// 策略相关的代理
@protocol MobPulseBaseDelegate <MobPulseCommonDelegate>

@optional

/// 广告曝光成功
- (void)mobPulseSDKExposured;

/// 广告点击回调
- (void)mobPulseSDKClicked;

/// 广告数据请求成功后调用
- (void)mobPulseUnifiedViewDidLoad;

/// 广告数据请求失败
- (void)mobPulseUnifiedViewDidLoadFailed;

/// 广告关闭的回调
- (void)mobPulseSDKDidClose;

@end

#endif /* MobPulseBaseDelegate_h */
