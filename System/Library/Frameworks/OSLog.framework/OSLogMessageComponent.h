/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData, NSNumber;

@interface OSLogMessageComponent : NSObject {

	NSString* _formatSubstring;
	NSString* _placeholder;
	long long _argumentCategory;
	NSData* _argumentDataValue;
	double _argumentDoubleValue;
	long long _argumentInt64Value;
	NSNumber* _argumentNumberValue;
	NSString* _argumentStringValue;
	unsigned long long _argumentUInt64Value;

}

@property (nonatomic,copy) NSString * formatSubstring;                              //@synthesize formatSubstring=_formatSubstring - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                                  //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSData * argumentDataValue;                              //@synthesize argumentDataValue=_argumentDataValue - In the implementation block
@property (nonatomic,copy) NSNumber * argumentNumberValue;                          //@synthesize argumentNumberValue=_argumentNumberValue - In the implementation block
@property (nonatomic,copy) NSString * argumentStringValue;                          //@synthesize argumentStringValue=_argumentStringValue - In the implementation block
@property (nonatomic,readonly) long long argumentCategory;                          //@synthesize argumentCategory=_argumentCategory - In the implementation block
@property (nonatomic,readonly) double argumentDoubleValue;                          //@synthesize argumentDoubleValue=_argumentDoubleValue - In the implementation block
@property (nonatomic,readonly) long long argumentInt64Value;                        //@synthesize argumentInt64Value=_argumentInt64Value - In the implementation block
@property (nonatomic,readonly) unsigned long long argumentUInt64Value;              //@synthesize argumentUInt64Value=_argumentUInt64Value - In the implementation block
-(NSString *)placeholder;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)initWithDecomposedMessage:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)fillWithScalar:(id)arg1 ;
-(void)fillWithString:(id)arg1 ;
-(void)fillWithData:(id)arg1 ;
-(NSString *)formatSubstring;
-(void)setFormatSubstring:(NSString *)arg1 ;
-(long long)argumentCategory;
-(NSData *)argumentDataValue;
-(void)setArgumentDataValue:(NSData *)arg1 ;
-(double)argumentDoubleValue;
-(long long)argumentInt64Value;
-(NSNumber *)argumentNumberValue;
-(void)setArgumentNumberValue:(NSNumber *)arg1 ;
-(NSString *)argumentStringValue;
-(void)setArgumentStringValue:(NSString *)arg1 ;
-(unsigned long long)argumentUInt64Value;
@end

