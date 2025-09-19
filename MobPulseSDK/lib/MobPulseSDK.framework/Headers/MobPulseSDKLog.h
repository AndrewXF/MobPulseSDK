//
//  MobPulseSDKLog.h
//  Example
//
//  Created by xiefei on 2024/11/5.
//  Copyright © 2019 AndrewXF. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MobPulseConfig.h"

@class MobPulseSDKLog;



#define EAD_LEVEL_FATAL_LOG(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MobPulseSDKLogLevel_Fatal]

#define EAD_LEVEL_ERROR_LOG(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MobPulseSDKLogLevel_Error]

#define EAD_LEVEL_WARING_LOG(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MobPulseSDKLogLevel_Warning]

#define EAD_LEVEL_INFO_LOG(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MobPulseSDKLogLevel_Info]

#define EAD_LEVEL_DEBUG_LOG(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:MobPulseSDKLogLevel_Debug]


#define MobPulseSDKLog(format,...)  [MobPulseSDKLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__]]
#define MobPulseSDKLogJSONData(data)  [MobPulseSDKLog logJsonData:data]

NS_ASSUME_NONNULL_BEGIN


@interface MobPulseSDKLog : NSObject

// 日志输出方法
+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString level:(MobPulseSDKLogLevel)level;

+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString;

// 记录data类型数据
+ (void)logJsonData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
