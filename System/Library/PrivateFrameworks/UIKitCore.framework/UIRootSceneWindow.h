/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <UIKit/UIMutableTransformerDelegate.h>

@class FBSDisplayConfiguration, UIView, UIMutableTransformer, NSString;

@interface UIRootSceneWindow : _UIRootWindow <UIMutableTransformerDelegate> {

	FBSDisplayConfiguration* _displayConfiguration;
	UIView* _sceneContainerView;
	UIMutableTransformer* _sceneTransformer;

}

@property (nonatomic,readonly) UIView * _sceneContainerView;                                //@synthesize sceneContainerView=_sceneContainerView - In the implementation block
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UIMutableTransformer * sceneTransformer;                     //@synthesize sceneTransformer=_sceneTransformer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)dealloc;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_usesWindowServerHitTesting;
-(id)initWithScreen:(id)arg1 ;
-(id)_focusResponder;
-(BOOL)_appearsInLoupe;
-(void)_updateTransforms;
-(void)transformsDidChange:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(BOOL)_shouldPrepareScreenForWindow;
-(UIMutableTransformer *)sceneTransformer;
-(UIView *)_sceneContainerView;
@end
