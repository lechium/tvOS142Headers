/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBContainerKeyView.h>

@class _UIFloatingContentView;

@interface UIKBFloatingKeyView : UIKBContainerKeyView {

	_UIFloatingContentView* _floatingContentView;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView; 
-(void)prepareForDisplay;
-(void)layoutSubviews;
-(_UIFloatingContentView *)floatingContentView;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
@end

