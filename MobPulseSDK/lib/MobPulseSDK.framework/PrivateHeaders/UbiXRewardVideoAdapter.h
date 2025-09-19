//
//  UbiXRewardVideoAdapter.h
//  MobPulse
//
//  Created by xiefei10 on 7/10/24.
//

#import "MobPulseBaseAdPosition.h"
#import "MobPulseRewardVideoDelegate.h"
#import "MobPulseBaseAdPosition.h"

NS_ASSUME_NONNULL_BEGIN
@class MobPulseSDKSupplier;
@class MobPulseRewardVideo;

@interface UbiXRewardVideoAdapter : MobPulseBaseAdPosition

@property (nonatomic, weak) id<MobPulseRewardVideoDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
