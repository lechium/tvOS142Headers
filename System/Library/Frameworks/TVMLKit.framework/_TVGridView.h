/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionView.h>

@class _TVCollectionViewFlowLayout;

@interface _TVGridView : _TVCollectionView {

	BOOL _delegateRespondsToIndexPathForPreferredFocusedView;
	_TVCollectionViewFlowLayout* _gridFlowLayout;

}

@property (nonatomic,retain) _TVCollectionViewFlowLayout * gridFlowLayout;              //@synthesize gridFlowLayout=_gridFlowLayout - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)tv_sizeThatFits:(CGSize)arg1 withContentInset:(UIEdgeInsets)arg2 ;
-(_TVCollectionViewFlowLayout *)gridFlowLayout;
-(void)setGridFlowLayout:(_TVCollectionViewFlowLayout *)arg1 ;
@end
