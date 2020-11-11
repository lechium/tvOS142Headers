/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIViewControllerAccessibility_super.h>

@interface UIViewControllerAccessibility : __UIViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccessibilityLabel:(id)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_accessibilitySpeakThisViewController;
-(id)_accessibilitySpeakThisViews;
-(id)_accessibilitySpeakThisElementsAndStrings;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_accessibilityDidLoadAccessibilityInformation;
-(void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1 ;
-(BOOL)_accessibilityShouldPostScreenChangedOnPresentation;
-(void)_primitiveSetNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(void)_setNavigationControllerContentInsetAdjustment:(UIEdgeInsets)arg1 ;
-(BOOL)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(BOOL)arg2 ;
-(BOOL)_accessibilityPresentsAsPopup;
-(void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2 ;
-(id)_accessibilitySpeakThisView;
-(id)_accessibilityUserTestingViewControllerInfo;
-(id)_overridingPreferredFocusEnvironment;
@end

