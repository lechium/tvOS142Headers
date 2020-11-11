/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray;

@interface TVLThunderStandingsLayout : UICollectionViewLayout {

	double _separatorWidth;
	double _lineSpacing;
	double _itemHeight;
	NSArray* _sections;
	double _collectionHeight;

}

@property (nonatomic,retain) NSArray * sections;                   //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) double collectionHeight;              //@synthesize collectionHeight=_collectionHeight - In the implementation block
@property (assign,nonatomic) double separatorWidth;                //@synthesize separatorWidth=_separatorWidth - In the implementation block
@property (assign,nonatomic) double lineSpacing;                   //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) double itemHeight;                    //@synthesize itemHeight=_itemHeight - In the implementation block
-(NSArray *)sections;
-(double)lineSpacing;
-(void)setLineSpacing:(double)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(double)itemHeight;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(double)collectionHeight;
-(void)setCollectionHeight:(double)arg1 ;
-(void)setSeparatorWidth:(double)arg1 ;
-(void)setItemHeight:(double)arg1 ;
-(double)separatorWidth;
@end

