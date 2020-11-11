/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _machineID;
	NSString* _oneTimePassword;
	unsigned long long _routingInfo;

}

@property (nonatomic,copy) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * oneTimePassword;                    //@synthesize oneTimePassword=_oneTimePassword - In the implementation block
@property (assign,nonatomic) unsigned long long routingInfo;              //@synthesize routingInfo=_routingInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)machineID;
-(NSString *)oneTimePassword;
-(unsigned long long)routingInfo;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setOneTimePassword:(NSString *)arg1 ;
-(void)setRoutingInfo:(unsigned long long)arg1 ;
@end

