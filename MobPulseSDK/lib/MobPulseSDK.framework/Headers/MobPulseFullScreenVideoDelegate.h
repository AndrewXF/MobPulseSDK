//
//  MobPulseFullScreenVideoDelegate.h
//  AdvanceSDKDev
//
//  Created by xiefei on 2020/4/13.
//  Copyright © 2020 bayescom. All rights reserved.
//

#ifndef MobPulseFullScreenVideoDelegate_h
#define MobPulseFullScreenVideoDelegate_h
#import "MobPulseBaseDelegate.h"
@protocol MobPulseFullScreenVideoDelegate <MobPulseBaseDelegate>
@optional
/// 视频播放完成
- (void)easyAdFullScreenVideoOnAdPlayFinish;


@end

#endif
