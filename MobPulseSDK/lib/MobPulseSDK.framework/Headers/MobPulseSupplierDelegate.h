//
//  MobPulseSupplierDelegate.h
//  Demo
//
//  Created by xiefei on 2020/11/25.
//

#ifndef MobPulseSupplierDelegate_h
#define MobPulseSupplierDelegate_h

@class MobPulseSupplierModel;
@class MobPulseSDKSupplier;
@protocol MobPulseSupplierDelegate <NSObject>

@optional

/// 加载策略Model成功
- (void)easyAdBaseAdapterLoadSuccess:(nonnull MobPulseSupplierModel *)model;

/// 加载策略Model失败
- (void)easyAdBaseAdapterLoadError:(nullable NSError *)error;

/// 加载的 sortTag
- (void)easyAdBaseAdapterLoadSortTag:(NSString *)sortTag;

- (void)easyAdBaseAdapterLoadAndShow;


/// 返回下一个渠道的参数
/// @param supplier 被加载的渠道
/// @param error 异常信息
- (id)easyAdBaseAdapterLoadSuppluer:(nullable MobPulseSDKSupplier *)supplier error:(nullable NSError *)error;

@end

#endif /* MobPulseSupplierDelegate_h */
