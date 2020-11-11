/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityPlatformTranslation/AccessibilityPlatformTranslation-Structs.h>
#import <AccessibilityPlatformTranslation/AXPTranslator.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject, AXUIElement;

@interface AXPTranslator_iOS : AXPTranslator {

	NSMutableDictionary* _translationCache;
	NSMutableDictionary* _backTranslationCache;
	NSObject*<OS_dispatch_queue> _cacheQueue;
	BOOL _axAppReadyFlag;
	NSObject*<OS_dispatch_semaphore> _threadSemaphore;
	BOOL _accessibilityEnabled;
	AXObserverRef _axEventObserver;
	AXUIElement* _systemAppElement;
	AXUIElement* _systemWideElement;

}

@property (nonatomic,retain) AXUIElement * systemWideElement;              //@synthesize systemWideElement=_systemWideElement - In the implementation block
@property (nonatomic,retain) AXObserverRef axEventObserver;                //@synthesize axEventObserver=_axEventObserver - In the implementation block
@property (nonatomic,retain) AXUIElement * systemAppElement;               //@synthesize systemAppElement=_systemAppElement - In the implementation block
+(id)sharedInstance;
+(id)translationObjectFromUIKitObject:(id)arg1 ;
-(id)init;
-(AXUIElement *)systemWideElement;
-(BOOL)accessibilityEnabled;
-(id)translationObjectFromPlatformElement:(AXUIElementRef)arg1 ;
-(void)setSystemWideElement:(AXUIElement *)arg1 ;
-(AXObserverRef)axEventObserver;
-(void)setAxEventObserver:(AXObserverRef)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 ;
-(id)_processAccessibilityAttributeValue:(long long)arg1 forParameter:(id)arg2 ;
-(BOOL)_processPerformAction:(int)arg1 value:(id)arg2 ;
-(void)enableAccessibility;
-(void)_registerAccessibilityNotifications;
-(void)_enableAccessibilityBridgeRuntime;
-(const AXUIElementRef)createPlatformElementFromTranslationObject:(id)arg1 ;
-(long long)attributeFromRequest:(unsigned long long)arg1 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_postProcessAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 result:(id)arg4 ;
-(id)axElementFromTranslatorRequest:(id)arg1 ;
-(id)_processCustomRotorData:(id)arg1 ;
-(id)_processOutgoingCustomRotorSearchResult:(id)arg1 ;
-(id)_processAuditIssuesResult:(id)arg1 ;
-(id)_processParameterizedAttributeRequest:(id)arg1 attribute:(long long)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_processDirectAttributeRequest:(id)arg1 iosAttribute:(long long)arg2 axpAttribute:(unsigned long long)arg3 parameter:(id)arg4 error:(unsigned long long*)arg5 ;
-(id)_processLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(unsigned long long)_processRoleAttributeRequest:(id)arg1 traits:(unsigned long long)arg2 error:(unsigned long long*)arg3 ;
-(id)_processIsSelectedAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processValueAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 axpAttribute:(unsigned long long)arg3 ;
-(id)_processRoleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processLabelAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 axpAttribute:(unsigned long long)arg3 ;
-(id)_processSyntheticValueAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processChildrenAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processAttributeSpecialCases:(unsigned long long)arg1 uiElement:(id)arg2 parameter:(id)arg3 error:(unsigned long long*)arg4 ;
-(id)_processAttributedStringForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processAuditIssuesAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processClassNameAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processCustomActionsAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processBoundsForRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processVisisbleTextRangeAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processFocusedElementAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processElementHelpAttributeResquest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processIsEnabledAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processIsFocusedAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processIsRemoteElementAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processNextLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processPreviousLineRangeAttributeRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processMoveFocusToOpaqueElementAttributeRequest:(id)arg1 parameter:(id)arg2 direction:(long long)arg3 error:(unsigned long long*)arg4 ;
-(id)_processNumberOfCharactersAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processRoleDescriptionAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processStartsMediaSessionAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processSubroleAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processViewControllerDescriptionAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processingSmuggledMarzipanRequest:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processRawElementDataRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processSelectedTextRequest:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processFirstContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processLastContainedElement:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processFirstElementForFocus:(id)arg1 parameter:(id)arg2 error:(unsigned long long*)arg3 ;
-(id)_processVisibleOpaqueElements:(id)arg1 error:(unsigned long long*)arg2 ;
-(id)_processUserInputLabelsAttributeRequest:(id)arg1 error:(unsigned long long*)arg2 axpAttribute:(unsigned long long)arg3 ;
-(id)_preprocessRequest:(long long)arg1 parameter:(id)arg2 ;
-(AXUIElement *)systemAppElement;
-(id)backTranslationCache;
-(id)translationCache;
-(/*^block*/id)attributedStringConversionBlock;
-(void)initializeAXRuntimeForSystemAppServer;
-(void)setAccessibilityEnabled:(BOOL)arg1 ;
-(void)_signalAppAXReady;
-(id)processMultipleAttributeRequest:(id)arg1 ;
-(id)processActionRequest:(id)arg1 ;
-(id)processCanSetAttribute:(id)arg1 ;
-(id)processSetAttribute:(id)arg1 ;
-(id)processSupportedActions:(id)arg1 ;
-(id)processAttributeRequest:(id)arg1 ;
-(id)processApplicationObject:(id)arg1 ;
-(id)processFrontMostApp:(id)arg1 ;
-(id)processHitTest:(id)arg1 ;
-(void)processPlatformNotification:(unsigned long long)arg1 data:(id)arg2 associatedObject:(id)arg3 ;
-(id)platformElementFromTranslation:(id)arg1 ;
-(id)translationObjectFromData:(id)arg1 ;
-(id)remoteTranslationDataWithTranslation:(id)arg1 pid:(int)arg2 ;
-(void)setSystemAppElement:(AXUIElement *)arg1 ;
@end

