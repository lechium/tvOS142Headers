/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemMenuUI.framework/TVSystemMenuUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemMenuUI/TVSystemMenuUI-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class UICollectionViewLayoutAttributes, TVSMBaseView;

@interface TVSMBaseLockupView : TVLockupView {

	UICollectionViewLayoutAttributes* _layoutAttributes;
	TVSMBaseView* _customContentView;

}

@property (nonatomic,readonly) TVSMBaseView * customContentView;                               //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,readonly) TVSMBaseView * baseView; 
@property (nonatomic,retain) UICollectionViewLayoutAttributes * layoutAttributes;              //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 contentViewClass:(Class)arg2 ;
-(TVSMBaseView *)baseView;
-(void)setLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(UICollectionViewLayoutAttributes *)layoutAttributes;
-(TVSMBaseView *)customContentView;
@end

