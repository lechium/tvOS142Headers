/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface W5DiagnosticsTestRequest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	long long _testID;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long testID;                        //@synthesize testID=_testID - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithTestID:(long long)arg1 configuration:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setTestID:(long long)arg1 ;
-(BOOL)isEqualToDiagnosticsTestRequest:(id)arg1 ;
-(long long)testID;
@end

