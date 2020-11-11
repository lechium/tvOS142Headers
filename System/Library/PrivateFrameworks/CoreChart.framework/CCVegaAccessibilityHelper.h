/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreChart/CoreChart-Structs.h>
@class NSMutableArray;

@interface CCVegaAccessibilityHelper : NSObject {

	stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > >* _stateStack;
	SCD_Struct_CC17 _currentState;
	NSMutableArray* _elementCache;
	NSMutableArray* _rootAccessibilityElements;
	NSMutableArray* _children;
	NSMutableArray* _groupStack;
	id container;

}

@property (__weak) id container; 
-(id)container;
-(void)setContainer:(id)arg1 ;
-(void)restoreState;
-(void)saveState;
-(void)addElementWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(id)newAccessibilityElementWithFrame:(CGRect)arg1 ;
-(id)initWithElements:(id)arg1 ;
-(void)translateX:(double)arg1 Y:(double)arg2 ;
-(void)markAriaHidden;
-(void)enterGroupWithLabel:(id)arg1 roleDescription:(id)arg2 frame:(CGRect)arg3 ;
-(void)exitGroup;
-(id)getElements;
@end

