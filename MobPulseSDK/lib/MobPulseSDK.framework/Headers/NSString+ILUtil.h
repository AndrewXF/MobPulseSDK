//
//  NSString+ILUtil.h
//  MobPulse
//
//  Created by xiefei10 on 7/9/24.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define HK_isEmptyString(object)        [NSString     isEmpty:object]
#define HKObjToAddress(obj) [NSString objToAddress:(obj) containClass:YES]
#define HKObjToAddressNoClass(obj) [NSString objToAddress:(obj)]

@interface NSString (ILUtil)

/*!
 @method isEmpty:
 @abstract 是否没有字符串；没有字符串为YES;
 @param object 验证对象
 @result 返回BOOL
 */
+ (BOOL)isEmpty:(NSString *)object;

/*!
 @method charValue
 @abstract 把字符串转为char类型
 @result 返回char
 */
- (char)charValue;

/*!
 @method unsignedCharValue
 @abstract 把字符串转为unsigned char类型
 @result 返回unsigned char
 */
- (unsigned char)unsignedCharValue;

/*!
 @method boolValue
 @abstract 把字符串转为BOOL类型
 @result 返回BOOL
 */
- (BOOL)boolValue;

/*!
 @method shortValue
 @abstract 把字符串转为short类型
 @result 返回short
 */
- (short)shortValue;

/*!
 @method unsignedShortValue
 @abstract 把字符串转为unsigned short类型
 @result 返回unsigned short
 */
- (unsigned short)unsignedShortValue;

/*!
 @method unsignedIntValue
 @abstract 把字符串转为unsigned int类型
 @result 返回unsigned int
 */
- (unsigned int)unsignedIntValue;

/*!
 @method longValue
 @abstract 把字符串转为long类型
 @result 返回long
 */
- (long)longValue;

/*!
 @method unsignedLongValue
 @abstract 把字符串转为unsigned long类型
 @result 返回unsigned long
 */
- (unsigned long)unsignedLongValue;

/*!
 @method unsignedLongLongValue
 @abstract 把字符串转为unsigned long long类型
 @result 返回unsigned long long
 */
- (unsigned long long)unsignedLongLongValue;

/*!
 @method unsignedIntegerValue
 @abstract 把字符串转为NSUInteger类型
 @result 返回NSUInteger
 */
- (NSUInteger)unsignedIntegerValue;

/*!
 @method numberValue
 @abstract 把字符串转为NSNumber类型
 @result 返回NSNumber
 */
- (NSNumber *)numberValue;

/*!
 @method arrayValue
 @abstract 把字符串转为NSArray类型
 @result 返回NSArray
 */
- (NSArray *)arrayValue;

/*!
 @method dictionaryValue
 @abstract 把字符串转为NSDictionary类型
 @result 返回NSDictionary
 */
- (NSDictionary *)dictionaryValue;

/*!
 @method dataValue
 @abstract 把字符串转为NSData类型，只支持UTF-8有损转换；排UTF-8编码的请用 dataUsingEncoding: 方法转
 @result 返回NSData
 */
- (NSData *)dataValue;

/*!
 @method decimalValue
 @abstract 把字符串转为NSDecimal类型
 @result 返回NSDecimal
 */
- (NSDecimal)decimalValue;

/*!
 @method decimalNumberValue
 @abstract 把字符串转为NSDecimalNumber类型
 @result 返回NSDecimalNumber
 */
- (NSDecimalNumber *)decimalNumberValue;

/*!
 @method urlValue
 @abstract 把字符串转为NSUrl类型
 @result 返回urlValue
 */
- (NSURL *)urlValue;

/*!
 @method urlUTF8Value
 @abstract 把字符串转为NSUrl类型 如果不成功在进行一次utf-8的转换
 @result 返回urlValue
 */
- (NSURL *)urlUTF8Value;

/*!
 @method isEmpty
 @abstract 是否没有字符串；没有字符串为YES;
 @result 返回BOOL
 */
- (BOOL)isEmpty;

/*!
 @method trim
 @abstract 去除两端的空字符
 @result 返回去除两端的空字符的字符串
 */
- (NSString *)trim;

/*!
 @method md5
 @abstract 把字符串加密成md5
 @result 返回md5加密字符串
 */
- (NSString *)md5;

/*!
 @method sha256
 @abstract 把字符串加密成sha256
 @result 返回sha256加密字符串
 */
- (NSString *)SHA256;

/*!
 @method stringByUrlEncoding
 @abstract 转义合法的URL字符串，默认编码为kCFStringEncodingUTF8，与stringByUrlDecode方法相反
 @result 返回URL字符串
 */
- (NSString *)stringByUrlEncoding;

/*!
 @method stringByUrlEncoding:
 @abstract 转义合法的URL字符串，与stringByUrlDecode方法相反
 @param encoding 编码
 @result 返回URL字符串
 */
- (NSString *)stringByUrlEncoding:(CFStringEncoding)encoding;

/*!
 @method stringByUrlDecode
 @abstract 把URL转义成正常字符串，默认编码为NSUTF8StringEncoding，与stringByUrlEncoding方法相反
 @result 返回字符串
 */
- (NSString *)stringByUrlDecode;

/*!
 @method stringByUrlDecode:
 @abstract 把URL转义成正常字符串，与stringByUrlEncoding方法相反
 @param encoding 编码
 @result 返回字符串
 */
- (NSString *)stringByUrlDecode:(NSStringEncoding)encoding;

/*!
 @method stringByUrlParameterDictionary:
 @abstract 把URL的参数转成NSDictionary，字符串a=1&b=2
 @result 返回NSDictionary
 */
- (NSDictionary *)stringByUrlParameterDictionary;

/*!
 @method formatTimestamp:
 @abstract 把URL的参数转成YYYY-MM-dd HH:mm形式的时间
 @result 返回 NSString
 */
- (NSString *)formatTimestamp;


/*!
 @method formatCommentTimestamp:
 @abstract 把参数转成 刚刚 x分钟前
 @result 返回 NSString
 */
- (NSString *)formatCommentTimestamp;

/*!
 @method substringWithRangeCheck:
 @abstract 检测是否在合法范围内，在就返回字符
 @param range 截取范围
 @result 返回NSString
 */
- (NSString *)substringWithRangeCheck:(NSRange)range;

/*!
 @method stringByRever
 @abstract 获取反向字符串
 @result 返回 NSString
 */
- (NSString *)stringByRever;


+ (NSInteger)apivNumberFromAPIVString:(NSString *)apiv;

+ (NSString *)bdhk_fileMD5HashCreateWithPath:(NSString *)filePath;

- (NSString *)appIdString;

/*!
 @method convertToDictionary
 @abstract 将json字符串转换成Dictionary
 @result 返回Dictionary
 */
- (NSDictionary*)convertToDictionary;

/*!
 @method substringFromIndexSafely
 @abstract 检测是否在合法范围内，在就返回字符
 @param atIndex 位置
 @result 返回NSString
 */
- (NSString *)substringFromIndexSafely:(NSInteger)atIndex;
//{
//    if (self.length > atIndex) {
//        return [self substringFromIndex:atIndex];
//    }
//    return nil;
//}

/**
 判断自字符串中是否有非编码的特殊字符

 @return 如果有，将特殊字符进行编码
 */
- (NSString *)checkLegalCharacterUrlString;


/**
 是否含有中文
 */
+ (BOOL)checkHasChinese:(NSString *)string;

/**
 过滤Emoji字符
 */
+ (NSString *)disableEmoji:(NSString *)text;

/**
 获取文字高度
 */
- (CGFloat)heightWithFont:(UIFont *)font Width:(float)width;
/**
 获取文字宽度
 */
- (CGFloat)widthWithFont:(UIFont *)font;
/**
 获取文字行数
 */
- (NSInteger)stringLinesWithFont:(UIFont *)font width:(CGFloat)width;

/**
 文本长度

 @return 汉子 1 个字，数字和字符
 */
- (int)textLength;

/**
 wifi mac
 */
+ (NSString *)WiFiMacAddress;

/**
 wifi name
 */
+ (NSString *)WifiName;

/**
 是否同意隐私弹窗
 */
+ (BOOL)isHaveAgreedPrivacy;
/**
 获取设备物理地址
*/
+ (NSString *)iOSMacAddress;

- (BOOL)checkHasEmoji;

- (NSAttributedString *)attributeStringShadowWithShadowBlur:(CGFloat)blur shadowColor:(UIColor *)color;

- (NSAttributedString *)attributeStringShadowWithShadowBlur:(CGFloat)blur shadowOffset:(CGSize)offset shadowColor:(UIColor *)color shadowRange:(NSRange)range;

- (NSComparisonResult)compareVersion:(NSString *)string; // 版本号比较
//普通字符串转换为十六进制的。
- (NSString *)hexStringFromString;
// 十六进制转换为普通字符串的。
- (NSString *)stringFromHexString;

/// 根据对象获取地址
/// @param obj 对象
/// @return 对象地址
+ (NSString *)objToAddress:(id)obj;

/// 根据对象获取地址
/// @param obj 对象
/// @param containCls 是否同时获取对象类型，会以 0x123__objClass__className的形式返回
/// @return 对象地址
+ (NSString *)objToAddress:(id)obj containClass:(BOOL)containCls;

/// 大整数格式转化 将比较大的整数转化成 `xx万` or `xx亿` 如果里面有除数字的其他字符，会返回self
/// < 10w 返回带一位小数的 `x.x万`
/// < 1亿 返回不带小数的 `x万`
/// < 10亿 返回带一位小数 `x.x亿`
/// 更大的 返回不带小数的 `x亿`
- (NSString *)hkNumberFormat;

@end
