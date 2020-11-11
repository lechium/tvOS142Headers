/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface HMFLogEventSessionVoucher : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(NSUUID *)uuid;
-(id)initWithUUID:(id)arg1 serviceName:(id)arg2 ;
@end

