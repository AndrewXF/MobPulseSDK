//
//  MobPulseSupplierModel.h
//  Demo
//
//  Created by xiefei on 2020/11/18.
//

#import <Foundation/Foundation.h>

@class MobPulseSupplierModel;
@class MobPulseSDKSetting;
@class MobPulseSDKSupplier;
@class MobPulseBaseAdPosition;
//typedef NS_ENUM(NSUInteger, ILEventType) {
    /// 点击
//    MobPulseSDKSdkSupplierRepoClicked,
//    /// 数据拉取成功
//    MobPulseSDKSdkSupplierRepoSucceeded,
//    /// 广告物料加载成功
//    ILEventType_NETWORK_FILL,
//    /// 广告物料加载失败
//    ILEventType_NETWORK_FILLFailed,
//    /// 曝光成功
//    MobPulseSDKSdkSupplierRepoImped,
//    /// 曝光失败
//    MobPulseSDKSdkSupplierRepoFaileded,
//};


NS_ASSUME_NONNULL_BEGIN

#pragma mark - Object interfaces

@interface MobPulseSupplierModel : NSObject
@property (nonatomic, strong) NSMutableArray<MobPulseSDKSetting *> *rules;
@property (nonatomic, strong) NSMutableArray<MobPulseSDKSupplier *> *suppliers;
@property (nonatomic, copy)   NSString *sortTag;

@end

@interface MobPulseSDKSetting : NSObject
@property (nonatomic, strong) NSMutableArray<NSNumber *> *sort;
@property (nonatomic, assign) NSInteger percent;
@property (nonatomic, copy)   NSString *tag;



@end

@interface MobPulseSDKSupplier : NSObject
@property (nonatomic, copy)   NSString *appId;
@property (nonatomic, copy)   NSString *adspotId;
@property (nonatomic, copy)   NSString *tag;
@property (nonatomic, strong)   NSNumber *index;
@property (nonatomic, assign)   NSInteger adType;
@property (nonatomic, strong) MobPulseBaseAdPosition *adPosition;
@end

NS_ASSUME_NONNULL_END
