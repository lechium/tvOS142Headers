/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class NSString, NSArray, UIImage, UIColor;

@interface PXCMMSuggestionViewModel : PXObservable {

	BOOL _containsUnverifiedPersons;
	BOOL _highlighted;
	BOOL _selected;
	NSString* _posterTitle;
	NSString* _posterSubtitle;
	id<PXDisplayAsset> _posterAsset;
	id<PXUIImageProvider> _posterMediaProvider;
	NSArray* _localizedNames;
	NSString* _subtitle;
	UIImage* _combinedFaceTileImage;
	UIColor* _opaqueAncestorBackgroundColor;

}

@property (nonatomic,copy,readonly) NSString * posterTitle;                            //@synthesize posterTitle=_posterTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * posterSubtitle;                         //@synthesize posterSubtitle=_posterSubtitle - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> posterAsset;                         //@synthesize posterAsset=_posterAsset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> posterMediaProvider;              //@synthesize posterMediaProvider=_posterMediaProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * localizedNames;                          //@synthesize localizedNames=_localizedNames - In the implementation block
@property (nonatomic,readonly) BOOL containsUnverifiedPersons;                         //@synthesize containsUnverifiedPersons=_containsUnverifiedPersons - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) UIImage * combinedFaceTileImage;                        //@synthesize combinedFaceTileImage=_combinedFaceTileImage - In the implementation block
@property (nonatomic,readonly) UIColor * opaqueAncestorBackgroundColor;                //@synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                  //@synthesize highlighted=_highlighted - In the implementation block
@property (getter=isSelected,nonatomic,readonly) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
+(double)faceTileImageDiameter;
-(id)init;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isSelected;
-(NSArray *)localizedNames;
-(void)setLocalizedNames:(NSArray *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)containsUnverifiedPersons;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setContainsUnverifiedPersons:(BOOL)arg1 ;
-(id<PXDisplayAsset>)posterAsset;
-(id<PXUIImageProvider>)posterMediaProvider;
-(void)setPosterTitle:(NSString *)arg1 ;
-(void)setPosterSubtitle:(NSString *)arg1 ;
-(void)setPosterAsset:(id<PXDisplayAsset>)arg1 ;
-(void)setPosterMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setOpaqueAncestorBackgroundColor:(UIColor *)arg1 ;
-(NSString *)posterTitle;
-(NSString *)posterSubtitle;
-(UIColor *)opaqueAncestorBackgroundColor;
-(void)setCombinedFaceTileImage:(UIImage *)arg1 ;
-(UIImage *)combinedFaceTileImage;
@end

