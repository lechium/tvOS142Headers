/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INHomeAction : NSObject <NSCopying, NSSecureCoding> {

	BOOL _boolValue;
	long long _type;
	long long _valueType;
	double _doubleValue;
	long long _integerValue;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long valueType;                      //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,readonly) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,readonly) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
@property (nonatomic,readonly) long long integerValue;                   //@synthesize integerValue=_integerValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)doubleValue;
-(BOOL)boolValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(long long)integerValue;
-(long long)type;
-(long long)valueType;
-(id)initWithType:(long long)arg1 boolValue:(BOOL)arg2 ;
-(id)initWithType:(long long)arg1 doubleValue:(double)arg2 ;
-(id)initWithType:(long long)arg1 integerValue:(long long)arg2 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(long long)arg1 valueType:(long long)arg2 boolValue:(BOOL)arg3 doubleValue:(double)arg4 integerValue:(long long)arg5 stringValue:(id)arg6 ;
@end

