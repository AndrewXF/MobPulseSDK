//
//  UbiXNativeExpressAdapter.h
//  MobPulse
//
//  Created by xiefei10 on 7/10/24.
//

#import "MobPulseBaseAdPosition.h"
#import <Foundation/Foundation.h>
#import "MobPulseNativeExpressDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@class MobPulseSDKSupplier;
@class MobPulseNativeExpress;

@interface UbiXNativeExpressAdapter : MobPulseBaseAdPosition

@property (nonatomic, weak) id<MobPulseNativeExpressDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
