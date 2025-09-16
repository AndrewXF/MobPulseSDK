//
//  MobPulseBaseAdPosition.h
//  AdvanceSDK
//
//  Created by MS on 2021/10/12.
//

#import <Foundation/Foundation.h>
#import "MobPulseSupplierModel.h"
#import <UIKit/UIKit.h>

@class MobPulseSDKSupplier;
@protocol MobPulseSDKapterDelegate;
@class ILAdDataJsonBindingModel;

NS_ASSUME_NONNULL_BEGIN

@interface MobPulseBaseAdPosition : NSObject
@property (nonatomic, assign) NSInteger tag;// 标记并行渠道为了找到响应的adapter

@property (nonatomic, assign) NSInteger type;// 1 bidding or  2 waterfall

@property (nonatomic, assign) NSInteger price;// 价格 for waterfall

@property (nonatomic, strong) ILAdDataJsonBindingModel *confiModel;

@property (nonatomic, weak) UIViewController *controller;

/// 内部竞价delegate
@property(nonatomic, weak) id<MobPulseSDKapterDelegate> priceRuledelegate;

//@property (nonatomic, strong) MobPulseSDKSupplier *supplier;


- (instancetype)initWithSupplier:(MobPulseSDKSupplier *)supplier adspot:(id)adspot;

- (void)supplierStateLoad;

/**
 返回广告的eCPM，单位：分
 
 @return 成功返回一个大于等于0的值，-1表示无权限或后台出现异常
 */
- (NSInteger)eCPM;

/**
 返回广告的eCPM，单位：分
 
 @return 成功返回一个大于等于0的值，-1表示无权限或后台出现异常
 */
- (NSInteger)pubPrice;


- (void)loadAd;

- (void)showAd;

- (void)deallocAdapter;

- (MobPulseSDKSupplier *)getCurrentSupplier;

@end

NS_ASSUME_NONNULL_END
