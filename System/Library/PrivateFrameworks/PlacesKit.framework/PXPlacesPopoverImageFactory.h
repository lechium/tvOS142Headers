/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PlacesKit/PlacesKit-Structs.h>
@class NSCache, UIColor;

@interface PXPlacesPopoverImageFactory : NSObject {

	NSCache* _cachedBackgroundImages;
	UIColor* _defaultBackgroundColor;

}

@property (nonatomic,retain) NSCache * cachedBackgroundImages;              //@synthesize cachedBackgroundImages=_cachedBackgroundImages - In the implementation block
@property (nonatomic,retain) UIColor * defaultBackgroundColor;              //@synthesize defaultBackgroundColor=_defaultBackgroundColor - In the implementation block
+(id)sharedInstance;
+(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)init;
-(id)imageNamed:(id)arg1 ;
-(UIColor *)defaultBackgroundColor;
-(id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(id)createPopoverImageForGeotaggable:(id)arg1 withImage:(CGImageRef)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4 ;
-(id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1 ;
-(CGSize)backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)backgroundImageSizeForPopoverAnnotation;
-(double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 ;
-(CGSize)thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(BOOL)arg3 ;
-(id)_fetchAndCacheBackgroundImageWithName:(id)arg1 ;
-(NSCache *)cachedBackgroundImages;
-(void)setCachedBackgroundImages:(NSCache *)arg1 ;
-(void)setDefaultBackgroundColor:(UIColor *)arg1 ;
@end

