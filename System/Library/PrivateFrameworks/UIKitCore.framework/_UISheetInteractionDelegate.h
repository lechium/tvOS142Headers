/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UISheetInteractionDelegate <NSObject>
@optional
-(void)sheetInteraction:(id)arg1 didChangeOffset:(CGPoint)arg2;
-(BOOL)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg2;
-(BOOL)sheetInteraction:(id)arg1 shouldAllowVerticalRubberBandingWithEvent:(id)arg2;
-(CGPoint*)offsetForInterruptedAnimationInSheetInteraction:(id)arg1;

@end
