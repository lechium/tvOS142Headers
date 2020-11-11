/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput/TIKeyboardInputManagerStub.h>
#import <UIKitCore/_UIIVCInterface.h>

@protocol _UIIVCResponseDelegate, _UIIVCInterface;
@class _UIInputViewControllerState, NSString;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {

	id<_UIIVCResponseDelegate> _responseDelegate;
	id<_UIIVCInterface> _forwardingInterface;
	_UIInputViewControllerState* _cachedState;

}

@property (setter=_setCachedState:,getter=_cachedState,nonatomic,retain) _UIInputViewControllerState * cachedState;              //@synthesize cachedState=_cachedState - In the implementation block
@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;                                                            //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;                                                        //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cachedState;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(id<_UIIVCInterface>)forwardingInterface;
-(void)_setCachedState:(id)arg1 ;
@end

