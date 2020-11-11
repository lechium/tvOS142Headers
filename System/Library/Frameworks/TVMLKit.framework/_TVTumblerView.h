/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _TVTumblerViewDataSource, _TVTumblerViewDelegate;
@class UIView, UIImageView, NSMutableDictionary, UITapGestureRecognizer, UISwipeGestureRecognizer;

@interface _TVTumblerView : UIView {

	struct {
		unsigned respondsToDidFocusItemAtIndex : 1;
	}  _delegateFlags;
	BOOL _canMove;
	id<_TVTumblerViewDataSource> _dataSource;
	id<_TVTumblerViewDelegate> _delegate;
	UIView* _gestureTargetView;
	UIView* _headerView;
	long long _focusedItemIndex;
	double _interitemSpacing;
	Class _itemViewClass;
	UIView* _containerView;
	UIView* _referredFocusedItemView;
	UIImageView* _arrowLeft;
	UIImageView* _arrowRight;
	UIView* _spareItemView;
	NSMutableDictionary* _itemViewsByIndex;
	long long _unfocusedItemIndex;
	UITapGestureRecognizer* _leftTapGesture;
	UITapGestureRecognizer* _rightTapGesture;
	UISwipeGestureRecognizer* _leftSwipeGesture;
	UISwipeGestureRecognizer* _rightSwipeGesture;

}

@property (nonatomic,retain) Class itemViewClass;                                                //@synthesize itemViewClass=_itemViewClass - In the implementation block
@property (nonatomic,retain,readonly) UIView * containerView;                                    //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * referredFocusedItemView;                                   //@synthesize referredFocusedItemView=_referredFocusedItemView - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * arrowLeft;                                   //@synthesize arrowLeft=_arrowLeft - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * arrowRight;                                  //@synthesize arrowRight=_arrowRight - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * arrowLeading; 
@property (nonatomic,retain,readonly) UIImageView * arrowTrailing; 
@property (nonatomic,retain) UIView * spareItemView;                                             //@synthesize spareItemView=_spareItemView - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * itemViewsByIndex;                    //@synthesize itemViewsByIndex=_itemViewsByIndex - In the implementation block
@property (assign,nonatomic) long long unfocusedItemIndex;                                       //@synthesize unfocusedItemIndex=_unfocusedItemIndex - In the implementation block
@property (nonatomic,readonly) BOOL canMove;                                                     //@synthesize canMove=_canMove - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * leftTapGesture;                   //@synthesize leftTapGesture=_leftTapGesture - In the implementation block
@property (nonatomic,retain,readonly) UITapGestureRecognizer * rightTapGesture;                  //@synthesize rightTapGesture=_rightTapGesture - In the implementation block
@property (nonatomic,retain,readonly) UISwipeGestureRecognizer * leftSwipeGesture;               //@synthesize leftSwipeGesture=_leftSwipeGesture - In the implementation block
@property (nonatomic,retain,readonly) UISwipeGestureRecognizer * rightSwipeGesture;              //@synthesize rightSwipeGesture=_rightSwipeGesture - In the implementation block
@property (assign,nonatomic,__weak) id<_TVTumblerViewDataSource> dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<_TVTumblerViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * gestureTargetView;                                  //@synthesize gestureTargetView=_gestureTargetView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) long long focusedItemIndex;                                         //@synthesize focusedItemIndex=_focusedItemIndex - In the implementation block
@property (nonatomic,retain,readonly) UIView * focusedItemView; 
@property (assign,nonatomic) double interitemSpacing;                                            //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
-(void)dealloc;
-(id<_TVTumblerViewDelegate>)delegate;
-(void)setDelegate:(id<_TVTumblerViewDelegate>)arg1 ;
-(id<_TVTumblerViewDataSource>)dataSource;
-(void)setDataSource:(id<_TVTumblerViewDataSource>)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)headerView;
-(UIView *)containerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(double)interitemSpacing;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setFocusedItemIndex:(long long)arg1 ;
-(void)registerItemViewClass:(Class)arg1 ;
-(UIView *)focusedItemView;
-(id)dequeueReusableItemView;
-(long long)focusedItemIndex;
-(void)_leftAction:(id)arg1 ;
-(void)_rightAction:(id)arg1 ;
-(UISwipeGestureRecognizer *)leftSwipeGesture;
-(UISwipeGestureRecognizer *)rightSwipeGesture;
-(void)_enableMove;
-(UITapGestureRecognizer *)leftTapGesture;
-(UITapGestureRecognizer *)rightTapGesture;
-(void)setUnfocusedItemIndex:(long long)arg1 ;
-(NSMutableDictionary *)itemViewsByIndex;
-(UIView *)spareItemView;
-(Class)itemViewClass;
-(void)setSpareItemView:(UIView *)arg1 ;
-(void)_markItemViewForReuse:(id)arg1 ;
-(void)setReferredFocusedItemView:(UIView *)arg1 ;
-(UIImageView *)arrowLeft;
-(UIImageView *)arrowRight;
-(id)_itemViewAtIndex:(long long)arg1 ;
-(long long)unfocusedItemIndex;
-(UIImageView *)arrowLeading;
-(UIImageView *)arrowTrailing;
-(void)_markItemViewForInUse:(id)arg1 forIndex:(long long)arg2 ;
-(UIView *)gestureTargetView;
-(void)setGestureTargetView:(UIView *)arg1 ;
-(void)_scheduleMoveToIndex:(long long)arg1 ;
-(BOOL)canMove;
-(void)_disableMove;
-(void)setItemViewClass:(Class)arg1 ;
-(UIView *)referredFocusedItemView;
@end

