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

@class NSMutableDictionary, NSString, NSDate, NSArray;

@interface AFDeviceContextMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingStore;
	NSString* _type;
	NSDate* _deliveryDate;
	NSDate* _expirationDate;
	NSArray* _redactedKeyPaths;

}

@property (nonatomic,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * deliveryDate;                   //@synthesize deliveryDate=_deliveryDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSArray * redactedKeyPaths;              //@synthesize redactedKeyPaths=_redactedKeyPaths - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSDate *)expirationDate;
-(id)initWithBackingStore:(id)arg1 ;
-(id)backingStore;
-(id)initWithType:(id)arg1 deliveryDate:(id)arg2 expirationDate:(id)arg3 redactedKeyPaths:(id)arg4 ;
-(BOOL)isExpiredByDate:(id)arg1 ;
-(NSDate *)deliveryDate;
-(NSArray *)redactedKeyPaths;
@end

