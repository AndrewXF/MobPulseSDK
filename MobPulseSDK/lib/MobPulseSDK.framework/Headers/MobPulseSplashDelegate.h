//
//  MobPulseSplashProtocol.h
//  AdvanceSDKExample
//
//  Created by xiefei on 2020/4/8.
//  Copyright © 2020 Mercury. All rights reserved.
//

#ifndef MobPulseSplashProtocol_h
#define MobPulseSplashProtocol_h
#import "MobPulseBaseDelegate.h"
@protocol MobPulseSplashDelegate <MobPulseBaseDelegate>
@optional
/// 广告点击跳过
- (void)mobPulseSplashOnAdSkipClicked;

/// 广告倒计时结束回调 百度广告不支持该回调
- (void)mobPulseSplashOnAdCountdownToZero;


@end

#endif 
