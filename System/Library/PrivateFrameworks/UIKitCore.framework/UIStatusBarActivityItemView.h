/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

@interface UIStatusBarActivityItemView : UIStatusBarItemView {

	UIActivityIndicatorView* _activityIndicator;
	UIActivityIndicatorView* _accessibilityHUDIndicator;
	BOOL _slowActivity;
	BOOL _syncActivity;

}
-(void)setVisible:(BOOL)arg1 ;
-(long long)_activityIndicatorStyle;
-(void)_startAnimating;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(void)_stopAnimating;
-(id)accessibilityHUDRepresentation;
-(double)shadowPadding;
-(double)updateContentsAndWidth;
@end

