
#import <Foundation/Foundation.h>

#if __has_include(<MobPulseSDKModel/MobPulseSDKModel.h>)
FOUNDATION_EXPORT double MobPulseSDKModelVersionNumber;
FOUNDATION_EXPORT const unsigned char MobPulseSDKModelVersionString[];
#import <MobPulseSDKModel/NSObject+MobPulseSDKModel.h>
#import <MobPulseSDKModel/MobPulseSDKClassInfo.h>
#else
#import "NSObject+MobPulseSDKModel.h"
#import "MobPulseSDKClassInfo.h"
#endif
