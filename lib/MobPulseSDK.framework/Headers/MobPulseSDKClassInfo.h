
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Type encoding's type.
 */
typedef NS_OPTIONS(NSUInteger, MobPulseSDKEncodingType) {
    MobPulseSDKEncodingTypeMask       = 0xFF, ///< mask of type value
    MobPulseSDKEncodingTypeUnknown    = 0, ///< unknown
    MobPulseSDKEncodingTypeVoid       = 1, ///< void
    MobPulseSDKEncodingTypeBool       = 2, ///< bool
    MobPulseSDKEncodingTypeInt8       = 3, ///< char / BOOL
    MobPulseSDKEncodingTypeUInt8      = 4, ///< unsigned char
    MobPulseSDKEncodingTypeInt16      = 5, ///< short
    MobPulseSDKEncodingTypeUInt16     = 6, ///< unsigned short
    MobPulseSDKEncodingTypeInt32      = 7, ///< int
    MobPulseSDKEncodingTypeUInt32     = 8, ///< unsigned int
    MobPulseSDKEncodingTypeInt64      = 9, ///< long long
    MobPulseSDKEncodingTypeUInt64     = 10, ///< unsigned long long
    MobPulseSDKEncodingTypeFloat      = 11, ///< float
    MobPulseSDKEncodingTypeDouble     = 12, ///< double
    MobPulseSDKEncodingTypeLongDouble = 13, ///< long double
    MobPulseSDKEncodingTypeObject     = 14, ///< id
    MobPulseSDKEncodingTypeClass      = 15, ///< Class
    MobPulseSDKEncodingTypeSEL        = 16, ///< SEL
    MobPulseSDKEncodingTypeBlock      = 17, ///< block
    MobPulseSDKEncodingTypePointer    = 18, ///< void*
    MobPulseSDKEncodingTypeStruct     = 19, ///< struct
    MobPulseSDKEncodingTypeUnion      = 20, ///< union
    MobPulseSDKEncodingTypeCString    = 21, ///< char*
    MobPulseSDKEncodingTypeCArray     = 22, ///< char[10] (for example)
    
    MobPulseSDKEncodingTypeQualifierMask   = 0xFF00,   ///< mask of qualifier
    MobPulseSDKEncodingTypeQualifierConst  = 1 << 8,  ///< const
    MobPulseSDKEncodingTypeQualifierIn     = 1 << 9,  ///< in
    MobPulseSDKEncodingTypeQualifierInout  = 1 << 10, ///< inout
    MobPulseSDKEncodingTypeQualifierOut    = 1 << 11, ///< out
    MobPulseSDKEncodingTypeQualifierBycopy = 1 << 12, ///< bycopy
    MobPulseSDKEncodingTypeQualifierByref  = 1 << 13, ///< byref
    MobPulseSDKEncodingTypeQualifierOneway = 1 << 14, ///< oneway
    
    MobPulseSDKEncodingTypePropertyMask         = 0xFF0000, ///< mask of property
    MobPulseSDKEncodingTypePropertyReadonly     = 1 << 16, ///< readonly
    MobPulseSDKEncodingTypePropertyCopy         = 1 << 17, ///< copy
    MobPulseSDKEncodingTypePropertyRetain       = 1 << 18, ///< retain
    MobPulseSDKEncodingTypePropertyNonatomic    = 1 << 19, ///< nonatomic
    MobPulseSDKEncodingTypePropertyWeak         = 1 << 20, ///< weak
    MobPulseSDKEncodingTypePropertyCustomGetter = 1 << 21, ///< getter=
    MobPulseSDKEncodingTypePropertyCustomSetter = 1 << 22, ///< setter=
    MobPulseSDKEncodingTypePropertyDynamic      = 1 << 23, ///< @dynamic
};

MobPulseSDKEncodingType MobPulseSDKEncodingGetType(const char *typeEncoding);

@interface MobPulseSDKClassIvarInfo : NSObject
@property (nonatomic, assign, readonly) Ivar ivar;              ///< ivar opaque struct
@property (nonatomic, strong, readonly) NSString *name;         ///< Ivar's name
@property (nonatomic, assign, readonly) ptrdiff_t offset;       ///< Ivar's offset
@property (nonatomic, strong, readonly) NSString *typeEncoding; ///< Ivar's type encoding
@property (nonatomic, assign, readonly) MobPulseSDKEncodingType type;    ///< Ivar's type

- (instancetype)initWithIvar:(Ivar)ivar;
@end


/**
 Method information.
 */
@interface MobPulseSDKClassMethodInfo : NSObject
@property (nonatomic, assign, readonly) Method method;                  ///< method opaque struct
@property (nonatomic, strong, readonly) NSString *name;                 ///< method name
@property (nonatomic, assign, readonly) SEL sel;                        ///< method's selector
@property (nonatomic, assign, readonly) IMP imp;                        ///< method's implementation
@property (nonatomic, strong, readonly) NSString *typeEncoding;         ///< method's parameter and return types
@property (nonatomic, strong, readonly) NSString *returnTypeEncoding;   ///< return value's type
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *argumentTypeEncodings; ///< array of arguments' type
- (instancetype)initWithMethod:(Method)method;
@end


/**
 Property information.
 */
@interface MobPulseSDKClassPropertyInfo : NSObject
@property (nonatomic, assign, readonly) objc_property_t property; ///< property's opaque struct
@property (nonatomic, strong, readonly) NSString *name;           ///< property's name
@property (nonatomic, assign, readonly) MobPulseSDKEncodingType type;      ///< property's type
@property (nonatomic, strong, readonly) NSString *typeEncoding;   ///< property's encoding value
@property (nonatomic, strong, readonly) NSString *ivarName;       ///< property's ivar name
@property (nullable, nonatomic, assign, readonly) Class cls;      ///< may be nil
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *protocols; ///< may nil
@property (nonatomic, assign, readonly) SEL getter;               ///< getter (nonnull)
@property (nonatomic, assign, readonly) SEL setter;               ///< setter (nonnull)

- (instancetype)initWithProperty:(objc_property_t)property;
@end


/**
 Class information for a class.
 */
@interface MobPulseSDKClassInfo : NSObject
@property (nonatomic, assign, readonly) Class cls; ///< class object
@property (nullable, nonatomic, assign, readonly) Class superCls; ///< super class object
@property (nullable, nonatomic, assign, readonly) Class metaCls;  ///< class's meta class object
@property (nonatomic, readonly) BOOL isMeta; ///< whether this class is meta class
@property (nonatomic, strong, readonly) NSString *name; ///< class name
@property (nullable, nonatomic, strong, readonly) MobPulseSDKClassInfo *superClassInfo; ///< super class's class info
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MobPulseSDKClassIvarInfo *> *ivarInfos; ///< ivars
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MobPulseSDKClassMethodInfo *> *methodInfos; ///< methods
@property (nullable, nonatomic, strong, readonly) NSDictionary<NSString *, MobPulseSDKClassPropertyInfo *> *propertyInfos; ///< properties
- (void)setNeedUpdate;

- (BOOL)needUpdate;

+ (nullable instancetype)classInfoWithClass:(Class)cls;

+ (nullable instancetype)classInfoWithClassName:(NSString *)className;

@end

NS_ASSUME_NONNULL_END
