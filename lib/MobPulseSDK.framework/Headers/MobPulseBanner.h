//
//  MobPulseBanner.h
//  AdvanceSDKExample
//
//  Created by xiefei on 2020/4/7.
//  Copyright © 2020 Mercury. All rights reserved.
//

#import "MobPulseBaseAdapter.h"
#import "MobPulseBannerDelegate.h"
#import <UIKit/UIKit.h>
#import "MobPulseError.h"

@protocol MobPulseBannerDelegate;

@interface MobPulseBanner : MobPulseBaseAdapter
/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseBannerDelegate> delegate;

@property(nonatomic, weak) UIView *adContainer;

@property(nonatomic, assign) int refreshInterval;

- (nonnull instancetype)initWithJsonDic:(nonnull NSDictionary *)jsonDic
                    adContainer:(nonnull UIView *)adContainer
                 viewController:(nonnull UIViewController *)viewController;

@end
