/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIStatusBarItemView.h>

@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {

	BOOL _connected;
	BOOL _shouldAnimateConnection;

}
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(id)accessibilityHUDRepresentation;
-(id)contentsImage;
-(double)alphaForConnected:(BOOL)arg1 ;
-(void)performPendedActions;
@end

