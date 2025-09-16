//
//  MobPulseBaseAdapter.h
//  Demo
//
//  Created by xiefei on 2020/11/20.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSUInteger, ILEventType) {
    ILEventType_UNKNOWN_EVENT_TYPE = 0,
    ILEventType_SDK_INIT = 1,      //聚合SDK初始化
    ILEventType_FETCH_CONFIGS = 2, //fetchConfigs 聚合SDK向服务器请求广告位策略
    ILEventType_NETWORK_FILL = 3, //三方广告有填充
    ILEventType_NETWORK_NO_FILL = 4, //三方广告无填充
    ILEventType_AD_FILL = 5, //聚合SDK广告有填充
    ILEventType_NO_AD_FILL = 6, //聚合SDK广告无填充
    ILEventType_IMPRESSION = 7, //广告曝光
    ILEventType_CLICK = 8, //广告点击
    ILEventType_NETWORK_CLICK = 9, //三方广告点击
    ILEventType_NETWORK_DISPLAY = 10, //三方广告展示
    ILEventType_NETWORK_DISPLAY_FAILED = 11, //三方广告展示失败
    ILEventType_NETWORK_TRIGGER_DISPLAY = 12, //三方广告触发展示
    ILEventType_NETWORK_LOAD = 13, //三方广告请求
    ILEventType_LOAD_AD = 14,  //开发者调用聚合SDK
    ILEventType_SHOW_AD = 15,  //开发者展示聚合SDK
    ILEventType_NETWORK_TIME_OUT = 16 //超时
};

@class MobPulseBaseAdPosition;
@class MobPulseSupplierModel;
@protocol MobPulseSDKapterDelegate;
@class MobPulseSDKSupplier;

NS_ASSUME_NONNULL_BEGIN

@interface MobPulseBaseAdapter : NSObject<MobPulseSDKapterDelegate>

/// 各渠道错误的详细原因
@property (nonatomic, strong) NSMutableDictionary * errorDescriptions;

/// 控制器(在一次广告周期中 不可更改, 不然会引起未知错误)
@property(nonatomic, weak) UIViewController *viewController;

@property (nonatomic, assign, readonly) BOOL isLoadAndShow;


/// 初始化方法
/// @param jsonDic  策略广告的策略信息 json格式请参考 DataJson目录下的.json文件
- (instancetype)initWithJsonDic:(NSDictionary *_Nonnull)jsonDic;

- (instancetype)initWithPlaceMentId:(NSString *)placeMentId;

/// 加载广告
- (void)loadAd;

/// 展示广告
- (void)showAd;

/// 加载并展现
- (void)loadAndShowAd;

/**
 * 加载下个渠道
 */
- (void)loadNextSupplierIfHas;


/// 上报
- (void)reportWithType:(ILEventType)repoType supplier:(MobPulseSDKSupplier *)supplier error:(NSError *)error;


/// 取消当前策略请求
- (void)deallocAdapter;

///广告超时event
- (void)timeOutEventLog;

// 超时时间
- (NSInteger)timeOutValue;

//参与竞价的广告位数量
- (NSInteger)adapterCount;

//竞价最终ecpm, 默认0
- (NSInteger)adPrice;

@end

NS_ASSUME_NONNULL_END
