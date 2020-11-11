/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface DMFSecurityInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsBlockLevelEncryption;
	BOOL _supportsFileLevelEncryption;
	BOOL _passcodeIsSet;
	BOOL _passcodeIsCompliantWithGlobalRestrictions;
	BOOL _passcodeIsCompliantWithProfileRestrictions;
	unsigned long long _passcodeLockGracePeriod;
	unsigned long long _passcodeLockGracePeriodEnforced;

}

@property (nonatomic,readonly) BOOL supportsBlockLevelEncryption;                               //@synthesize supportsBlockLevelEncryption=_supportsBlockLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileLevelEncryption;                                //@synthesize supportsFileLevelEncryption=_supportsFileLevelEncryption - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsSet;                                              //@synthesize passcodeIsSet=_passcodeIsSet - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsCompliantWithGlobalRestrictions;                  //@synthesize passcodeIsCompliantWithGlobalRestrictions=_passcodeIsCompliantWithGlobalRestrictions - In the implementation block
@property (nonatomic,readonly) BOOL passcodeIsCompliantWithProfileRestrictions;                 //@synthesize passcodeIsCompliantWithProfileRestrictions=_passcodeIsCompliantWithProfileRestrictions - In the implementation block
@property (nonatomic,readonly) unsigned long long passcodeLockGracePeriod;                      //@synthesize passcodeLockGracePeriod=_passcodeLockGracePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long passcodeLockGracePeriodEnforced;              //@synthesize passcodeLockGracePeriodEnforced=_passcodeLockGracePeriodEnforced - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsBlockLevelEncryption;
-(BOOL)supportsFileLevelEncryption;
-(unsigned long long)passcodeLockGracePeriod;
-(BOOL)passcodeIsSet;
-(BOOL)passcodeIsCompliantWithGlobalRestrictions;
-(BOOL)passcodeIsCompliantWithProfileRestrictions;
-(unsigned long long)passcodeLockGracePeriodEnforced;
-(id)initWithSupportsBlockLevelEncryption:(BOOL)arg1 supportsFileLevelEncryption:(BOOL)arg2 passcodeIsSet:(BOOL)arg3 passcodeIsCompliantWithGlobalRestrictions:(BOOL)arg4 passcodeIsCompliantWithProfileRestrictions:(BOOL)arg5 passcodeLockGracePeriodEnforced:(unsigned long long)arg6 passcodeLockGracePeriod:(unsigned long long)arg7 ;
@end

