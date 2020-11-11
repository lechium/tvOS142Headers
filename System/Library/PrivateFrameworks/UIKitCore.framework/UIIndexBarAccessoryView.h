/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIIndexBarView.h>
#import <UIKit/UIScrollAccessory.h>

@class UIScrollView;

@interface UIIndexBarAccessoryView : UIIndexBarView <UIScrollAccessory> {

	UIScrollView* _scrollView;
	long long _edge;

}

@property (assign,nonatomic,__weak) id<UIIndexBarAccessoryViewDelegate> delegate; 
@property (assign,nonatomic,__weak) UIScrollView * scrollView;                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) long long edge;                                                   //@synthesize edge=_edge - In the implementation block
@property (nonatomic,readonly) BOOL overlay; 
-(void)update;
-(BOOL)overlay;
-(void)setEntries:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(long long)edge;
-(void)setEdge:(long long)arg1 ;
-(BOOL)_selectEntry:(id)arg1 atIndex:(long long)arg2 ;
-(id)displayEntryNearestToContentOffset:(CGPoint)arg1 ;
@end

