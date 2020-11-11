/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <TVKit/TVModalPresenterFocusing.h>

@class UIViewController, NSMapTable, NSArray, NSString, UIView;

@interface _TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, TVModalPresenterFocusing> {

	UIViewController* _rootViewController;
	NSMapTable* _pushCompletionBlocks;
	NSMapTable* _popCompletionBlocks;
	NSArray* _previousViewControllers;

}

@property (nonatomic,retain) NSArray * previousViewControllers;                                   //@synthesize previousViewControllers=_previousViewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
-(void)reset;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissForLastViewController:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreviousViewControllers:(NSArray *)arg1 ;
-(NSArray *)previousViewControllers;
-(void)_dismissForLastViewController;
@end

