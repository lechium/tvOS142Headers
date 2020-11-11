/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFocusSystemDelegate.h>
#import <UIKitCore/_UIFocusMovementPerformerDelegate.h>

@class UIWindowScene, _UIFocusScrollManager, NSString;

@interface _UIScreenFocusSystemManager : NSObject <_UIFocusSystemDelegate, _UIFocusMovementPerformerDelegate> {

	BOOL _disableFocusDeferral;
	BOOL _handlesFocusMovementAction;
	BOOL _allowsForwardingFocusMovementActions;
	UIWindowScene* _windowScene;
	_UIFocusScrollManager* _scrollManager;

}

@property (assign,setter=_uiktest_setAllowsForwardingFocusMovementActions:,getter=_uiktest_allowsForwardingFocusMovementActions,nonatomic) BOOL allowsForwardingFocusMovementActions;              //@synthesize allowsForwardingFocusMovementActions=_allowsForwardingFocusMovementActions - In the implementation block
@property (nonatomic,__weak,readonly) UIWindowScene * windowScene;                                                                                                                                 //@synthesize windowScene=_windowScene - In the implementation block
@property (nonatomic,readonly) _UIFocusScrollManager * scrollManager;                                                                                                                              //@synthesize scrollManager=_scrollManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindowScene *)windowScene;
-(_UIFocusScrollManager *)scrollManager;
-(id)_preferredFocusEnvironmentsForFocusSystem:(id)arg1 ;
-(BOOL)_focusSystem:(id)arg1 prefersDeferralForFocusUpdateInContext:(id)arg2 ;
-(BOOL)_focusSystem:(id)arg1 shouldRestoreFocusInContext:(id)arg2 ;
-(void)_focusSystem:(id)arg1 didFinishUpdatingFocusInContext:(id)arg2 ;
-(id)_focusMapContainerForFocusSystem:(id)arg1 ;
-(id)_focusItemContainerForFocusSystem:(id)arg1 ;
-(BOOL)_shouldWaitForFocusMovementActionToEnableFocusSystem:(id)arg1 ;
-(BOOL)_focusSystem:(id)arg1 performFocusMovementWithInfo:(id)arg2 ;
-(BOOL)_handleFailedFocusMovementRequest:(id)arg1 withPerformer:(id)arg2 ;
-(BOOL)_shouldForwardFocusMovementRequest:(id)arg1 ;
-(BOOL)_uiktest_allowsForwardingFocusMovementActions;
-(id)initWithScene:(id)arg1 scrollManager:(id)arg2 ;
-(void)_uiktest_setAllowsForwardingFocusMovementActions:(BOOL)arg1 ;
@end

