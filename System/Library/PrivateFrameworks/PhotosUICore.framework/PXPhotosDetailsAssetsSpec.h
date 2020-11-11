/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@class PXWidgetSpec;

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec {

	BOOL _shouldShowTitle;
	BOOL _enableBadges;
	long long _editorialNumberOfColumns;
	double _editorialInterTileSpacing;
	long long _gridContentMode;
	unsigned long long _detailsOptions;
	PXWidgetSpec* __widgetSpec;
	CGSize _gridInterItemSpacing;
	CGSize _gridItemSize;
	UIEdgeInsets _contentGuideInsets;
	UIEdgeInsets _gridContentInsets;

}

@property (nonatomic,readonly) PXWidgetSpec * _widgetSpec;                      //@synthesize _widgetSpec=__widgetSpec - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentGuideInsets;                 //@synthesize contentGuideInsets=_contentGuideInsets - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTitle;                            //@synthesize shouldShowTitle=_shouldShowTitle - In the implementation block
@property (nonatomic,readonly) long long editorialNumberOfColumns;              //@synthesize editorialNumberOfColumns=_editorialNumberOfColumns - In the implementation block
@property (nonatomic,readonly) double editorialInterTileSpacing;                //@synthesize editorialInterTileSpacing=_editorialInterTileSpacing - In the implementation block
@property (nonatomic,readonly) BOOL enableBadges;                               //@synthesize enableBadges=_enableBadges - In the implementation block
@property (nonatomic,readonly) CGSize gridInterItemSpacing;                     //@synthesize gridInterItemSpacing=_gridInterItemSpacing - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets gridContentInsets;                  //@synthesize gridContentInsets=_gridContentInsets - In the implementation block
@property (nonatomic,readonly) CGSize gridItemSize;                             //@synthesize gridItemSize=_gridItemSize - In the implementation block
@property (nonatomic,readonly) long long gridContentMode;                       //@synthesize gridContentMode=_gridContentMode - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsOptions;               //@synthesize detailsOptions=_detailsOptions - In the implementation block
+(BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg1 ;
-(double)defaultCornerRadius;
-(PXWidgetSpec *)_widgetSpec;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3 ;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)detailsOptions;
-(id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2 ;
-(BOOL)enableBadges;
-(void)_computeSpecWithExtendedTraitCollection:(id)arg1 ;
-(void)_computeEditorialWithExtendedTraitCollection:(id)arg1 ;
-(void)_computeGridWithExtendedTraitCollection:(id)arg1 ;
-(UIEdgeInsets)contentGuideInsets;
-(BOOL)shouldShowTitle;
-(long long)editorialNumberOfColumns;
-(double)editorialInterTileSpacing;
-(CGSize)gridInterItemSpacing;
-(UIEdgeInsets)gridContentInsets;
-(CGSize)gridItemSize;
-(long long)gridContentMode;
@end

