/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSArray;

@interface AXCyclingView : UIView {

	BOOL _isMakingNextViewVisible;
	BOOL _shouldSkipMakingNextViewVisible;
	unsigned long long _cycleIndex;

}

@property (assign,nonatomic) unsigned long long cycleIndex;                     //@synthesize cycleIndex=_cycleIndex - In the implementation block
@property (assign,nonatomic) BOOL isMakingNextViewVisible;                      //@synthesize isMakingNextViewVisible=_isMakingNextViewVisible - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipMakingNextViewVisible;              //@synthesize shouldSkipMakingNextViewVisible=_shouldSkipMakingNextViewVisible - In the implementation block
@property (nonatomic,readonly) NSArray * viewsInCycle; 
-(void)didMoveToWindow;
-(void)endCycling;
-(void)beginCycling;
-(NSArray *)viewsInCycle;
-(void)_updateForCycleIndex;
-(void)_makeNextViewVisible;
-(void)setCycleIndex:(unsigned long long)arg1 ;
-(BOOL)isMakingNextViewVisible;
-(void)setShouldSkipMakingNextViewVisible:(BOOL)arg1 ;
-(unsigned long long)cycleIndex;
-(void)setIsMakingNextViewVisible:(BOOL)arg1 ;
-(BOOL)shouldSkipMakingNextViewVisible;
@end

