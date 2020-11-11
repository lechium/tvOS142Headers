/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding> {

	NSString* _regionFormat;
	NSString* _osVersion;
	NSString* _deviceType;
	NSString* _applicationBuildVersion;
	NSString* _platformArchitecture;

}

@property (retain) NSString * regionFormat;                         //@synthesize regionFormat=_regionFormat - In the implementation block
@property (retain) NSString * osVersion;                            //@synthesize osVersion=_osVersion - In the implementation block
@property (retain) NSString * deviceType;                           //@synthesize deviceType=_deviceType - In the implementation block
@property (retain) NSString * applicationBuildVersion;              //@synthesize applicationBuildVersion=_applicationBuildVersion - In the implementation block
@property (retain) NSString * platformArchitecture;                 //@synthesize platformArchitecture=_platformArchitecture - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(id)toDictionary;
-(id)JSONRepresentation;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 ;
-(id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5 ;
-(id)DictionaryRepresentation;
-(NSString *)regionFormat;
-(void)setRegionFormat:(NSString *)arg1 ;
-(NSString *)applicationBuildVersion;
-(void)setApplicationBuildVersion:(NSString *)arg1 ;
-(NSString *)platformArchitecture;
-(void)setPlatformArchitecture:(NSString *)arg1 ;
@end

