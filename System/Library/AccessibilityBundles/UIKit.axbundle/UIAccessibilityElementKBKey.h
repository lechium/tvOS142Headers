/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIKBTree, NSArray;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	BOOL _changesOnShiftDown;
	NSArray* _cachedVariantKeys;

}

@property (nonatomic,retain) NSArray * cachedVariantKeys;              //@synthesize cachedVariantKeys=_cachedVariantKeys - In the implementation block
@property (nonatomic,retain) UIKBTree * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL changesOnShiftDown;                  //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)variantKeysForKey:(id)arg1 ;
-(id)description;
-(UIKBTree *)key;
-(void)setKey:(UIKBTree *)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(CGRect)accessibilityFrame;
-(id)accessibilityIdentifier;
-(BOOL)_accessibilitySetNativeFocus;
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)accessibilityRespondsToUserInteraction;
-(unsigned long long)_accessibilityScanningBehaviorTraits;
-(BOOL)_accessibilityIsGuideElement;
-(BOOL)_accessibilitySupportsActivateAction;
-(BOOL)accessibilityActivate;
-(BOOL)_accessibilitySupportsSecondaryActivateAction;
-(id)accessibilityCustomActions;
-(id)_accessibilitySupportGesturesAttributes;
-(BOOL)_accessibilityIsInternationalKeyboardKey;
-(BOOL)_accessibilityKeyboardSupportsGestureMode;
-(id)_accessibilityKeyboardKeyEnteredString;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityHasVariantKeys;
-(BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
-(BOOL)_accessibilitySecondaryActivate;
-(BOOL)_accessibilityDismissAlternativeKeyPicker;
-(id)_accessibilityLabel;
-(BOOL)_accessibilityWasForcedToUseForeignKB;
-(BOOL)isButtonType;
-(id)_axLayoutStar;
-(BOOL)_accessibilityActivateForPanAlternate:(BOOL)arg1 isSecondAlternate:(BOOL)arg2 isSecondaryActivate:(BOOL)arg3 ;
-(BOOL)_axDisplaysGlobeKeyAsEmojiKey;
-(BOOL)_axIsDictationKey;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(void)setChangesOnShiftDown:(BOOL)arg1 ;
-(id)_axDualStringLabel;
-(BOOL)_axIsShifted;
-(BOOL)isUnaffectedByShiftLock;
-(BOOL)changesOnShiftDown;
-(BOOL)allowsCaseChangeOnShift;
-(void)_applyCapitalLetterTransform;
-(BOOL)_allowCachingAccessibilityLabel;
-(BOOL)_accessibilityIsDeleteKey;
-(BOOL)_accessibilityIsKeySelected;
-(NSArray *)cachedVariantKeys;
-(void)setCachedVariantKeys:(NSArray *)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(BOOL)_accessibilityActivateForPanAlternate:(BOOL)arg1 isSecondAlternate:(BOOL)arg2 ;
-(BOOL)_performCapsLockDoubleTap;
-(BOOL)_accessibilityActivatePanAlternate:(id)arg1 ;
-(id)_accessibilityKeyComponentName;
-(id)_accessibilityLayoutCursorKeyplaneComponentName;
@end

