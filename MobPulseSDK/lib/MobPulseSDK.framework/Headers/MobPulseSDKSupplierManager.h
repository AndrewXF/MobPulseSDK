//
//  MobPulseSDKSupplierManager.h
//  Demo
//
//  Created by xiefei on 2020/11/18.
//

#import <Foundation/Foundation.h>
#import "MobPulseSupplierModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MobPulseSDKSupplierManagerDelegate <NSObject>

// MARK: ======================= 策略回调 =======================

/// 加载策略Model成功
- (void)MobPulseSDKSupplierManagerLoadSuccess:(MobPulseSupplierModel *)model;

/// 加载策略Model失败
- (void)MobPulseSDKSupplierManagerLoadError:(NSError *)error;

/// 返回下一个渠道的参数
- (void)MobPulseSDKSupplierLoadSuppluer:(nullable MobPulseSDKSupplier *)supplier error:(nullable NSError *)error;

/// 被选中的选择的sort标志
- (void)MobPulseSDKSupplierManagerLoadSortTag:(NSString *)tag;

@end

@interface MobPulseSDKSupplierManager : NSObject

/// 数据加载回调
@property (nonatomic, weak) id<MobPulseSDKSupplierManagerDelegate> delegate;

/// 数据管理对象
+ (instancetype)manager;

- (void)loadDataWithJsonDic:(NSDictionary *)jsonDic;
/**
 * 加载下个渠道
 * 回调 MobPulseSDKSupplierLoadSuppluer: error:
 */
- (void)loadNextSupplierIfHas;


/**
 * 生成随机数
 */
- (NSInteger)getRandomNumber:(NSInteger)from to:(NSInteger)to;

@end

NS_ASSUME_NONNULL_END
