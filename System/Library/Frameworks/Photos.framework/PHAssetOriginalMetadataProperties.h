/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {

	short _originalExifOrientation;
	NSString* _originalAssetsUUID;
	long long _originalHeight;
	long long _originalWidth;
	NSString* _originalFilename;
	unsigned long long _originalFilesize;
	NSTimeZone* _timeZone;
	long long _timeZoneOffset;

}

@property (nonatomic,readonly) NSString * originalAssetsUUID;                    //@synthesize originalAssetsUUID=_originalAssetsUUID - In the implementation block
@property (nonatomic,readonly) long long originalHeight;                         //@synthesize originalHeight=_originalHeight - In the implementation block
@property (nonatomic,readonly) long long originalWidth;                          //@synthesize originalWidth=_originalWidth - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) short originalExifOrientation;                    //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFilesize;              //@synthesize originalFilesize=_originalFilesize - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) long long timeZoneOffset;                         //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSTimeZone *)timeZone;
-(long long)timeZoneOffset;
-(NSString *)originalFilename;
-(long long)originalWidth;
-(long long)originalHeight;
-(unsigned long long)originalFilesize;
-(NSString *)originalAssetsUUID;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(short)originalExifOrientation;
@end

