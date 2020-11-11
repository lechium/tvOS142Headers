/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>

@class NSDate, NSString, NSNumber;

@interface _PXMomentShareMockDisplayAsset : NSObject <PXDisplayAsset> {

	BOOL favorite;
	BOOL representsBurst;
	BOOL isInCloud;
	BOOL isEligibleForAutoPlayback;
	unsigned long long mediaSubtypes;
	NSDate* creationDate;
	unsigned long long pixelWidth;
	unsigned long long pixelHeight;
	NSDate* localCreationDate;
	long long _mediaType;

}

@property (assign,nonatomic) long long mediaType;                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)creationDate;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(BOOL)isFavorite;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(NSDate *)localCreationDate;
-(unsigned long long)mediaSubtypes;
-(BOOL)isInCloud;
-(unsigned long long)thumbnailIndex;
-(BOOL)representsBurst;
-(long long)isContentEqualTo:(id)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
@end

