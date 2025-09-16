//
//  MobPulseSplashProtocol.h
//  AdvanceSDKExample
//
//  Created by xiefei on 2020/4/8.
//  Copyright © 2020 Mercury. All rights reserved.
//

#ifndef MobPulseSplashProtocol_h
#define MobPulseSplashProtocol_h
#import <UIKit/UIKit.h>
@protocol MobPulseNativeContainerProtocol
@optional
/// 绑定点击事件图层
- (void)setContainer:(UIView *)containerView clickableViews:(NSArray *)clickableViews closableViews:(NSArray *)closableViews;

@end

#endif 
