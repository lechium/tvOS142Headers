/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol OS_dispatch_source, TVLCarouselViewDataSource, TVLCarouselViewDelegate;
@class NSObject, _TVLCarouselCollectionView, NSIndexPath, UIMotionEffectGroup, NSArray, NSString;

@interface TVLCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _allowFocusDirectionEvents;
	NSObject*<OS_dispatch_source> _autoScrollTimer;
	_TVLCarouselCollectionView* _collectionView;
	unsigned long long _currentVirtualIndexForCellDequeue;
	NSIndexPath* _focusedIndexPath;
	BOOL _hasValidLayout;
	UIMotionEffectGroup* _motionEffectGroup;
	unsigned long long _numberOfRealItemsForDataSource;
	id<TVLCarouselViewDataSource> _dataSource;
	id<TVLCarouselViewDelegate> _delegate;
	double _interitemSpacing;
	double _autoScrollInterval;
	CGSize _itemSize;
	CGPoint _focusDirection;

}

@property (assign,nonatomic,__weak) id<TVLCarouselViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TVLCarouselViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                              //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                      //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) double autoScrollInterval;                                    //@synthesize autoScrollInterval=_autoScrollInterval - In the implementation block
@property (nonatomic,copy,readonly) NSArray * visibleCells; 
@property (assign,nonatomic) CGPoint focusDirection;                                       //@synthesize focusDirection=_focusDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<TVLCarouselViewDelegate>)delegate;
-(void)setDelegate:(id<TVLCarouselViewDelegate>)arg1 ;
-(id<TVLCarouselViewDataSource>)dataSource;
-(void)setDataSource:(id<TVLCarouselViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)visibleCells;
-(void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setItemSize:(CGSize)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)_collectionView;
-(CGSize)itemSize;
-(void)didMoveToSuperview;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)_updateCollectionViewLayout;
-(void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexForCell:(id)arg1 ;
-(CGPoint)focusDirection;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(void)_updateAutoScrollTimer;
-(void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateCollectionViewLayoutAnimated:(BOOL)arg1 ;
-(void)_startAutoScrollTimer;
-(void)_stopAutoScrollTimer;
-(void)setAutoScrollInterval:(double)arg1 ;
-(double)autoScrollInterval;
-(void)_focusGestureDidBeginNotification:(id)arg1 ;
-(double)_contentOffsetXForIndex:(long long)arg1 ;
-(id)cellForItemAtIndex:(unsigned long long)arg1 ;
@end

