//
//  MobPulseSDKapterDelegate.h
//  MobPulse
//
//  Created by xiefei10 on 7/15/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MobPulseBaseAdPosition;

@protocol MobPulseSDKapterDelegate <NSObject>

- (void)adLoadSuccessForPriceCompare:(MobPulseBaseAdPosition *)adpater;

- (void)adAdapterLoadFailed:(MobPulseBaseAdPosition *)adpater;

@end

NS_ASSUME_NONNULL_END
