/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IPAAdjustmentVersionInfo : NSObject <NSCopying> {

	NSString* _platform;
	NSString* _buildNumber;
	NSString* _appVersion;
	long long _schemaRevision;

}

@property (nonatomic,copy) NSString * platform;                     //@synthesize platform=_platform - In the implementation block
@property (nonatomic,copy) NSString * buildNumber;                  //@synthesize buildNumber=_buildNumber - In the implementation block
@property (nonatomic,copy) NSString * appVersion;                   //@synthesize appVersion=_appVersion - In the implementation block
@property (assign,nonatomic) long long schemaRevision;              //@synthesize schemaRevision=_schemaRevision - In the implementation block
+(id)_systemBuildVersion;
+(id)systemBuildVersion;
+(id)currentVersionInfo;
+(id)frameworkVersion;
+(id)_frameworkVersion;
+(id)_systemVersionPlistPath;
+(id)versionInfoFromArchivalRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)platform;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)appVersion;
-(void)setAppVersion:(NSString *)arg1 ;
-(id)archivalRepresentation;
-(BOOL)isEqualToVersionInfo:(id)arg1 ;
-(long long)schemaRevision;
-(void)setSchemaRevision:(long long)arg1 ;
@end

