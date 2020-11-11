/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarPersonNameItemView : UIStatusBarItemView {

	NSString* _personNameString;
	double _letterSpacing;
	double _maxWidth;

}
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(double)standardPadding;
-(long long)legibilityStyle;
-(id)contentsImage;
-(double)extraRightPadding;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)_updateWithPersonName:(id)arg1 maxWidth:(double)arg2 ;
@end
