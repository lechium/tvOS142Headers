/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUARP/CoreUARP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_os_log;
@class NSString, NSObject, NSNumber, NSArray;

@interface UARPAssetID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _remoteBuildManifestPlistPath;
	NSObject*<OS_os_log> _log;
	BOOL _deploymentAllowed;
	long long _type;
	NSString* _remotePath;
	NSString* _assetVersion;
	NSString* _localPath;
	long long _downloadStatus;
	long long _updateAvailabilityStatus;
	long long _releaseNotesDownloadStatus;
	NSString* _releaseNotesRemotePath;
	NSString* _releaseNotesLocalPath;
	long long _releaseNotesAvailabilityStatus;
	NSString* _releaseDate;
	NSNumber* _releaseNotesFileSize;
	NSNumber* _firmwareFileSize;
	NSArray* _deploymentRules;

}

@property (readonly) long long type;                                        //@synthesize type=_type - In the implementation block
@property (copy) NSString * remotePath;                                     //@synthesize remotePath=_remotePath - In the implementation block
@property (copy,readonly) NSString * assetVersion;                          //@synthesize assetVersion=_assetVersion - In the implementation block
@property (copy,readonly) NSString * localPath;                             //@synthesize localPath=_localPath - In the implementation block
@property (readonly) long long downloadStatus;                              //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (readonly) long long updateAvailabilityStatus;                    //@synthesize updateAvailabilityStatus=_updateAvailabilityStatus - In the implementation block
@property (readonly) long long releaseNotesDownloadStatus;                  //@synthesize releaseNotesDownloadStatus=_releaseNotesDownloadStatus - In the implementation block
@property (readonly) NSString * releaseNotesRemotePath;                     //@synthesize releaseNotesRemotePath=_releaseNotesRemotePath - In the implementation block
@property (readonly) NSString * releaseNotesLocalPath;                      //@synthesize releaseNotesLocalPath=_releaseNotesLocalPath - In the implementation block
@property (readonly) long long releaseNotesAvailabilityStatus;              //@synthesize releaseNotesAvailabilityStatus=_releaseNotesAvailabilityStatus - In the implementation block
@property (readonly) NSString * releaseDate;                                //@synthesize releaseDate=_releaseDate - In the implementation block
@property (readonly) NSNumber * releaseNotesFileSize;                       //@synthesize releaseNotesFileSize=_releaseNotesFileSize - In the implementation block
@property (readonly) NSNumber * firmwareFileSize;                           //@synthesize firmwareFileSize=_firmwareFileSize - In the implementation block
@property (readonly) NSArray * deploymentRules;                             //@synthesize deploymentRules=_deploymentRules - In the implementation block
@property (readonly) BOOL deploymentAllowed;                                //@synthesize deploymentAllowed=_deploymentAllowed - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)assetVersion;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(long long)downloadStatus;
-(id)initInMemory;
-(const char*)typeString;
-(void)setAssetVersion:(NSString *)arg1 ;
-(NSString *)localPath;
-(void)setLocalPath:(NSString *)arg1 ;
-(id)initWithLocationType:(long long)arg1 remotePath:(id)arg2 ;
-(void)processUARPDeploymentRules:(id)arg1 ;
-(BOOL)deploymentAllowed;
-(NSString *)remotePath;
-(BOOL)analyticsIsEqual:(id)arg1 ;
-(id)rawDescription;
-(long long)updateAvailabilityStatus;
-(void)setRemoteBuildManifestPlistPath:(id)arg1 ;
-(void)setDownloadStatus:(long long)arg1 ;
-(void)setUpdateAvailabilityStatus:(long long)arg1 ;
-(void)setReleaseNotesLocalPath:(NSString *)arg1 ;
-(void)setReleaseNotesRemotePath:(NSString *)arg1 ;
-(void)setReleaseNotesDownloadStatus:(long long)arg1 ;
-(void)setReleaseNotesAvailabilityStatus:(long long)arg1 ;
-(void)setReleaseNotesFileSize:(NSNumber *)arg1 ;
-(void)setFirmwareFileSize:(NSNumber *)arg1 ;
-(void)setDeploymentRules:(NSArray *)arg1 ;
-(void)setDeploymentAllowed:(BOOL)arg1 ;
-(long long)releaseNotesDownloadStatus;
-(NSString *)releaseNotesRemotePath;
-(NSString *)releaseNotesLocalPath;
-(long long)releaseNotesAvailabilityStatus;
-(id)remoteBuildManifestPlistPath;
-(NSNumber *)releaseNotesFileSize;
-(NSNumber *)firmwareFileSize;
-(NSArray *)deploymentRules;
-(id)_createUARPDeploymentRules:(id)arg1 ;
-(BOOL)isDeploymentAllowed;
-(id)initWithLocationType:(long long)arg1 remotePath:(id)arg2 releaseNotesRemotePath:(id)arg3 ;
-(void)setRemotePath:(NSString *)arg1 ;
@end

