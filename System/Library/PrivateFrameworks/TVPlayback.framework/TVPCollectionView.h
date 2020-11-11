/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UITapGestureRecognizer, UILongPressGestureRecognizer, NSIndexPath, NSString;

@interface TVPCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UITapGestureRecognizer* _playButtonRecognizer;
	UILongPressGestureRecognizer* _longPressRecognizer;
	struct {
		unsigned _respondsToDidPlayItem : 1;
		unsigned _respondsToDidLongPressItem : 1;
		unsigned _respondsToCanBecomeFocused : 1;
	}  _delegateFlags;
	NSIndexPath* _indexPathForLastFocusedItem;

}

@property (assign,nonatomic,__weak) id<TVPCollectionViewDelegate> delegate; 
@property (nonatomic,copy,readonly) NSIndexPath * indexPathForLastFocusedItem;              //@synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TVPCollectionViewDelegate>)arg1 ;
-(void)reloadData;
-(BOOL)_shouldReverseLayoutDirection;
-(void)_notifyDidScroll;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)_playButtonAction:(id)arg1 ;
-(void)_longPressAction:(id)arg1 ;
-(NSIndexPath *)indexPathForLastFocusedItem;
-(void)_performBlockWithFocusedCellIndexPath:(/*^block*/id)arg1 ;
-(id)tvp_layoutAttributesForItemAtIndexPath:(id)arg1 ;
@end

