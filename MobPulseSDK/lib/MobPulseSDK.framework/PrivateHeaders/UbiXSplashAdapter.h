//
//  KsSplashAdapter.h
//  AdvanceSDK
//
//  Created by MS on 2021/4/20.
//
#import "MobPulseBaseAdPosition.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MobPulseSplashDelegate.h"
NS_ASSUME_NONNULL_BEGIN
@class MobPulseSDKSupplier;
@class MobPulseSplash;

@interface UbiXSplashAdapter : MobPulseBaseAdPosition

@property (nonatomic, weak) id<MobPulseSplashDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
