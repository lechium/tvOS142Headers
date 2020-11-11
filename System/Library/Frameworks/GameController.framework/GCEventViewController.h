/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@interface GCEventViewController : UIViewController {

	BOOL _internalControllerUserInteractionEnabled;
	BOOL _controllerUserInteractionEnabledSetExternally;
	BOOL _controllerUserInteractionEnabled;

}

@property (assign,nonatomic) BOOL controllerUserInteractionEnabled;              //@synthesize controllerUserInteractionEnabled=_controllerUserInteractionEnabled - In the implementation block
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)_shouldForwardControllerEvents;
-(void)_handleGameControllerEvent:(id)arg1 ;
-(void)setControllerUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)controllerUserInteractionEnabled;
@end

