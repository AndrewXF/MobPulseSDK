//
//  ILAdDataEventModel.h
//  MobPulse
//
//  Created by xiefei10 on 8/6/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//typedef NS_ENUM(NSUInteger, ILEventType) {
//    ILEventType_UNKNOWN_EVENT_TYPE = 0,
//    ILEventType_SDK_INIT = 1,      //聚合SDK初始化
//    ILEventType_FETCH_CONFIGS = 2, //fetchConfigs 聚合SDK向服务器请求广告位策略
//    ILEventType_NETWORK_FILL = 3, //三方广告有填充
//    ILEventType_NETWORK_NO_FILL = 4, //三方广告无填充
//    ILEventType_AD_FILL = 5, //聚合SDK广告有填充
//    ILEventType_NO_AD_FILL = 6, //聚合SDK广告无填充
//    ILEventType_IMPRESSION = 7, //广告曝光
//    ILEventType_CLICK = 8, //广告点击
//    ILEventType_NETWORK_CLICK = 9, //三方广告点击
//    ILEventType_NETWORK_DISPLAY = 10, //三方广告展示
//    ILEventType_NETWORK_DISPLAY_FAILED = 11, //三方广告展示失败
//    ILEventType_NETWORK_TRIGGER_DISPLAY = 12, //三方广告触发展示
//    ILEventType_NETWORK_LOAD = 13, //三方广告请求
//    ILEventType_LOAD_AD = 14,  //开发者调用聚合SDK
//    ILEventType_SHOW_AD = 15,  //开发者展示聚合SDK
//    ILEventType_NETWORK_TIME_OUT = 16 //超时
//};

@interface ILAdDataEventModel : NSObject

@property (nonatomic, copy) NSString *bundle;
@property (nonatomic, copy) NSString *placementId;
@property (nonatomic, copy) NSString *tripartitePlatformPlacementId;
@property (nonatomic, assign) NSInteger placementType;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, assign) NSInteger advPrice;
@property (nonatomic, copy) NSString *networkFill;
@property (nonatomic, assign) NSInteger pubPrice;
@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *screenWH;
@property (nonatomic, copy) NSString *ua;
@property (nonatomic, copy) NSString *osVer;
@property (nonatomic, copy) NSString *idfa;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, assign) long long ts;
@property (nonatomic, copy) NSString *ip;
@property (nonatomic, copy) NSString *serverTime;
@property (nonatomic, copy) NSString *appChannel;
@property (nonatomic, copy) NSString *appSubchannel;
@property (nonatomic, copy) NSString *personalData;
@property (nonatomic, copy) NSString *adnName;
@property (nonatomic, assign) NSInteger auctionStrategy; //1 : waterfall组，2: bidding组
@property (nonatomic, copy) NSString *placementGroupId;
@property (nonatomic, copy) NSString *placementGroupName;
@property (nonatomic, copy) NSString *experimentTag;
@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, assign) NSString *eventType;

+ (ILAdDataEventModel *)createEventModelWidthCommonInfo;

@end

NS_ASSUME_NONNULL_END
