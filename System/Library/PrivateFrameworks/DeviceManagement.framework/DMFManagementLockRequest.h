/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFManagementLockRequest : DMFTaskRequest {

	NSString* _lockedByLabel;
	NSString* _passcode;

}

@property (nonatomic,copy) NSString * lockedByLabel;              //@synthesize lockedByLabel=_lockedByLabel - In the implementation block
@property (nonatomic,copy) NSString * passcode;                   //@synthesize passcode=_passcode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)passcode;
-(void)setPasscode:(NSString *)arg1 ;
-(NSString *)lockedByLabel;
-(void)setLockedByLabel:(NSString *)arg1 ;
@end

