//
//  MobPulseInterstitial.h
//  AdvanceSDKExample
//
//  Created by xiefei on 2020/4/7.
//  Copyright © 2020 Mercury. All rights reserved.
//

#import "MobPulseBaseAdapter.h"
#import "MobPulseInterstitialDelegate.h"
#import "MobPulseError.h"

#import <UIKit/UIKit.h>


@interface MobPulseInterstitial : MobPulseBaseAdapter
/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseInterstitialDelegate> delegate;

/// 展示的controller, 如果不传默认使用keyWindow.rootVC
/// @param placeMentId 广告位id
/// @param viewController viewController
- (nonnull instancetype)initWithPlaceMentId:(NSString *_Nonnull)placeMentId
                 viewController:(UIViewController * _Nonnull)viewController;



// 新增方法，便于开发者手动移除
- (void)removeAdView;

@end

