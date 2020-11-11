/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIWindowAccessibility_super.h>
#import <libobjc.A.dylib/AXRemoteElementChildrenDelegate.h>

@class NSString;

@interface UIWindowAccessibility : __UIWindowAccessibility_super <AXRemoteElementChildrenDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityContainer;
-(unsigned long long)accessibilityTraits;
-(unsigned)_accessibilityContextId;
-(id)accessibilityRemoteSubstituteChildren:(id)arg1 ;
-(BOOL)_accessibilityIsGroupedParent;
-(unsigned long long)_accessibilityAutomationType;
-(id)_iosAccessibilityAttributeValue:(long long)arg1 ;
-(BOOL)accessibilityElementsHidden;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityIsWindow;
-(id)_accessibilityUserTestingParent;
-(id)_accessibilityWindowSections;
-(int)_accessibilityRemotePid;
-(long long)_accessibilityInterfaceOrientationForScreenCoordinates;
-(BOOL)_accessibilityShouldIncludeKeyboardInRemoteSubstituteChildren;
-(void)_accessibilityLoadAccessibilityInformation;
-(id)initWithWindowScene:(id)arg1 ;
-(void)_setFirstResponder:(id)arg1 ;
-(CGPoint)warpPoint:(CGPoint)arg1 ;
-(void)_axListenForRemoteElement;
-(BOOL)_accessibilityShouldUseRemoteElement;
-(id)_accessibilityAllRemoteElements;
-(id)_accessibilityRemoteElement;
-(void)_axUpdateForRemoteElement:(id)arg1 ;
-(void)_accessibilitySetAllRemoteElements:(id)arg1 ;
-(void)_axCheckForExistingRemoteElements;
-(void)_axRemoteElementRegistered:(id)arg1 ;
-(void)_accessibilityRegisterRemoteElement:(BOOL)arg1 ;
-(id)_accessibilityFirstResponderCoalesceTimer;
-(void)_accessibilitySetFirstResponderCoalesceTimer:(id)arg1 ;
-(id)_targetWindowForPathIndex:(long long)arg1 atPoint:(CGPoint)arg2 forEvent:(id)arg3 windowServerHitTestWindow:(id)arg4 ;
-(void)_orderFrontWithoutMakingKey;
-(void)_setBoundContext:(id)arg1 ;
-(id)_accessibilityIOSMacRotors;
-(void)_accessibilitySetIOSMacRotors:(id)arg1 ;
@end

