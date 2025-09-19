//
//  UbiXInterstitialAdapter.h
//  MobPulse
//
//  Created by xiefei10 on 7/10/24.
//

#import <Foundation/Foundation.h>
#import "MobPulseInterstitialDelegate.h"
#import "MobPulseBaseAdPosition.h"

NS_ASSUME_NONNULL_BEGIN

@class MobPulseSDKSupplier;
@class MobPulseInterstitial;

@interface UbiXInterstitialAdapter : MobPulseBaseAdPosition

@property (nonatomic, weak) id<MobPulseInterstitialDelegate> delegate;


@end

NS_ASSUME_NONNULL_END
