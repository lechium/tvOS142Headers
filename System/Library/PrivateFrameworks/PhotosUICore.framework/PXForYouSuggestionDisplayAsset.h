/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPhotoKitAdjustedDisplayAsset.h>

@protocol PXDisplaySuggestion, PXDisplayAsset;
@class NSString, PHAsset, NSDate, NSNumber;

@interface PXForYouSuggestionDisplayAsset : NSObject <PXPhotoKitAdjustedDisplayAsset> {

	BOOL _shouldInvert;
	PHAsset* _photoKitAsset;
	NSString* _adjustedContentIdentifier;
	id<PXDisplaySuggestion> _suggestion;
	id<PXDisplayAsset> _keyAsset;

}

@property (nonatomic,readonly) BOOL shouldInvert;                                    //@synthesize shouldInvert=_shouldInvert - In the implementation block
@property (nonatomic,readonly) id<PXDisplaySuggestion> suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> keyAsset;                          //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) BOOL isAnimatedImage; 
@property (nonatomic,readonly) BOOL canPlayPhotoIris; 
@property (nonatomic,readonly) BOOL canPlayLoopingVideo; 
@property (nonatomic,readonly) BOOL isApplied; 
@property (nonatomic,readonly) BOOL needsDeferredProcessing; 
@property (nonatomic,readonly) BOOL wantsAdjustments; 
@property (nonatomic,readonly) NSString * adjustedContentIdentifier;                 //@synthesize adjustedContentIdentifier=_adjustedContentIdentifier - In the implementation block
@property (nonatomic,readonly) PHAsset * photoKitAsset;                              //@synthesize photoKitAsset=_photoKitAsset - In the implementation block
@property (nonatomic,readonly) long long mediaType; 
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)creationDate;
-(double)duration;
-(NSString *)uuid;
-(double)aspectRatio;
-(long long)mediaType;
-(BOOL)isFavorite;
-(unsigned long long)pixelHeight;
-(unsigned long long)pixelWidth;
-(NSDate *)localCreationDate;
-(long long)playbackStyle;
-(unsigned long long)mediaSubtypes;
-(long long)playbackVariation;
-(id<PXDisplayAsset>)keyAsset;
-(BOOL)isInCloud;
-(unsigned long long)thumbnailIndex;
-(BOOL)canPlayPhotoIris;
-(id<PXDisplaySuggestion>)suggestion;
-(BOOL)needsDeferredProcessing;
-(BOOL)representsBurst;
-(BOOL)canPlayLoopingVideo;
-(BOOL)isAnimatedImage;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 ;
-(CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3 ;
-(long long)isContentEqualTo:(id)arg1 ;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(id)applyAdjustmentsToCompositionController:(id)arg1 renderer:(id)arg2 ;
-(BOOL)wantsAdjustments;
-(NSString *)adjustedContentIdentifier;
-(PHAsset *)photoKitAsset;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 ;
-(id)initWithSuggestion:(id)arg1 keyAsset:(id)arg2 shouldRevert:(BOOL)arg3 ;
-(id)inverseSuggestionAsset;
-(BOOL)isApplied;
-(BOOL)isEqualToSuggestionDisplayAsset:(id)arg1 ;
-(id)_computedPortraitEffectSettingsForCompositionController:(id)arg1 ;
-(BOOL)shouldInvert;
@end

