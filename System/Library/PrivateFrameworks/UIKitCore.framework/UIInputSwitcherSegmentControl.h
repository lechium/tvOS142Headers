/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSArray, UIStackView;

@interface UIInputSwitcherSegmentControl : UIControl {

	BOOL _usesDarkTheme;
	long long _selectedSegmentIndex;
	NSArray* _segmentTitles;
	NSArray* _segmentImages;
	UIStackView* _stackView;

}

@property (nonatomic,retain) UIStackView * stackView;                            //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                 //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                     //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (nonatomic,copy) NSArray * segmentTitles;                              //@synthesize segmentTitles=_segmentTitles - In the implementation block
@property (nonatomic,retain) NSArray * segmentImages;                            //@synthesize segmentImages=_segmentImages - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(long long)selectedSegmentIndex;
-(void)layoutSubviews;
-(BOOL)usesDarkTheme;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfSegments;
-(BOOL)shouldTrack;
-(UIStackView *)stackView;
-(void)setStackView:(UIStackView *)arg1 ;
-(void)setSegmentImages:(NSArray *)arg1 ;
-(void)setSegmentTitles:(NSArray *)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)_removeAllSegmentViews;
-(void)_populateSegmentViewsWithCount:(unsigned long long)arg1 ;
-(NSArray *)segmentTitles;
-(NSArray *)segmentImages;
@end

