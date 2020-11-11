/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionView.h>

@class UIKeyboardEmojiGraphicsTraits, UIResponder;

@interface UIKeyboardEmojiCollectionView : UICollectionView {

	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	UIResponder* _hitTestResponder;

}

@property (assign,nonatomic) UIResponder * hitTestResponder;                                  //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (retain,readonly) UIKeyboardEmojiGraphicsTraits * emojiGraphicsTraits;              //@synthesize emojiGraphicsTraits=_emojiGraphicsTraits - In the implementation block
-(void)dealloc;
-(id)backgroundColor;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(double)_currentScreenScale;
-(void)setHitTestResponder:(UIResponder *)arg1 ;
-(UIResponder *)hitTestResponder;
-(UIKeyboardEmojiGraphicsTraits *)emojiGraphicsTraits;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 emojiGraphicsTraits:(id)arg3 ;
-(id)closestCellForPoint:(CGPoint)arg1 ;
@end

