/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <Preferences/DevicePINPane.h>

@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {

	UIScrollView* _containerView;
	CDPPaneHeaderView* _headerView;
	double _keyboardOffset;

}

@property (nonatomic,readonly) CGRect availableHeaderRect; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)headerView;
-(void)_layoutSubviews;
-(double)desiredMinPinHeight;
-(void)startListeningForKeyboardEvents;
-(void)_keyboardLayoutChanged;
-(CGRect)availableHeaderRect;
-(double)keyboardHeightOffset;
-(void)_layoutContainerView;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)didFinishResizingHeaderView;
-(BOOL)isVerySmallScreen;
-(void)didFinishResizingPinView;
-(BOOL)isSmallScreen;
@end
