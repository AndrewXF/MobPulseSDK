
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (MobPulseSDKModel)

+ (nullable instancetype)mobPulseSDK_modelWithJSON:(id)json;

+ (nullable instancetype)mobPulseSDK_modelWithDictionary:(NSDictionary *)dictionary;

- (BOOL)mobPulseSDK_modelSetWithJSON:(id)json;

- (BOOL)mobPulseSDK_modelSetWithDictionary:(NSDictionary *)dic;

- (nullable id)mobPulseSDK_modelToJSONObject;

- (nullable NSData *)mobPulseSDK_modelToJSONData;

- (nullable NSString *)mobPulseSDK_modelToJSONString;

- (nullable id)mobPulseSDK_modelCopy;

- (void)mobPulseSDK_modelEncodeWithCoder:(NSCoder *)aCoder;

- (id)mobPulseSDK_modelInitWithCoder:(NSCoder *)aDecoder;

- (NSUInteger)mobPulseSDK_modelHash;

- (BOOL)mobPulseSDK_modelIsEqual:(id)model;

- (NSString *)mobPulseSDK_modelDescription;

@end

@interface NSArray (MobPulseSDKModel)

+ (nullable NSArray *)mobPulseSDK_modelArrayWithClass:(Class)cls json:(id)json;

@end

@interface NSDictionary (MobPulseSDKModel)

+ (nullable NSDictionary *)mobPulseSDK_modelDictionaryWithClass:(Class)cls json:(id)json;
@end

@protocol MobPulseSDKModel <NSObject>
@optional

+ (nullable NSDictionary<NSString *, id> *)modelCustomPropertyMapper;

+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass;

+ (nullable Class)modelCustomClassForDictionary:(NSDictionary *)dictionary;

+ (nullable NSArray<NSString *> *)modelPropertyBlacklist;

+ (nullable NSArray<NSString *> *)modelPropertyWhitelist;

- (NSDictionary *)modelCustomWillTransformFromDictionary:(NSDictionary *)dic;

- (BOOL)modelCustomTransformFromDictionary:(NSDictionary *)dic;

- (BOOL)modelCustomTransformToDictionary:(NSMutableDictionary *)dic;

@end

NS_ASSUME_NONNULL_END
