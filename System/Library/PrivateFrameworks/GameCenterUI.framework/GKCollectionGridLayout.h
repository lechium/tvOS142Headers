/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionFocusingLayout.h>

@class NSIndexSet, NSDictionary;

@interface GKCollectionGridLayout : GKCollectionFocusingLayout {

	BOOL _centersItemsInExcessSpace;
	BOOL _shouldPerformInitialScrollToContentInsetTop;
	BOOL _didPerformInitialContentInsetScroll;
	long long _autoWidthColumns;
	double _extraSectionHeaderToCellSpace;
	NSIndexSet* _sectionsThatShowHeaderWhenEmpty;
	NSIndexSet* _sectionsThatShowFootersWhenEmpty;
	NSDictionary* _itemAttributes;
	NSDictionary* _headerAttributes;
	NSDictionary* _footerAttributes;

}

@property (nonatomic,retain) NSDictionary * itemAttributes;                                 //@synthesize itemAttributes=_itemAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * headerAttributes;                               //@synthesize headerAttributes=_headerAttributes - In the implementation block
@property (nonatomic,retain) NSDictionary * footerAttributes;                               //@synthesize footerAttributes=_footerAttributes - In the implementation block
@property (assign,nonatomic) BOOL didPerformInitialContentInsetScroll;                      //@synthesize didPerformInitialContentInsetScroll=_didPerformInitialContentInsetScroll - In the implementation block
@property (assign,nonatomic) BOOL centersItemsInExcessSpace;                                //@synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace - In the implementation block
@property (assign,nonatomic) long long autoWidthColumns;                                    //@synthesize autoWidthColumns=_autoWidthColumns - In the implementation block
@property (assign,nonatomic) double extraSectionHeaderToCellSpace;                          //@synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace - In the implementation block
@property (nonatomic,retain) NSIndexSet * sectionsThatShowHeaderWhenEmpty;                  //@synthesize sectionsThatShowHeaderWhenEmpty=_sectionsThatShowHeaderWhenEmpty - In the implementation block
@property (nonatomic,retain) NSIndexSet * sectionsThatShowFootersWhenEmpty;                 //@synthesize sectionsThatShowFootersWhenEmpty=_sectionsThatShowFootersWhenEmpty - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformInitialScrollToContentInsetTop;              //@synthesize shouldPerformInitialScrollToContentInsetTop=_shouldPerformInitialScrollToContentInsetTop - In the implementation block
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setAutoWidthColumns:(long long)arg1 ;
-(void)setShouldPerformInitialScrollToContentInsetTop:(BOOL)arg1 ;
-(void)setDidPerformInitialContentInsetScroll:(BOOL)arg1 ;
-(BOOL)shouldPerformInitialScrollToContentInsetTop;
-(BOOL)didPerformInitialContentInsetScroll;
-(NSDictionary *)footerAttributes;
-(void)setHeaderAttributes:(NSDictionary *)arg1 ;
-(void)setFooterAttributes:(NSDictionary *)arg1 ;
-(void)setItemAttributes:(NSDictionary *)arg1 ;
-(NSIndexSet *)sectionsThatShowHeaderWhenEmpty;
-(NSIndexSet *)sectionsThatShowFootersWhenEmpty;
-(long long)lastValidSection;
-(void)applyDefaults;
-(BOOL)centersItemsInExcessSpace;
-(void)setCentersItemsInExcessSpace:(BOOL)arg1 ;
-(long long)autoWidthColumns;
-(double)extraSectionHeaderToCellSpace;
-(void)setExtraSectionHeaderToCellSpace:(double)arg1 ;
-(void)setSectionsThatShowHeaderWhenEmpty:(NSIndexSet *)arg1 ;
-(void)setSectionsThatShowFootersWhenEmpty:(NSIndexSet *)arg1 ;
-(NSDictionary *)itemAttributes;
-(NSDictionary *)headerAttributes;
@end

