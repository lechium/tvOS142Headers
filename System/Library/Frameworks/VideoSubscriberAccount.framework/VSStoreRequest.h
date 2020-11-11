/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, VSAuditToken;

@interface VSStoreRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _methodName;
	NSString* _bagKey;
	NSDictionary* _parameters;
	VSAuditToken* _auditToken;

}

@property (nonatomic,copy) NSString * methodName;                    //@synthesize methodName=_methodName - In the implementation block
@property (nonatomic,copy) NSString * bagKey;                        //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) VSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VSAuditToken *)auditToken;
-(NSDictionary *)parameters;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)bagKey;
-(void)setMethodName:(NSString *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(NSString *)methodName;
@end

