/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIAccessibility/__UIAccessibilityElementSuperCategory_super.h>

@interface UIAccessibilityElementSuperCategory : __UIAccessibilityElementSuperCategory_super
+(BOOL)_isSerializableAccessibilityElement;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityLanguage;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)_accessibilitySetValue:(id)arg1 ;
-(BOOL)_accessibilitySupportsHandwriting;
-(BOOL)_accessibilitySetNativeFocus;
-(id)accessibilityPath;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(id)_accessibilityUserTestingVisibleAncestor;
-(BOOL)_accessibilityViewHierarchyHasNativeFocus;
-(float)_accessibilityActivationDelay;
-(id)_accessibilityAutomaticIdentifier;
-(id)_axGetStoredDefaultFocusGroupDescriptor;
-(void)_axSetStoredDefaultFocusGroupDescriptor:(id)arg1 ;
-(void)accessibilityZoomInAtPoint:(CGPoint)arg1 ;
-(void)accessibilityZoomOutAtPoint:(CGPoint)arg1 ;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityElementDidBecomeFocused;
-(BOOL)_accessibilityIsFKARunningForFocusItem;
-(id)_focusGroupDescriptor;
-(BOOL)_accessibilityUsesFrameInContainerSpace;
-(BOOL)_accessibilityProvidesOwnFrame;
@end

