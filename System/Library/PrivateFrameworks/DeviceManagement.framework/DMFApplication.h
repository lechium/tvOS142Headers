/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSNumber, NSDictionary, DMFApplicationInstallProgress;

@interface DMFApplication : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isManaged;
	BOOL _isValidated;
	BOOL _isInstalled;
	BOOL _isPlaceholder;
	BOOL _isAppUpdate;
	BOOL _isBetaApp;
	BOOL _isRemoveable;
	BOOL _fileSharingEnabled;
	NSString* _applicationIdentifier;
	NSString* _bundleIdentifier;
	NSString* _name;
	NSData* _iconData;
	NSString* _bundleVersion;
	NSString* _shortVersionString;
	NSString* _applicationType;
	NSNumber* _adamID;
	NSNumber* _externalVersionIdentifier;
	NSNumber* _betaExternalVersionIdentifier;
	NSNumber* _staticUsage;
	NSNumber* _dynamicUsage;
	NSNumber* _onDemandResourcesUsage;
	NSString* _unusedRedemptionCode;
	NSDictionary* _attributes;
	NSDictionary* _configuration;
	NSDictionary* _feedback;
	unsigned long long _state;
	unsigned long long _managementFlags;
	DMFApplicationInstallProgress* _progress;

}

@property (nonatomic,copy,readonly) NSString * applicationIdentifier;                      //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSData * iconData;                                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleVersion;                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortVersionString;                         //@synthesize shortVersionString=_shortVersionString - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationType;                            //@synthesize applicationType=_applicationType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * adamID;                                     //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * externalVersionIdentifier;                  //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * betaExternalVersionIdentifier;              //@synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * staticUsage;                                //@synthesize staticUsage=_staticUsage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * dynamicUsage;                               //@synthesize dynamicUsage=_dynamicUsage - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * onDemandResourcesUsage;                     //@synthesize onDemandResourcesUsage=_onDemandResourcesUsage - In the implementation block
@property (nonatomic,copy,readonly) NSString * unusedRedemptionCode;                       //@synthesize unusedRedemptionCode=_unusedRedemptionCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configuration;                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * feedback;                               //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long managementFlags;                         //@synthesize managementFlags=_managementFlags - In the implementation block
@property (nonatomic,readonly) BOOL isManaged;                                             //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) BOOL isValidated;                                           //@synthesize isValidated=_isValidated - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                                           //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholder;                                         //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL isAppUpdate;                                           //@synthesize isAppUpdate=_isAppUpdate - In the implementation block
@property (nonatomic,readonly) BOOL isBetaApp;                                             //@synthesize isBetaApp=_isBetaApp - In the implementation block
@property (nonatomic,readonly) BOOL isRemoveable;                                          //@synthesize isRemoveable=_isRemoveable - In the implementation block
@property (nonatomic,readonly) BOOL fileSharingEnabled;                                    //@synthesize fileSharingEnabled=_fileSharingEnabled - In the implementation block
@property (nonatomic,readonly) DMFApplicationInstallProgress * progress;                   //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(NSString *)bundleIdentifier;
-(NSDictionary *)configuration;
-(DMFApplicationInstallProgress *)progress;
-(NSDictionary *)attributes;
-(NSString *)applicationType;
-(BOOL)isBetaApp;
-(NSString *)shortVersionString;
-(NSString *)bundleVersion;
-(BOOL)isInstalled;
-(BOOL)isPlaceholder;
-(NSData *)iconData;
-(NSDictionary *)feedback;
-(NSString *)applicationIdentifier;
-(NSNumber *)adamID;
-(NSNumber *)betaExternalVersionIdentifier;
-(NSNumber *)externalVersionIdentifier;
-(BOOL)isManaged;
-(NSNumber *)staticUsage;
-(NSNumber *)dynamicUsage;
-(NSNumber *)onDemandResourcesUsage;
-(BOOL)isValidated;
-(NSString *)unusedRedemptionCode;
-(unsigned long long)managementFlags;
-(BOOL)isAppUpdate;
-(BOOL)isRemoveable;
-(BOOL)fileSharingEnabled;
-(id)initWithApplicationIdentifier:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 iconData:(id)arg4 bundleVersion:(id)arg5 shortVersionString:(id)arg6 applicationType:(id)arg7 adamID:(id)arg8 externalVersionIdentifier:(id)arg9 betaExternalVersionIdentifier:(id)arg10 staticUsage:(id)arg11 dynamicUsage:(id)arg12 onDemandResourcesUsage:(id)arg13 unusedRedemptionCode:(id)arg14 attributes:(id)arg15 configuration:(id)arg16 feedback:(id)arg17 state:(unsigned long long)arg18 managementFlags:(unsigned long long)arg19 isManaged:(BOOL)arg20 isValidated:(BOOL)arg21 isInstalled:(BOOL)arg22 isPlaceholder:(BOOL)arg23 isAppUpdate:(BOOL)arg24 isBetaApp:(BOOL)arg25 isRemoveable:(BOOL)arg26 fileSharingEnabled:(BOOL)arg27 progress:(id)arg28 ;
-(id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 iconData:(id)arg3 applicationType:(id)arg4 adamID:(id)arg5 externalVersionNumber:(id)arg6 betaExternalVersionIdentifier:(id)arg7 isInstalled:(BOOL)arg8 isPlaceholder:(BOOL)arg9 isAppUpdate:(BOOL)arg10 isBetaApp:(BOOL)arg11 isRemoveable:(BOOL)arg12 fileSharingEnabled:(BOOL)arg13 progress:(id)arg14 ;
@end

