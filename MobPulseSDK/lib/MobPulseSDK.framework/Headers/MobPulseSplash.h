//
//  MobPulseSplash.h
//  Demo
//
//  Created by xiefei on 2020/11/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MobPulseBaseAdapter.h"
#import "MobPulseSplashDelegate.h"
#import "MobPulseError.h"

@interface MobPulseSplash : MobPulseBaseAdapter

/// 广告方法回调代理
@property (nonatomic, weak) id<MobPulseSplashDelegate> delegate;

/// 是否必须展示Logo 默认: NO 注意: 强制展示Logo可能会影响收益 !!!
@property (nonatomic, assign) BOOL showLogoRequire;

/// 广告Logo
@property(nonatomic, strong) UIImage *logoImage;

/// 广告未加载出来时的占位图
@property(nonatomic, strong) UIImage *backgroundImage;

/// 总超时时间
@property (nonatomic, assign) NSInteger timeout;


/// 展示的controller, 如果不传默认使用keyWindow.rootVC
/// @param placeMentId 广告位id
/// @param viewController viewController
- (nonnull instancetype)initWithPlaceMentId:(NSString *_Nonnull)placeMentId
                              viewController:( UIViewController * _Nonnull)viewController;


@end
