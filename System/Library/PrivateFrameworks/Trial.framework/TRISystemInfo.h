/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface TRISystemInfo : NSObject <NSSecureCoding> {

	BOOL _isEnrolledInBetaProgram;
	BOOL _logUserSettingsLanguageCode;
	BOOL _logUserSettingsRegionCode;
	BOOL _logUserKeyboardEnabledInputMode;
	NSArray* _enabledInputModeIdentifiers;

}

@property (assign,nonatomic) BOOL isEnrolledInBetaProgram;                       //@synthesize isEnrolledInBetaProgram=_isEnrolledInBetaProgram - In the implementation block
@property (nonatomic,retain) NSArray * enabledInputModeIdentifiers;              //@synthesize enabledInputModeIdentifiers=_enabledInputModeIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL logUserSettingsLanguageCode;                   //@synthesize logUserSettingsLanguageCode=_logUserSettingsLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL logUserSettingsRegionCode;                     //@synthesize logUserSettingsRegionCode=_logUserSettingsRegionCode - In the implementation block
@property (assign,nonatomic) BOOL logUserKeyboardEnabledInputMode;               //@synthesize logUserKeyboardEnabledInputMode=_logUserKeyboardEnabledInputMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)info;
+(id)loadSystemInfo;
+(id)createSystemInfoWithFactorProvider:(id)arg1 ;
+(id)_persistentSystemInfoPath;
+(id)systemInfoFromFile:(id)arg1 ;
+(BOOL)_sysIsEnrolledInBetaProgram;
+(id)_sysEnabledInputModeIdentifiers;
+(BOOL)_sysIsProfileInstalledWithIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)save;
-(NSArray *)enabledInputModeIdentifiers;
-(BOOL)saveToFile:(id)arg1 ;
-(BOOL)isEnrolledInBetaProgram;
-(id)initFromSystemWithFactorProvider:(id)arg1 ;
-(BOOL)logUserSettingsRegionCode;
-(BOOL)logUserSettingsLanguageCode;
-(BOOL)logUserKeyboardEnabledInputMode;
-(void)setIsEnrolledInBetaProgram:(BOOL)arg1 ;
-(void)setEnabledInputModeIdentifiers:(NSArray *)arg1 ;
-(void)setLogUserSettingsLanguageCode:(BOOL)arg1 ;
-(void)setLogUserSettingsRegionCode:(BOOL)arg1 ;
-(void)setLogUserKeyboardEnabledInputMode:(BOOL)arg1 ;
@end

