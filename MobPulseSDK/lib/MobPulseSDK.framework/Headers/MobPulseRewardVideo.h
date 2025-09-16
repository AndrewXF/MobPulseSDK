//
//  MobPulseRewardVideo.h
//  AdvanceSDKExample
//
//  Created by xiefei on 2020/4/7.
//  Copyright © 2020 Mercury. All rights reserved.
//

#import "MobPulseBaseAdapter.h"
#import "MobPulseError.h"

#import <UIKit/UIKit.h>

#import "MobPulseConfig.h"

#import "MobPulseRewardVideoDelegate.h"

@interface MobPulseRewardVideo : MobPulseBaseAdapter
/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseRewardVideoDelegate> delegate;

/// 展示的controller, 如果不传默认使用keyWindow.rootVC
/// @param placeMentId 广告位id
/// @param viewController viewController
- (nonnull instancetype)initWithPlaceMentId:(NSString *_Nonnull)placeMentId
                              viewController:( UIViewController * _Nonnull)viewController;


@end
