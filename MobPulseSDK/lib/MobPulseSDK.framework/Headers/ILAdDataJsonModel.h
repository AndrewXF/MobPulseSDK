//
//  ILAdDataJsonModel.h
//  MobPulse
//
//  Created by xiefei10 on 7/9/24.
//

#import <Foundation/Foundation.h>

@class MobPulseBaseAdPosition;

NS_ASSUME_NONNULL_BEGIN

@interface ILAdDataJsonBindingModel : NSObject

@property (nonatomic, strong) NSNumber *br;
@property (nonatomic, strong) NSNumber *templateValue;
@property (nonatomic, strong) NSNumber *clickAreaExpansion;
@property (nonatomic, strong) NSNumber *a1;
@property (nonatomic, strong) NSNumber *a2;
@property (nonatomic, strong) NSNumber *a3;
@property (nonatomic, strong) NSNumber *a4;
@property (nonatomic, strong) NSNumber *a5;
@property (nonatomic, strong) NSNumber *price;
@property (nonatomic, strong) NSString *revenueShare;
@property (nonatomic, strong) NSString *tripartitePlatformPlacementId;
@property (nonatomic, strong) NSString *tripartitePlatformPublisherId;
@property (nonatomic, strong) NSString *tripartitePlatformAppId;
@property (nonatomic, strong) NSString *tripartitePlatformName;


@end


@interface ILAdDataJsonConfigModel : NSObject

@property (nonatomic, strong) NSNumber *biddingTimeout;
@property (nonatomic, strong) NSArray <ILAdDataJsonBindingModel *>*bidding;
@property (nonatomic, strong) NSArray <ILAdDataJsonBindingModel *>*waterfall;
@property (nonatomic, strong) NSString *placementId;
@property (nonatomic, strong) NSString *experimentTag;
@property (nonatomic, strong) NSString *placementGroupName;
@property (nonatomic, strong) NSNumber *isReport;
@property (nonatomic, strong) NSNumber *waterfallGroupTimeout;
@property (nonatomic, strong) NSNumber *bidPassthrough;
@property (nonatomic, strong) NSNumber *type;
@property (nonatomic, strong) NSNumber *biddingGroupTimeout;
@property (nonatomic, strong) NSString *placementGroupId;
@property (nonatomic, strong) NSNumber *totalTimeout;
@property (nonatomic, strong) NSNumber *waterfallTimeout;
@property (nonatomic, strong) NSNumber *placementStrategyId;
@property (nonatomic, strong) NSString *experimentId;
@property (nonatomic, strong) NSNumber *waterfallRequestMode;
@property (nonatomic, strong) NSString *idx;
@property (nonatomic, strong) NSNumber *waterfallConcurrentNum;


@end

@interface ILAdDataJsonInitListModel : NSObject

@property (nonatomic, assign) NSString *tripartitePlatformName;
@property (nonatomic, assign) NSString *accountId;
@property (nonatomic, assign) NSString *appId;
@property (nonatomic, assign) NSString *tripartitePlatformAppKey;
@property (nonatomic, assign) NSString *realId;


@end

@interface ILAdDataJsonModel : NSObject

@property (nonatomic, strong) NSArray *repeatedInitAdnList;
@property (nonatomic, strong) NSDictionary *sdkList;
@property (nonatomic, strong) NSArray <ILAdDataJsonConfigModel *>*config;

@end


NS_ASSUME_NONNULL_END
