/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet, PXGLayout;

@interface PXGTransition : NSObject {

	BOOL _invalid;
	BOOL _animatingTowardsInitialState;
	BOOL _animatingTowardsFinalState;
	BOOL _isIntercative;
	float _fractionCompleted;
	NSSet* _animations;
	PXGLayout* _layout;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) PXGLayout * layout;                             //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) BOOL invalid;                                   //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,readonly) BOOL animatingTowardsInitialState;              //@synthesize animatingTowardsInitialState=_animatingTowardsInitialState - In the implementation block
@property (nonatomic,readonly) BOOL animatingTowardsFinalState;                //@synthesize animatingTowardsFinalState=_animatingTowardsFinalState - In the implementation block
@property (nonatomic,copy,readonly) id completionBlock;                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) BOOL isIntercative;                               //@synthesize isIntercative=_isIntercative - In the implementation block
@property (nonatomic,readonly) NSSet * animations;                             //@synthesize animations=_animations - In the implementation block
@property (assign,nonatomic) float fractionCompleted;                          //@synthesize fractionCompleted=_fractionCompleted - In the implementation block
-(void)invalidate;
-(id)completionBlock;
-(float)fractionCompleted;
-(void)setFractionCompleted:(float)arg1 ;
-(PXGLayout *)layout;
-(NSSet *)animations;
-(BOOL)invalid;
-(id)initWithAnimations:(id)arg1 layout:(id)arg2 ;
-(void)animateToInitialStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateToFinalStateWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)animatingTowardsInitialState;
-(BOOL)animatingTowardsFinalState;
-(BOOL)isIntercative;
-(void)setIsIntercative:(BOOL)arg1 ;
@end
