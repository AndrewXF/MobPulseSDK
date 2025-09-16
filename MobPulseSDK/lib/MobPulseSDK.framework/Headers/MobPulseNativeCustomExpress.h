//
//  MobPulseNativeCustomExpress.h
//  MobPulseSDK
//
//  Created by xiefei10 on 10/16/24.
//

#import "MobPulseBaseAdapter.h"
#import "MobPulseError.h"

@protocol MobPulseNativeExpressDelegate;

@interface MobPulseNativeCustomExpress : MobPulseBaseAdapter

/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseNativeExpressDelegate> delegate;
@property (nonatomic, assign) CGSize adSize;
/// 是否模版
@property (nonatomic, assign) BOOL isTemplate;

/// 构造函数
/// @param placeMentId 广告位id
/// @param viewController viewController
/// @param size 尺寸
- (nonnull instancetype)initWithPlaceMentId:(NSString *_Nonnull)placeMentId
                 viewController:(UIViewController * _Nonnull)viewController
                         adSize:(CGSize)size;

@end
