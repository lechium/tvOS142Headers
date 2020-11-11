/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {

	UIAlertController* _alertController;

}

@property (nonatomic,retain,readonly) UIAlertController * alertController; 
-(id)init;
-(UIAlertController *)alertController;
-(id)_presentationViewController;
-(id)initWithWindowScene:(id)arg1 ;
-(void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

