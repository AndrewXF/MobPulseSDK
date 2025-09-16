//
//  MobPulseFullScreenVideo.h
//  AdvanceSDKDev
//
//  Created by xiefei on 2020/4/13.
//  Copyright © 2020 bayescom. All rights reserved.
//

#import "MobPulseBaseAdapter.h"
#import <UIKit/UIKit.h>
#import "MobPulseError.h"

@protocol MobPulseFullScreenVideoDelegate;

@interface MobPulseFullScreenVideo : MobPulseBaseAdapter
/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseFullScreenVideoDelegate> delegate;

- (nonnull instancetype)initWithJsonDic:(nonnull NSDictionary *)jsonDic
                 viewController:(nonnull UIViewController *)viewController;

@end

