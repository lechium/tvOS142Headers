/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(id)candidates;
-(id)secureCandidateRenderTraits;
-(void)setInlineText:(id)arg1;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)handleNumberKey:(unsigned long long)arg1;
-(id)inlineText;
-(void)candidatesDidChange;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
-(void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1;

@required
-(BOOL)hasCandidates;
-(id)keyboardBehaviors;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)showCandidate:(id)arg1;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(void)showCandidateAtIndex:(unsigned long long)arg1;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;

@end
