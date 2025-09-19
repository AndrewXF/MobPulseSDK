//
//  NSDictionary+ILUtil.h
//  MobPulse
//
//  Created by xiefei10 on 7/9/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define HK_isEmptyDictionary(object)    [NSDictionary isEmpty:object]

@interface NSDictionary (ILUtil)

/*!
 @method isEmpty:
 @abstract 是否空,字典里没有对象也是为YES；
 @param object 验证对象
 @result 返回BOOL
 */
+ (BOOL)isEmpty:(NSDictionary *)object;

/*!
 @method dictionaryWithContentsOfData:
 @abstract 把NSData数据转成NSDictionary
 @result 返回NSDictionary
 */
+ (NSDictionary *)dictionaryWithContentsOfData:(NSData *)data;

/*!
 @method isEmpty
 @abstract 是否空,字典里没有对象也是为YES；
 @result 返回bool
 */
- (BOOL)isEmpty;

/*!
 @method objectForKeyCheck
 @abstract 检查是否aKey为nil 和 NSNull null如果是返回nil
 @result 返回对象
 */
- (id)objectForKeyCheck:(id)aKey;

/*!
 @method objectForKeyCheck:class:
 @abstract 获取指定key的对象
 @param key 键
 @param aClass 检查类型
 @result 返回对象
 */
- (id)objectForKeyCheck:(id)key class:(__unsafe_unretained Class)aClass;

/*!
 @method objectForKeyCheck:class:defaultValue:
 @abstract 获取指定key的对象
 @param key 键
 @param aClass 检查类型
 @param defaultValue 获取失败要返回的值
 @result 返回对象，获取失败为指定的defaultValue
 */
- (id)objectForKeyCheck:(id)key class:(__unsafe_unretained Class)aClass defaultValue:(id)defaultValue;

/*!
 @method urlArgumentsValue
 @abstract 转成URL参数方式字符串
 @result 返回NSString
 */
- (NSString *)urlArgumentsValue;

/*!
 @method arrayForKey:
 @abstract 获取指定key的NSArray类型值
 @param key 键
 @result 返回NSArray，获取失败为nil
 */
- (NSArray *)hk_arrayForKey:(id)key;

/*!
 @method arrayForKey:defaultValue:
 @abstract 获取指定key的NSArray类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSArray，获取失败为指定的defaultValue
 */
- (NSArray *)hk_arrayForKey:(id)key defaultValue:(NSArray *)defaultValue;

/*!
 @method mutableArrayForKey:
 @abstract 获取指定key的NSMutableArray类型值
 @param key 键
 @result 返回NSMutableArray，获取失败为nil
 */
- (NSMutableArray *)hk_mutableArrayForKey:(id)key;

/*!
 @method mutableArrayForKey:defaultValue:
 @abstract 获取指定key的NSMutableArray类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSMutableArray，获取失败为指定的defaultValue
 */
- (NSMutableArray *)hk_mutableArrayForKey:(id)key defaultValue:(NSArray *)defaultValue;

/*!
 @method dictionaryForKey:
 @abstract 获取指定key的NSDictionary类型值
 @param key 键
 @result 返回NSDictionary，获取失败为nil
 */
- (NSDictionary *)hk_dictionaryForKey:(id)key;

/*!
 @method dictionaryForKey:defaultValue:
 @abstract 获取指定key的NSDictionary类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSDictionary，获取失败为指定的defaultValue
 */
- (NSDictionary *)hk_dictionaryForKey:(id)key defaultValue:(NSDictionary *)defaultValue;

/*!
 @method mutableDictionaryForKey:
 @abstract 获取指定key的NSMutableDictionary类型值
 @param key 键
 @result 返回NSMutableDictionary，获取失败为nil
 */
- (NSMutableDictionary *)hk_mutableDictionaryForKey:(id)key;

/*!
 @method mutableDictionaryForKey:defaultValue:
 @abstract 获取指定key的NSMutableDictionary类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSMutableDictionary，获取失败为指定的defaultValue
 */
- (NSMutableDictionary *)hk_mutableDictionaryForKey:(id)key defaultValue:(NSDictionary *)defaultValue;

/*!
 @method dataForKey:
 @abstract 获取指定key的NSData类型值
 @param key 键
 @result 返回NSData，获取失败为nil
 */
- (NSData *)hk_dataForKey:(id)key;

/*!
 @method dataForKey:defaultValue:
 @abstract 获取指定key的NSData类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSData，获取失败为指定的defaultValue
 */
- (NSData *)hk_dataForKey:(id)key defaultValue:(NSData *)defaultValue;

/*!
 @method stringForKey:
 @abstract 获取指定key的NSString类型值
 @param key 键
 @result 返回NSString，获取失败为nil
 */
- (NSString *)hk_stringForKey:(id)key;

/*!
 @method stringForKeyToString:
 @abstract 获取指定key的NSString类型值
 @param key 键
 @result 返回字NSString，获取失败为@""
 */
- (NSString *)hk_stringForKeyToString:(id)key;

/*!
 @method hk_stringForKeyToString:defaultValue:
 @abstract 获取指定key的NSString类型值,获取失败返回为指定的defaultValue
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSString，获取失败为指定的defaultValue
 */
- (NSString *)hk_stringForKeyToString:(id)key defaultValue:(NSString *)defaultValue;

/*!
 @method stringForKey:defaultValue:
 @abstract 获取指定key的NSString类型值,获取失败返回为指定的defaultValue
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSString，获取失败为指定的defaultValue
 */
- (NSString *)hk_stringForKey:(id)key defaultValue:(NSString *)defaultValue;

/*!
 @method numberForKey:
 @abstract 获取指定key的NSNumber类型值
 @param key 键
 @result 返回NSNumber，获取失败为nil
 */
- (NSNumber *)hk_numberForKey:(id)key;

/*!
 @method numberForKey:defaultValue:
 @abstract 获取指定key的NSNumber类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSNumber，获取失败为指定的defaultValue
 */
- (NSNumber *)hk_numberForKey:(id)key defaultValue:(NSNumber *)defaultValue;

/*!
 @method charForKey:
 @abstract 获取指定key的NSNumber类型值
 @param key 键
 @result 返回char
 */
- (char)hk_charForKey:(id)key;

/*!
 @method unsignedCharForKey:
 @abstract 获取指定key的unsigned char类型值
 @param key 键
 @result 返回unsigned char
 */
- (unsigned char)hk_unsignedCharForKey:(id)key;

/*!
 @method shortForKey:
 @abstract 获取指定key的short类型值
 @param key 键
 @result 返回short，获取失败为0
 */
- (short)hk_shortForKey:(id)key;

/*!
 @method shortForKey:defaultValue:
 @abstract 获取指定key的short类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回short，获取失败为指定的defaultValue
 */
- (short)hk_shortForKey:(id)key defaultValue:(short)defaultValue;

/*!
 @method unsignedShortForKey:
 @abstract 获取指定key的unsigned short类型值
 @param key 键
 @result 返回unsigned short，获取失败为0
 */
- (unsigned short)hk_unsignedShortForKey:(id)key;

/*!
 @method unsignedShortForKey:defaultValue:
 @abstract 获取指定key的unsigned short类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned short，获取失败为指定的defaultValue
 */
- (unsigned short)hk_unsignedShortForKey:(id)key defaultValue:(unsigned short)defaultValue;

/*!
 @method intForKey:
 @abstract 获取指定key的int类型值
 @param key 键
 @result 返回int，获取失败为0
 */
- (int)hk_intForKey:(id)key;

/*!
 @method intForKey:defaultValue:
 @abstract 获取指定key的int类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回int，获取失败为指定的defaultValue
 */
- (int)hk_intForKey:(id)key defaultValue:(int)defaultValue;

/*!
 @method unsignedIntForKey:
 @abstract 获取指定key的unsigned int类型值
 @param key 键
 @result 返回unsigned int，获取失败为0
 */
- (unsigned int)hk_unsignedIntForKey:(id)key;

/*!
 @method unsignedIntForKey:defaultValue:
 @abstract 获取指定key的unsigned int类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned int，获取失败为指定的defaultValue
 */
- (unsigned int)hk_unsignedIntForKey:(id)key defaultValue:(unsigned int)defaultValue;

/*!
 @method longForKey:
 @abstract 获取指定key的long类型值
 @param key 键
 @result 返回long，获取失败为0
 */
- (long)hk_longForKey:(id)key;

/*!
 @method longForKey:defaultValue:
 @abstract 获取指定key的long类型值
 @param defaultValue 获取失败要返回的值
 @result 返回long，获取失败为指定的defaultValue
 */
- (long)hk_longForKey:(id)key defaultValue:(long)defaultValue;

/*!
 @method unsignedLongForKey:
 @abstract 获取指定key的unsigned long类型值
 @param key 键
 @result 返回unsigned long，获取失败为0
 */
- (unsigned long)hk_unsignedLongForKey:(id)key;

/*!
 @method unsignedLongForKey:defaultValue:
 @abstract 获取指定key的unsigned long类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned long，获取失败为指定的defaultValue
 */
- (unsigned long)hk_unsignedLongForKey:(id)key defaultValue:(unsigned long)defaultValue;

/*!
 @method longLongForKey:
 @abstract 获取指定key的long long类型值
 @param key 键
 @result 返回long long，获取失败为0
 */
- (long long)hk_longLongForKey:(id)key;

/*!
 @method longLongForKey:defaultValue:
 @abstract 获取指定key的long long类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回long long，获取失败为指定的defaultValue
 */
- (long long)hk_longLongForKey:(id)key defaultValue:(long long)defaultValue;

/*!
 @method unsignedLongLongForKey:
 @abstract 获取指定key的unsigned long long类型值
 @param key 键
 @result 返回unsigned long long，获取失败为0
 */
- (unsigned long long)hk_unsignedLongLongForKey:(id)key;

/*!
 @method unsignedLongLongForKey:defaultValue:
 @abstract 获取指定key的unsigned long long类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned long long，获取失败为指定的defaultValue
 */
- (unsigned long long)hk_unsignedLongLongForKey:(id)key defaultValue:(unsigned long long)defaultValue;

/*!
 @method floatForKey:
 @abstract 获取指定key的float类型值
 @param key 键
 @result 返回float，获取失败为0.0
 */
- (float)hk_floatForKey:(id)key;

/*!
 @method floatForKey:defaultValue:
 @abstract 获取指定key的float类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回float，获取失败为指定的defaultValue
 */
- (float)hk_floatForKey:(id)key defaultValue:(float)defaultValue;

/*!
 @method doubleForKey:
 @abstract 获取指定key的double类型值
 @param key 键
 @result 返回double，获取失败为0.0
 */
- (double)hk_doubleForKey:(id)key;

/*!
 @method doubleForKey:defaultValue:
 @abstract 获取指定key的double类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回double，获取失败为指定的defaultValue
 */
- (double)hk_doubleForKey:(id)key defaultValue:(double)defaultValue;

/*!
 @method boolForKey:
 @abstract 获取指定key的BOOL类型值
 @param key 键
 @result 返回BOOL，获取失败为NO
 */
- (BOOL)hk_boolForKey:(id)key;

/*!
 @method boolForKey:
 @abstract 获取指定key的BOOL类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回BOOL，获取失败为指定的defaultValue
 */
- (BOOL)hk_boolForKey:(id)key defaultValue:(BOOL)defaultValue;

/*!
 @method integerForKey:
 @abstract 获取指定key的NSInteger类型值
 @param key 键
 @result 返回NSInteger，获取失败为0
 */
- (NSInteger)hk_integerForKey:(id)key;

/*!
 @method integerForKey:defaultValue:
 @abstract 获取指定key的NSInteger类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSInteger，获取失败为指定的defaultValue
 */
- (NSInteger)hk_integerForKey:(id)key defaultValue:(NSInteger)defaultValue;

/*!
 @method unsignedIntegerForKey:
 @abstract 获取指定key的NSUInteger类型值
 @param key 键
 @result 返回NSUInteger，获取失败为0
 */
- (NSUInteger)hk_unsignedIntegerForKey:(id)key;

/*!
 @method unsignedIntegerForKey:defaultValue:
 @abstract 获取指定key的NSUInteger类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回NSUInteger，获取失败为指定的defaultValue
 */
- (NSUInteger)hk_unsignedIntegerForKey:(id)key defaultValue:(NSUInteger)defaultValue;

/*!
 @method pointForKey:
 @abstract 获取指定key的CGPoint类型值
 @param key 键
 @result 返回CGPoint，获取失败为CGPointZero
 */
- (CGPoint)hk_pointForKey:(id)key;

/*!
 @method pointForKey:defaultValue:
 @abstract 获取指定key的CGPoint类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回CGPoint，获取失败为指定的defaultValue
 */
- (CGPoint)hk_pointForKey:(id)key defaultValue:(CGPoint)defaultValue;

/*!
 @method sizeForKey:
 @abstract 获取指定key的CGSize类型值
 @param key 键
 @result 返回CGPoint，获取失败为CGSizeZero
 */
- (CGSize)hk_sizeForKey:(id)key;

/*!
 @method sizeForKey:defaultValue:
 @abstract 获取指定key的CGSize类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回CGSize，获取失败为指定的defaultValue
 */
- (CGSize)hk_sizeForKey:(id)key defaultValue:(CGSize)defaultValue;

/*!
 @method rectForKey:
 @abstract 获取指定key的CGRect类型值
 @param key 键
 @result 返回CGPoint，获取失败为CGRectZero
 */
- (CGRect)hk_rectForKey:(id)key;

/*!
 @method rectForKey:defaultValue:
 @abstract 获取指定key的CGRect类型值
 @param key 键
 @param defaultValue 获取失败要返回的值
 @result 返回CGRect，获取失败为指定的defaultValue
 */
- (CGRect)hk_rectForKey:(id)key defaultValue:(CGRect)defaultValue;

@end

@interface NSMutableDictionary (BDHKUtil)
/*!
 @method setObjectCheckWithDefaultValue:forKey:
 @abstract 检查设置指定key和anObject是不是为nil;不是则设置
 @param anObject 值
 @param aKey 键
 */
- (void)setObjectCheckWithDefaultValue:(id)anObject forKey:(id <NSCopying>)aKey;

/*!
 @method setObjectCheck:forKey:
 @abstract 检查设置指定key和anObject是不是为nil;不是则设置
 @param anObject 值
 @param aKey 键
 */
- (void)setObjectCheck:(id)anObject forKey:(id <NSCopying>)aKey;

/*!
 @method setChar:forKey:
 @abstract 设置指定key的char类型值
 @param value 值
 @param key 键
 */
- (void)setChar:(char)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedChar:forKey:
 @abstract 设置指定key的unsigned char类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedChar:(unsigned char)value forKey:(id<NSCopying>)key;

/*!
 @method setShort:forKey:
 @abstract 设置指定key的short类型值
 @param value 值
 @param key 键
 */
- (void)setShort:(short)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedShort:forKey:
 @abstract 设置指定key的unsigned short类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedShort:(unsigned short)value forKey:(id<NSCopying>)key;

/*!
 @method setInt:forKey:
 @abstract 设置指定key的int类型值
 @param value 值
 @param key 键
 */
- (void)setInt:(int)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedInt:forKey:
 @abstract 设置指定key的unsigned int类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedInt:(unsigned int)value forKey:(id<NSCopying>)key;

/*!
 @method setLong:forKey:
 @abstract 设置指定key的long类型值
 @param value 值
 @param key 键
 */
- (void)setLong:(long)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedLong:forKey:
 @abstract 设置指定key的unsigned long类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedLong:(unsigned long)value forKey:(id<NSCopying>)key;

/*!
 @method setLongLong:forKey:
 @abstract 设置指定key的long long类型值
 @param value 值
 @param key 键
 */
- (void)setLongLong:(long long)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedLongLong:forKey:
 @abstract 设置指定key的unsigned long long类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedLongLong:(unsigned long long)value forKey:(id<NSCopying>)key;

/*!
 @method setFloat:forKey:
 @abstract 设置指定key的float类型值
 @param value 值
 @param key 键
 */
- (void)setFloat:(float)value forKey:(id<NSCopying>)key;

/*!
 @method setDouble:forKey:
 @abstract 设置指定key的double类型值
 @param value 值
 @param key 键
 */
- (void)setDouble:(double)value forKey:(id<NSCopying>)key;

/*!
 @method setBool:forKey:
 @abstract 设置指定key的BOOL类型值
 @param value 值
 @param key 键
 */
- (void)setBool:(BOOL)value forKey:(id<NSCopying>)key;

/*!
 @method setInteger:forKey:
 @abstract 设置指定key的NSInteger类型值
 @param value 值
 @param key 键
 */
- (void)setInteger:(NSInteger)value forKey:(id<NSCopying>)key;

/*!
 @method setUnsignedInteger:forKey:
 @abstract 设置指定key的NSUInteger类型值
 @param value 值
 @param key 键
 */
- (void)setUnsignedInteger:(NSUInteger)value forKey:(id<NSCopying>)key;

/*!
 @method setPointValue:forKey:
 @abstract 设置指定key的CGPoint类型值
 @param value 值
 @param key 键
 */
- (void)setPointValue:(CGPoint)value forKey:(id<NSCopying>)key;

/*!
 @method setSizeValue:forKey:
 @abstract 设置指定key的CGSize类型值
 @param value 值
 @param key 键
 */
- (void)setSizeValue:(CGSize)value forKey:(id<NSCopying>)key;

/*!
 @method setRectValue:forKey:
 @abstract 设置指定key的CGRect类型值
 @param value 值
 @param key 键
 */
- (void)setRectValue:(CGRect)value forKey:(id<NSCopying>)key;

/*!
 @method removeObjectForKeyCheck:
 @abstract 检查移除的key是不是为nil;不是则移除
 @param aKey 键
 */
- (void)removeObjectForKeyCheck:(id)aKey;

@end
