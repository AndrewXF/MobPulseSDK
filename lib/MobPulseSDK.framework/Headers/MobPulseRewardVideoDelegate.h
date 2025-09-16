//
//  MobPulseRewardVideoProtocol.h
//  AdvanceSDKDev
//
//  Created by xiefei on 2020/4/9.
//  Copyright © 2020 bayescom. All rights reserved.
//

#ifndef MobPulseRewardVideoProtocol_h
#define MobPulseRewardVideoProtocol_h
#import "MobPulseBaseDelegate.h"
@protocol MobPulseRewardVideoDelegate <MobPulseBaseDelegate>
@optional

/// 广告视频缓存完成
- (void)easyAdRewardVideoOnAdVideoCached;

/// 广告视频播放完成
- (void)easyAdRewardVideoAdDidPlayFinish;

/// 广告到达激励时间
- (void)easyAdRewardVideoAdDidRewardEffective;

@end

#endif
