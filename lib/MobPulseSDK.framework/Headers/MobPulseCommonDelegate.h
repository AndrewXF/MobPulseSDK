//
//  MobPulseCommonDelegate.h
//  Pods
//
//  Created by MS on 2021/1/16.
//

#ifndef MobPulseCommonDelegate_h
#define MobPulseCommonDelegate_h

@class MobPulseError;
// 策略相关的代理
@protocol MobPulseCommonDelegate <NSObject>

@optional

/// 成功加载 并返回 加载的队列的标识
- (void)easyAdSuccessSortTag:(NSString *)sortTag;

/// 失败
/// @param error 聚合SDK的错误
/// @param description 每个渠道的错误详情, 部分情况下为nil  key的命名规则: 渠道名-index
- (void)easyAdFailedWithError:(MobPulseError *)error description:(NSDictionary *)description;

/// 内部渠道开始加载时调用
- (void)easyAdSupplierWillLoad:(NSString *)supplierId;
@end

#endif /* MobPulseBaseDelegate_h */
