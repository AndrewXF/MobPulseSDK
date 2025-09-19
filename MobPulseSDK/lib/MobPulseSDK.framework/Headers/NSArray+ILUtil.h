//
//  NSArray+ILUtil.h
//  MobPulse
//
//  Created by xiefei10 on 7/9/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define HK_isEmptyArray(object)         [NSArray      isEmpty:object]

@interface NSArray (ILUtil)

/*!
 @method isEmpty:
 @abstract 是否没有对象，没有对象也是为YES；
 @param object 验证对象
 @result 返回BOOL
 */
+ (BOOL)isEmpty:(NSArray *)object;

/*!
 @method anyObject
 @abstract 获取数组里的一个对象，索引号小的优先返回
 @result 返回数组里的一个对象
 */
- (id)anyObject;

/*!
 @method isEmpty
 @abstract 是否没有对象，没有对象也是为YES；
 @result 返回BOOL
 */
- (BOOL)isEmpty;

/*!
 @method objectAtIndexCheck:
 @abstract 检查是否越界和NSNull如果是返回nil
 @result 返回对象
 */
- (id)objectAtIndexCheck:(NSUInteger)index;

/*!
 @method objectAtIndexCheck:class:defaultValue:
 @abstract 获取指定index的对象并检查是否越界和NSNull如果是返回nil
 @param index 索引号
 @param aClass 检查类型
 @result 返回对象
 */
- (id)objectAtIndexCheck:(NSUInteger)index class:(__unsafe_unretained Class)aClass;

/*!
 @method objectAtIndexCheck:class:defaultValue:
 @abstract 获取指定index的对象并检查是否越界和NSNull如果是返回nil,获取失败返回为指定的defaultValue
 @param index 索引号
 @param aClass 检查类型
 @param defaultValue 获取失败要返回的值
 @result 返回对象，获取失败为指定的defaultValue
 */
- (id)objectAtIndexCheck:(NSUInteger)index class:(__unsafe_unretained Class)aClass defaultValue:(id)defaultValue;

/*!
 @method hk_arrayWithItemsOfClass:
 @abstract 过滤数组，返回所有类型为 aClass 的元素
 @param aClass 用来过滤的类型
 @result 返回符合要求的元素构成的数组，如果没有元素符合要求，返回一个长度为 0 的数组（不是 nil）
 */
- (NSArray *)hk_arrayWithItemsOfClass:(__unsafe_unretained Class)aClass;

/*!
 @method hk_arrayWithItemsOfProtocol:
 @abstract 过滤数组，返回所有类型遵守 Protocol 的元素
 @param aProtocol 用来过滤的类型
 @result 返回符合要求的元素构成的数组，如果没有元素符合要求，返回一个长度为 0 的数组（不是 nil）
 */
- (NSArray *)hk_arrayWithItemsOfProtocol:(Protocol *)aProtocol;

/*!
 @method arrayAtIndex:
 @abstract 获取指定index的NSArray类型值
 @param index 索引号
 @result 返回NSArray，获取失败为nil
 */
- (NSArray *)hk_arrayAtIndex:(NSUInteger)index;

/*!
 @method arrayAtIndex:defaultValue:
 @abstract 获取指定index的NSArray类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSArray，获取失败为指定的defaultValue
 */
- (NSArray *)hk_arrayAtIndex:(NSUInteger)index defaultValue:(NSArray *)defaultValue;

/*!
 @method mutableArrayAtIndex:
 @abstract 获取指定index的NSMutableArray类型值
 @param index 索引号
 @result 返回NSMutableArray，获取失败为nil
 */
- (NSMutableArray *)hk_mutableArrayAtIndex:(NSUInteger)index;

/*!
 @method mutableArrayAtIndex:defaultValue:
 @abstract 获取指定index的NSMutableArray类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSMutableArray，获取失败为指定的defaultValue
 */
- (NSMutableArray *)hk_mutableArrayAtIndex:(NSUInteger)index defaultValue:(NSArray *)defaultValue;

/*!
 @method dictionaryAtIndex:
 @abstract 获取指定index的NSDictionary类型值
 @param index 索引号
 @result 返回NSDictionary，获取失败为nil
 */
- (NSDictionary *)hk_dictionaryAtIndex:(NSUInteger)index;

/*!
 @method dictionaryAtIndex:defaultValue:
 @abstract 获取指定index的NSDictionary类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSDictionary，获取失败为指定的defaultValue
 */
- (NSDictionary *)hk_dictionaryAtIndex:(NSUInteger)index defaultValue:(NSDictionary *)defaultValue;

/*!
 @method mutableDictionaryAtIndex:
 @abstract 获取指定index的NSMutableDictionary类型值
 @param index 索引号
 @result 返回NSMutableDictionary，获取失败为nil
 */
- (NSMutableDictionary *)hk_mutableDictionaryAtIndex:(NSUInteger)index;

/*!
 @method mutableDictionaryAtIndex:defaultValue:
 @abstract 获取指定index的NSMutableDictionary类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSMutableDictionary，获取失败为指定的defaultValue
 */
- (NSMutableDictionary *)hk_mutableDictionaryAtIndex:(NSUInteger)index defaultValue:(NSMutableDictionary *)defaultValue;

/*!
 @method dataAtIndex:
 @abstract 获取指定index的NSData类型值
 @param index 索引号
 @result 返回NSData，获取失败为nil
 */
- (NSData *)hk_dataAtIndex:(NSUInteger)index;

/*!
 @method dataAtIndex:defaultValue:
 @abstract 获取指定index的NSData类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSData，获取失败为指定的defaultValue
 */
- (NSData *)hk_dataAtIndex:(NSUInteger)index defaultValue:(NSData *)defaultValue;

/*!
 @method stringAtIndex:
 @abstract 获取指定index的NSString类型值
 @param index 索引号
 @result 返回NSString，获取失败为nil
 */
- (NSString *)hk_stringAtIndex:(NSUInteger)index;

/*!
 @method stringAtIndexToString:
 @abstract 获取指定index的NSString类型值
 @param index 索引号
 @result 返回字NSString，获取失败为@""
 */
- (NSString *)hk_stringAtIndexToString:(NSUInteger)index;

/*!
 @method hk_stringAtIndexToString:defaultValue:
 @abstract 获取指定index的NSString类型值,获取失败返回为指定的defaultValue
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSString，获取失败为指定的defaultValue
 */
- (NSString *)hk_stringAtIndexToString:(NSUInteger)index defaultValue:(NSString *)defaultValue;

/*!
 @method stringAtIndex:defaultValue:
 @abstract 获取指定index的NSString类型值,获取失败返回为指定的defaultValue
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSString，获取失败为指定的defaultValue
 */
- (NSString *)hk_stringAtIndex:(NSUInteger)index defaultValue:(NSString *)defaultValue;

/*!
 @method numberAtIndex:
 @abstract 获取指定index的NSNumber类型值
 @param index 索引号
 @result 返回NSNumber，获取失败为nil
 */
- (NSNumber *)hk_numberAtIndex:(NSUInteger)index;

/*!
 @method numberAtIndex:defaultValue:
 @abstract 获取指定index的NSNumber类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSNumber，获取失败为指定的defaultValue
 */
- (NSNumber *)hk_numberAtIndex:(NSUInteger)index defaultValue:(NSNumber *)defaultValue;

/*!
 @method charAtIndex:
 @abstract 获取指定index的NSNumber类型值
 @param index 索引号
 @result 返回char
 */
- (char)hk_charAtIndex:(NSUInteger)index;

/*!
 @method unsignedCharAtIndex:
 @abstract 获取指定index的unsigned char类型值
 @param index 索引号
 @result 返回unsigned char
 */
- (unsigned char)hk_unsignedCharAtIndex:(NSUInteger)index;

/*!
 @method shortAtIndex:
 @abstract 获取指定index的short类型值
 @param index 索引号
 @result 返回short，获取失败为0
 */
- (short)hk_shortAtIndex:(NSUInteger)index;

/*!
 @method shortAtIndex:defaultValue:
 @abstract 获取指定index的short类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回short，获取失败为指定的defaultValue
 */
- (short)hk_shortAtIndex:(NSUInteger)index defaultValue:(short)defaultValue;

/*!
 @method unsignedShortAtIndex:
 @abstract 获取指定index的unsigned short类型值
 @param index 索引号
 @result 返回unsigned short，获取失败为0
 */
- (unsigned short)hk_unsignedShortAtIndex:(NSUInteger)index;

/*!
 @method unsignedShortAtIndex:defaultValue:
 @abstract 获取指定index的unsigned short类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned short，获取失败为指定的defaultValue
 */
- (unsigned short)hk_unsignedShortAtIndex:(NSUInteger)index defaultValue:(unsigned short)defaultValue;

/*!
 @method intAtIndex:
 @abstract 获取指定index的int类型值
 @param index 索引号
 @result 返回int，获取失败为0
 */
- (int)hk_intAtIndex:(NSUInteger)index;

/*!
 @method intAtIndex:defaultValue:
 @abstract 获取指定index的int类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回int，获取失败为指定的defaultValue
 */
- (int)hk_intAtIndex:(NSUInteger)index defaultValue:(int)defaultValue;

/*!
 @method unsignedIntAtIndex:
 @abstract 获取指定index的unsigned int类型值
 @param index 索引号
 @result 返回unsigned int，获取失败为0
 */
- (unsigned int)hk_unsignedIntAtIndex:(NSUInteger)index;

/*!
 @method unsignedIntAtIndex:defaultValue:
 @abstract 获取指定index的unsigned int类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned int，获取失败为指定的defaultValue
 */
- (unsigned int)hk_unsignedIntAtIndex:(NSUInteger)index defaultValue:(unsigned int)defaultValue;

/*!
 @method longAtIndex:
 @abstract 获取指定index的long类型值
 @param index 索引号
 @result 返回long，获取失败为0
 */
- (long)hk_longAtIndex:(NSUInteger)index;

/*!
 @method longAtIndex:defaultValue:
 @abstract 获取指定index的long类型值
 @param defaultValue 获取失败要返回的值
 @result 返回long，获取失败为指定的defaultValue
 */
- (long)hk_longAtIndex:(NSUInteger)index defaultValue:(long)defaultValue;

/*!
 @method unsignedLongAtIndex:
 @abstract 获取指定index的unsigned long类型值
 @param index 索引号
 @result 返回unsigned long，获取失败为0
 */
- (unsigned long)hk_unsignedLongAtIndex:(NSUInteger)index;

/*!
 @method unsignedLongAtIndex:defaultValue:
 @abstract 获取指定index的unsigned long类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned long，获取失败为指定的defaultValue
 */
- (unsigned long)hk_unsignedLongAtIndex:(NSUInteger)index defaultValue:(unsigned long)defaultValue;

/*!
 @method longLongAtIndex:
 @abstract 获取指定index的long long类型值
 @param index 索引号
 @result 返回long long，获取失败为0
 */
- (long long)hk_longLongAtIndex:(NSUInteger)index;

/*!
 @method longLongAtIndex:defaultValue:
 @abstract 获取指定index的long long类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回long long，获取失败为指定的defaultValue
 */
- (long long)hk_longLongAtIndex:(NSUInteger)index defaultValue:(long long)defaultValue;

/*!
 @method unsignedLongLongAtIndex:
 @abstract 获取指定index的unsigned long long类型值
 @param index 索引号
 @result 返回unsigned long long，获取失败为0
 */
- (unsigned long long)hk_unsignedLongLongAtIndex:(NSUInteger)index;

/*!
 @method unsignedLongLongAtIndex:defaultValue:
 @abstract 获取指定index的unsigned long long类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回unsigned long long，获取失败为指定的defaultValue
 */
- (unsigned long long)hk_unsignedLongLongAtIndex:(NSUInteger)index defaultValue:(unsigned long long)defaultValue;

/*!
 @method floatAtIndex:
 @abstract 获取指定index的float类型值
 @param index 索引号
 @result 返回float，获取失败为0.0
 */
- (float)hk_floatAtIndex:(NSUInteger)index;

/*!
 @method floatAtIndex:defaultValue:
 @abstract 获取指定index的float类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回float，获取失败为指定的defaultValue
 */
- (float)hk_floatAtIndex:(NSUInteger)index defaultValue:(float)defaultValue;

/*!
 @method doubleAtIndex:
 @abstract 获取指定index的double类型值
 @param index 索引号
 @result 返回double，获取失败为0.0
 */
- (double)hk_doubleAtIndex:(NSUInteger)index;

/*!
 @method doubleAtIndex:defaultValue:
 @abstract 获取指定index的double类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回double，获取失败为指定的defaultValue
 */
- (double)hk_doubleAtIndex:(NSUInteger)index defaultValue:(double)defaultValue;

/*!
 @method boolAtIndex:
 @abstract 获取指定index的BOOL类型值
 @param index 索引号
 @result 返回BOOL，获取失败为NO
 */
- (BOOL)hk_boolAtIndex:(NSUInteger)index;

/*!
 @method boolAtIndex:
 @abstract 获取指定index的BOOL类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回BOOL，获取失败为指定的defaultValue
 */
- (BOOL)hk_boolAtIndex:(NSUInteger)index defaultValue:(BOOL)defaultValue;

/*!
 @method integerAtIndex:
 @abstract 获取指定index的NSInteger类型值
 @param index 索引号
 @result 返回NSInteger，获取失败为0
 */
- (NSInteger)hk_integerAtIndex:(NSUInteger)index;

/*!
 @method integerAtIndex:defaultValue:
 @abstract 获取指定index的NSInteger类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSInteger，获取失败为指定的defaultValue
 */
- (NSInteger)hk_integerAtIndex:(NSUInteger)index defaultValue:(NSInteger)defaultValue;

/*!
 @method unsignedIntegerAtIndex:
 @abstract 获取指定index的NSUInteger类型值
 @param index 索引号
 @result 返回NSUInteger，获取失败为0
 */
- (NSUInteger)hk_unsignedIntegerAtIndex:(NSUInteger)index;

/*!
 @method unsignedIntegerAtIndex:defaultValue:
 @abstract 获取指定index的NSUInteger类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回NSUInteger，获取失败为指定的defaultValue
 */
- (NSUInteger)hk_unsignedIntegerAtIndex:(NSUInteger)index defaultValue:(NSUInteger)defaultValue;

/*!
 @method pointAtIndex:
 @abstract 获取指定index的CGPoint类型值
 @param index 索引号
 @result 返回CGPoint，获取失败为CGPointZero
 */
- (CGPoint)hk_pointAtIndex:(NSUInteger)index;

/*!
 @method pointAtIndex:defaultValue:
 @abstract 获取指定index的CGPoint类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回CGPoint，获取失败为指定的defaultValue
 */
- (CGPoint)hk_pointAtIndex:(NSUInteger)index defaultValue:(CGPoint)defaultValue;

/*!
 @method sizeAtIndex:
 @abstract 获取指定index的CGSize类型值
 @param index 索引号
 @result 返回CGPoint，获取失败为CGSizeZero
 */
- (CGSize)hk_sizeAtIndex:(NSUInteger)index;

/*!
 @method sizeAtIndex:defaultValue:
 @abstract 获取指定index的CGSize类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回CGSize，获取失败为指定的defaultValue
 */
- (CGSize)hk_sizeAtIndex:(NSUInteger)index defaultValue:(CGSize)defaultValue;

/*!
 @method rectAtIndex:
 @abstract 获取指定index的CGRect类型值
 @param index 索引号
 @result 返回CGPoint，获取失败为CGRectZero
 */
- (CGRect)hk_rectAtIndex:(NSUInteger)index;

/*!
 @method rectAtIndex:
 @abstract 获取指定index的CGRect类型值
 @param index 索引号
 @param defaultValue 获取失败要返回的值
 @result 返回CGRect，获取失败为指定的defaultValue
 */
- (CGRect)hk_rectAtIndex:(NSUInteger)index defaultValue:(CGRect)defaultValue;

@end

@interface NSMutableArray (BDHKUtil)

/*!
 @method addObjectsFromArrayCheck:
 @abstract 把另一个数组的所有元素添加到当前数组里
 @param otherArray 要添加数组
 */
- (void)addObjectsFromArrayCheck:(NSArray *)otherArray;

/*!
 @method addObjects:
 @abstract 把多个对象添加到数组里
 @param objects 要添加对象
 */
- (void)addObjects:(id)objects, ... NS_REQUIRES_NIL_TERMINATION;

/*!
 @method addObjectCheck:
 @abstract 检查对象是不是为 nil ;不是则添加
 @param anObject 要添加对象
 */
- (void)addObjectCheck:(id)anObject;

/*!
 @method addChar:
 @abstract 添加char类型值，到数组里
 @param value 值
 */
- (void)addChar:(char)value;

/*!
 @method addUnsignedChar:
 @abstract 添加unsigned char类型值，到数组里
 @param value 值
 */
- (void)addUnsignedChar:(unsigned char)value;

/*!
 @method addShort:
 @abstract 添加short类型值，到数组里
 @param value 值
 */
- (void)addShort:(short)value;

/*!
 @method addUnsignedShort:
 @abstract 添加unsigned short类型值，到数组里
 @param value 值
 */
- (void)addUnsignedShort:(unsigned short)value;

/*!
 @method addInt:
 @abstract 添加int类型值，到数组里
 @param value 值
 */
- (void)addInt:(int)value;

/*!
 @method addUnsignedInt:
 @abstract 添加unsigned int类型值，到数组里
 @param value 值
 */
- (void)addUnsignedInt:(unsigned int)value;

/*!
 @method addLong:
 @abstract 添加long类型值，到数组里
 @param value 值
 */
- (void)addLong:(long)value;

/*!
 @method addUnsignedLong:
 @abstract 添加unsigned long类型值，到数组里
 @param value 值
 */
- (void)addUnsignedLong:(unsigned long)value;

/*!
 @method addLongLong:
 @abstract 添加long long类型值，到数组里
 @param value 值
 */
- (void)addLongLong:(long long)value;

/*!
 @method addUnsignedLongLong:
 @abstract 添加unsigned long long类型值，到数组里
 @param value 值
 */
- (void)addUnsignedLongLong:(unsigned long long)value;

/*!
 @method addFloat:
 @abstract 添加float类型值，到数组里
 @param value 值
 */
- (void)addFloat:(float)value;

/*!
 @method addDouble:
 @abstract 添加double类型值，到数组里
 @param value 值
 */
- (void)addDouble:(double)value;

/*!
 @method addBool:
 @abstract 添加BOOL类型值，到数组里
 @param value 值
 */
- (void)addBool:(BOOL)value;

/*!
 @method addInteger:
 @abstract 添加NSInteger类型值，到数组里
 @param value 值
 */
- (void)addInteger:(NSInteger)value;

/*!
 @method addUnsignedInteger:
 @abstract 添加NSUInteger类型值，到数组里
 @param value 值
 */
- (void)addUnsignedInteger:(NSUInteger)value;

/*!
 @method addPointValue:
 @abstract 添加CGPoint类型值，到数组里
 @param value 值
 */
- (void)addPointValue:(CGPoint)value;

/*!
 @method addSizeValue:
 @abstract 添加CGSize类型值，到数组里
 @param value 值
 */
- (void)addSizeValue:(CGSize)value;

/*!
 @method addRectValue:
 @abstract 添加CGRect类型值，到数组里
 @param value 值
 */
- (void)addRectValue:(CGRect)value;

/*!
 @method insertObjectCheck:atIndex:
 @abstract 检查插入指定索引号的对象是不是为nil和越界，不是则插入
 @param anObject 值
 @param index 插入到的索引号
 */
- (void)insertObjectCheck:(id)anObject atIndex:(NSUInteger)index;

/*!
 @method insertChar:atIndex:
 @abstract 插入指定索引号的char类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertChar:(char)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedChar:atIndex:
 @abstract 插入指定索引号的unsigned char类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedChar:(unsigned char)value atIndex:(NSUInteger)index;

/*!
 @method insertShort:atIndex:
 @abstract 插入指定索引号的short类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertShort:(short)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedShort:atIndex:
 @abstract 插入指定索引号的unsigned short类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedShort:(unsigned short)value atIndex:(NSUInteger)index;

/*!
 @method insertInt:atIndex:
 @abstract 插入指定索引号的int类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertInt:(int)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedInt:atIndex:
 @abstract 插入指定索引号的unsigned int类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedInt:(unsigned int)value atIndex:(NSUInteger)index;

/*!
 @method insertLong:atIndex:
 @abstract 插入指定索引号的long类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertLong:(long)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedLong:atIndex:
 @abstract 插入指定索引号的unsigned long类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedLong:(unsigned long)value atIndex:(NSUInteger)index;

/*!
 @method insertLongLong:atIndex:
 @abstract 插入指定索引号的long long类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertLongLong:(long long)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedLongLong:atIndex:
 @abstract 插入指定索引号的unsigned long long类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedLongLong:(unsigned long long)value atIndex:(NSUInteger)index;

/*!
 @method insertFloat:atIndex:
 @abstract 插入指定索引号的float类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertFloat:(float)value atIndex:(NSUInteger)index;

/*!
 @method insertDouble:atIndex:
 @abstract 插入指定索引号的double类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertDouble:(double)value atIndex:(NSUInteger)index;

/*!
 @method insertBool:atIndex:
 @abstract 插入指定索引号的BOOL类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertBool:(BOOL)value atIndex:(NSUInteger)index;

/*!
 @method insertInteger:atIndex:
 @abstract 插入指定索引号的NSInteger类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertInteger:(NSInteger)value atIndex:(NSUInteger)index;

/*!
 @method insertUnsignedInteger:atIndex:
 @abstract 插入指定索引号的NSUInteger类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertUnsignedInteger:(NSUInteger)value atIndex:(NSUInteger)index;

/*!
 @method insertPointValue:atIndex:
 @abstract 插入指定索引号的CGPoint类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertPointValue:(CGPoint)value atIndex:(NSUInteger)index;

/*!
 @method insertSizeValue:atIndex:
 @abstract 插入指定索引号的CGSize类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertSizeValue:(CGSize)value atIndex:(NSUInteger)index;

/*!
 @method insertRectValue:atIndex:
 @abstract 插入指定索引号的CGRect类型值，到数组里
 @param value 值
 @param index 插入到的索引号
 */
- (void)insertRectValue:(CGRect)value atIndex:(NSUInteger)index;

/*!
 @method replaceObjectCheckAtIndex:withChar:
 @abstract 检查指定索引号,的对象是不是为nil和越界，不是则替换
 @param index 替换的索引号
 @param anObject 值
 */
- (void)replaceObjectCheckAtIndex:(NSUInteger)index withObject:(id)anObject;

/*!
 @method replaceCharAtIndex:withChar:
 @abstract 指定索引号,替换char类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceCharAtIndex:(NSUInteger)index withChar:(char)value;

/*!
 @method replaceUnsignedCharAtIndex:withUnsignedChar:
 @abstract 指定索引号,替换unsigned char类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedCharAtIndex:(NSUInteger)index withUnsignedChar:(unsigned char)value;

/*!
 @method replaceShortAtIndex:withShort:
 @abstract 指定索引号,替换short类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceShortAtIndex:(NSUInteger)index withShort:(short)value;

/*!
 @method replaceUnsignedShortAtIndex:withUnsignedShort:
 @abstract 指定索引号,替换unsigned short类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedShortAtIndex:(NSUInteger)index withUnsignedShort:(unsigned short)value;

/*!
 @method replaceIntAtIndex:withInt:
 @abstract 指定索引号,替换int类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceIntAtIndex:(NSUInteger)index withInt:(int)value;

/*!
 @method replaceUnsignedIntAtIndex:withUnsignedInt:
 @abstract 指定索引号,替换unsigned int类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedIntAtIndex:(NSUInteger)index withUnsignedInt:(unsigned int)value;

/*!
 @method replaceLongAtIndex:withLong:
 @abstract 指定索引号,替换long类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceLongAtIndex:(NSUInteger)index withLong:(long)value;

/*!
 @method replaceUnsignedLongAtIndex:withUnsignedLong:
 @abstract 指定索引号,替换unsigned long类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedLongAtIndex:(NSUInteger)index withUnsignedLong:(unsigned long)value;

/*!
 @method replaceLongLongAtIndex:withLongLong:
 @abstract 指定索引号,替换long long类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceLongLongAtIndex:(NSUInteger)index withLongLong:(long long)value;

/*!
 @method replaceUnsignedLongLongAtIndex:withUnsignedLongLong:
 @abstract 指定索引号,替换unsigned long long类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedLongLongAtIndex:(NSUInteger)index withUnsignedLongLong:(unsigned long long)value;

/*!
 @method replaceFloatAtIndex:withFloat:
 @abstract 指定索引号,替换float类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceFloatAtIndex:(NSUInteger)index withFloat:(float)value;

/*!
 @method replaceDoubleAtIndex:withDouble:
 @abstract 指定索引号,替换double类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceDoubleAtIndex:(NSUInteger)index withDouble:(double)value;

/*!
 @method replaceBoolAtIndex:withBool:
 @abstract 指定索引号,替换BOOL类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceBoolAtIndex:(NSUInteger)index withBool:(BOOL)value;

/*!
 @method replaceIntegerAtIndex:withInteger:
 @abstract 指定索引号,替换NSInteger类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceIntegerAtIndex:(NSUInteger)index withInteger:(NSInteger)value;

/*!
 @method replaceUnsignedIntegerAtIndex:withUnsignedInteger:
 @abstract 指定索引号,替换NSUInteger类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceUnsignedIntegerAtIndex:(NSUInteger)index withUnsignedInteger:(NSUInteger)value;

/*!
 @method replacePointValueAtIndex:withPointValue:
 @abstract 指定索引号,替换CGPoint类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replacePointValueAtIndex:(NSUInteger)index withPointValue:(CGPoint)value;

/*!
 @method replaceSizeValueAtIndex:withSizeValue:
 @abstract 指定索引号,替换CGSize类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceSizeValueAtIndex:(NSUInteger)index withSizeValue:(CGSize)value;

/*!
 @method replaceRectValueAtIndex:withRectValue:
 @abstract 指定索引号,替换CGRect类型值
 @param index 替换的索引号
 @param value 值
 */
- (void)replaceRectValueAtIndex:(NSUInteger)index withRectValue:(CGRect)value;

/*!
 @method removeObjectAtIndexCheck:
 @abstract 检查移除的index是不是在范围内;在是则移除
 @param index 索引号
 */
- (void)removeObjectAtIndexCheck:(NSUInteger)index;

@end
