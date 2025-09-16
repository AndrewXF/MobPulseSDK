//
//  MobPulseError.h
//  Demo
//
//  Created by xiefei on 2020/11/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 策略相关
typedef NS_ENUM(NSUInteger, MobPulseErrorCode) {
    MobPulseErrorCode_101    =    101,
    MobPulseErrorCode_102    =    102,
    MobPulseErrorCode_103    =    103,
    MobPulseErrorCode_104    =    104,
    MobPulseErrorCode_105    =    105,
    MobPulseErrorCode_110    =    110,
    MobPulseErrorCode_111    =    111,
    MobPulseErrorCode_112    =    112,
    MobPulseErrorCode_113    =    113,
    MobPulseErrorCode_114    =    114, //广告填充失败
    MobPulseErrorCode_115    =    115,
    MobPulseErrorCode_116    =    116
};

@interface MobPulseError : NSObject

@property (nonatomic, assign) MobPulseErrorCode errorCode;

+ (instancetype)errorWithCode:(MobPulseErrorCode)code;

+ (instancetype)errorWithCode:(MobPulseErrorCode)code obj:(id)obj;

- (NSError *)toNSError;

@end

NS_ASSUME_NONNULL_END
