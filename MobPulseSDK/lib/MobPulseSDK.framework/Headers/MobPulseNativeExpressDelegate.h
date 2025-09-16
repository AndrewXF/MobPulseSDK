//
//  MobPulseNativeExpressProtocol.h
//  AdvanceSDKDev
//
//  Created by xiefei on 2020/4/9.
//  Copyright © 2020 bayescom. All rights reserved.
//

#ifndef MobPulseNativeExpressProtocol_h
#define MobPulseNativeExpressProtocol_h
#import "MobPulseCommonDelegate.h"
@class MobPulseNativeExpressView;
@protocol MobPulseNativeExpressDelegate <MobPulseCommonDelegate>
@optional
/// 广告数据拉取成功
- (void)mobPulseNativeExpressOnAdLoadSuccess:(nullable NSArray<MobPulseNativeExpressView *> *)views;

/// 广告曝光
- (void)mobPulseNativeExpressOnAdShow:(nullable MobPulseNativeExpressView *)adView;

/// 广告点击
- (void)mobPulseNativeExpressOnAdClicked:(nullable MobPulseNativeExpressView *)adView;

/// 广告渲染成功
- (void)mobPulseNativeExpressOnAdRenderSuccess:(nullable MobPulseNativeExpressView *)adView;

/// 广告渲染失败
- (void)mobPulseNativeExpressOnAdRenderFail:(nullable MobPulseNativeExpressView *)adView;

/// 广告被关闭 (注: 百度广告(百青藤), 不支持该回调, 若使用百青藤,则该回到功能请自行实现)
- (void)mobPulseNativeExpressOnAdClosed:(nullable MobPulseNativeExpressView *)adView;

@end

#endif
