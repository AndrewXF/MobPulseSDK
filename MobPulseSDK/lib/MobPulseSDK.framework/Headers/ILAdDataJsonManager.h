//
//  ILAdDataJsonManager.h
//  MobPulse_Example
//
//  Created by MS on 2021/10/26.
//  Copyright © 2021 Cheng455153666. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ILAdDataJsonConfigModel;
@class ILAdDataEventModel;
NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    JsonDataType_splash = 1,
    JsonDataType_banner,
    JsonDataType_fullScreenVideo,
    JsonDataType_interstitial,
    JsonDataType_nativeExpress,
    JsonDataType_rewardVideo,
} JsonDataType;




@interface ILAdDataJsonManager : NSObject

@property (nonatomic, copy) void(^completion)(void);

+ (instancetype)shared;

- (NSDictionary *)loadAdDataWithType:(JsonDataType)type;

- (void)requestMediationConfig;

- (ILAdDataJsonConfigModel *)getSupplierModelForPlaceMentId:(NSString *)placeMentId;

- (void)requestEventLog:(ILAdDataEventModel *)eventModel;

- (void)requestMediationConfig:(void (^ __nullable)(void))completion;
@end

NS_ASSUME_NONNULL_END
