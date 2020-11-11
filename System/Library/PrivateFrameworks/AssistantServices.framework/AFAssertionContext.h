/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/AFDictionaryConvertible.h>

@class NSString, NSDictionary;

@interface AFAssertionContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible> {

	unsigned long long _timestamp;
	NSString* _reason;
	NSDictionary* _userInfo;
	AFAssertionContext* _parentContext;

}

@property (nonatomic,readonly) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                         //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) AFAssertionContext * parentContext;              //@synthesize parentContext=_parentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)reason;
-(unsigned long long)timestamp;
-(AFAssertionContext *)parentContext;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)buildDictionaryRepresentation;
-(id)initWithTimestamp:(unsigned long long)arg1 reason:(id)arg2 userInfo:(id)arg3 parentContext:(id)arg4 ;
@end

