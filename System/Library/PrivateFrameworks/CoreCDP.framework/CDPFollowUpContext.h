/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CDPFollowUpContext : NSObject <NSSecureCoding> {

	unsigned long long _repairType;
	BOOL _shouldNotify;
	BOOL _force;
	NSString* _followUpType;

}

@property (assign,nonatomic) unsigned long long repairType; 
@property (nonatomic,copy) NSString * followUpType;                      //@synthesize followUpType=_followUpType - In the implementation block
@property (assign,nonatomic) BOOL shouldNotify;                          //@synthesize shouldNotify=_shouldNotify - In the implementation block
@property (assign,nonatomic) BOOL force;                                 //@synthesize force=_force - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextForStateRepair;
+(id)contextWithType:(id)arg1 ;
+(id)contextForOfflinePasscodeChange;
+(id)contextForRecoveryKeyRepair;
+(id)contextForSettingUpBiometrics;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)force;
-(void)setForce:(BOOL)arg1 ;
-(void)setShouldNotify:(BOOL)arg1 ;
-(void)setFollowUpType:(NSString *)arg1 ;
-(BOOL)shouldNotify;
-(NSString *)followUpType;
-(void)setRepairType:(unsigned long long)arg1 ;
-(unsigned long long)repairType;
@end

