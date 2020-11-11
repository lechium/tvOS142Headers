/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionReusableView, UICollectionViewLayoutAttributes, NSMutableArray;

@interface UICollectionViewAnimation : NSObject {

	UICollectionReusableView* _view;
	UICollectionViewLayoutAttributes* _finalLayoutAttributes;
	double _startFraction;
	double _endFraction;
	long long _viewType;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _startupHandlers;
	/*^block*/id _animationBlock;
	struct {
		unsigned animateFromCurrentPosition : 1;
		unsigned deleteAfterAnimation : 1;
		unsigned rasterizeAfterAnimation : 1;
		unsigned resetRasterizationAfterAnimation : 1;
		unsigned updateZIndexAfterAnimation : 1;
	}  _collectionViewAnimationFlags;
	BOOL _updateZIndexAfterAnimation;

}

@property (nonatomic,readonly) UICollectionReusableView * view;                                       //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) long long viewType;                                                    //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,readonly) UICollectionViewLayoutAttributes * finalLayoutAttributes;              //@synthesize finalLayoutAttributes=_finalLayoutAttributes - In the implementation block
@property (nonatomic,readonly) double startFraction;                                                  //@synthesize startFraction=_startFraction - In the implementation block
@property (nonatomic,readonly) double endFraction;                                                    //@synthesize endFraction=_endFraction - In the implementation block
@property (nonatomic,readonly) BOOL animateFromCurrentPosition; 
@property (nonatomic,readonly) BOOL deleteAfterAnimation; 
@property (nonatomic,readonly) BOOL updateZIndexAfterAnimation;                                       //@synthesize updateZIndexAfterAnimation=_updateZIndexAfterAnimation - In the implementation block
@property (assign,nonatomic) BOOL rasterizeAfterAnimation; 
@property (assign,nonatomic) BOOL resetRasterizationAfterAnimation; 
-(id)description;
-(void)start;
-(UICollectionReusableView *)view;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(long long)viewType;
-(id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(BOOL)arg6 deleteAfterAnimation:(BOOL)arg7 customAnimations:(/*^block*/id)arg8 ;
-(void)addStartupHandler:(/*^block*/id)arg1 ;
-(BOOL)deleteAfterAnimation;
-(UICollectionViewLayoutAttributes *)finalLayoutAttributes;
-(void)startWithAnimator:(id)arg1 ;
-(BOOL)resetRasterizationAfterAnimation;
-(BOOL)rasterizeAfterAnimation;
-(BOOL)updateZIndexAfterAnimation;
-(BOOL)animateFromCurrentPosition;
-(void)setRasterizeAfterAnimation:(BOOL)arg1 ;
-(void)setResetRasterizationAfterAnimation:(BOOL)arg1 ;
-(double)startFraction;
-(double)endFraction;
@end

