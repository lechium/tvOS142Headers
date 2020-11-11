/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/_CRKImageLoaderDelegate.h>
#import <libobjc.A.dylib/INUIImageLoaderDelegate.h>
#import <UIKitCore/_UIFallbackEnvironment.h>
#import <UIKit/UICoordinateSpace.h>
#import <UIKitCore/_UITraitEnvironmentInternal.h>
#import <UIKitCore/_UIFocusEnvironmentInternal.h>
#import <UIKitCore/_UIFocusRegionContainer.h>
#import <UIKit/UIFocusItemContainer.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>
#import <UIKit/UITraitEnvironment.h>

@protocol _UIDisplayInfoProviding, UIFocusEnvironment;
@class UISDisplayContext, NSDictionary, NSArray, _UIScreenFixedCoordinateSpace, FBSDisplayConfiguration, UITraitCollection, UISoftwareDimmingWindow, _UIScreenBoundingPathUtilities, UIWindow, NSString, UIFocusSystem, UIScreenMode, UIView;

@interface UIScreen : NSObject <_CRKImageLoaderDelegate, INUIImageLoaderDelegate, _UIFallbackEnvironment, UICoordinateSpace, _UITraitEnvironmentInternal, _UIFocusEnvironmentInternal, _UIFocusRegionContainer, UIFocusItemContainer, _UIFocusEnvironmentPrivate, UITraitEnvironment> {

	CGRect _unjailedReferenceBounds;
	CGRect _referenceBounds;
	long long _interfaceOrientation;
	double _scale;
	long long _gamut;
	long long _userInterfaceIdiom;
	UISDisplayContext* _initialDisplayContext;
	NSDictionary* _capabilities;
	NSArray* _availableDisplayModes;
	double _pointsPerInch;
	double _nativePointsPerMillimeter;
	_UIScreenFixedCoordinateSpace* _fixedCoordinateSpace;
	id<_UIDisplayInfoProviding> _displayInfoProvider;
	FBSDisplayConfiguration* __displayConfiguration;
	struct {
		unsigned bitsPerComponent : 4;
		unsigned initialized : 1;
		unsigned connected : 1;
		unsigned hasSetOverscanCompensation : 1;
		unsigned overscanCompensation : 2;
		unsigned wantsWideContentMargins : 1;
		unsigned queriedDeviceContentMargins : 1;
		unsigned hasCalculatedPointsPerInch : 1;
		unsigned rightHandDrive : 1;
		unsigned carPlayNightModeEnabled : 1;
	}  _screenFlags;
	SCD_Struct_UI60 _carPlayHumanPresenceStatus;
	BOOL _performingSystemSnapshot;
	BOOL _wantsSoftwareDimming;
	BOOL _captured;
	BOOL __UIIBAlwaysProvidePeripheryInsets;
	BOOL _mainScreen;
	float _lastNotifiedBacklightLevel;
	UITraitCollection* _defaultTraitCollection;
	UITraitCollection* _overrideTraitCollection;
	UITraitCollection* _lastNotifiedTraitCollection;
	UISoftwareDimmingWindow* _softwareDimmingWindow;
	_UIScreenBoundingPathUtilities* _boundingPathUtilities;
	UIWindow*<UIFocusEnvironment> __focusedWindow;

}

@property (readonly) double _gkScale; 
@property (readonly) CGRect _gkBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=_setSoftwareDimmingWindow:,nonatomic,retain) UISoftwareDimmingWindow * _softwareDimmingWindow;                                                       //@synthesize softwareDimmingWindow=_softwareDimmingWindow - In the implementation block
@property (assign,setter=_setLastNotifiedBacklightLevel:,nonatomic) float _lastNotifiedBacklightLevel;                                                                 //@synthesize lastNotifiedBacklightLevel=_lastNotifiedBacklightLevel - In the implementation block
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,setter=_setCaptured:,getter=isCaptured,nonatomic) BOOL captured;                                                                                     //@synthesize captured=_captured - In the implementation block
@property (setter=_setDefaultTraitCollection:,getter=_defaultTraitCollection,nonatomic,retain) UITraitCollection * defaultTraitCollection;                             //@synthesize defaultTraitCollection=_defaultTraitCollection - In the implementation block
@property (setter=_setOverrideTraitCollection:,getter=_overrideTraitCollection,nonatomic,retain) UITraitCollection * overrideTraitCollection;                          //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (setter=_setLastNotifiedTraitCollection:,getter=_lastNotifiedTraitCollection,nonatomic,retain) UITraitCollection * lastNotifiedTraitCollection;              //@synthesize lastNotifiedTraitCollection=_lastNotifiedTraitCollection - In the implementation block
@property (assign,setter=_setUIIBAlwaysProvidePeripheryInsets:,nonatomic) BOOL _UIIBAlwaysProvidePeripheryInsets;                                                      //@synthesize _UIIBAlwaysProvidePeripheryInsets=__UIIBAlwaysProvidePeripheryInsets - In the implementation block
@property (setter=_setBoundingPathUtilities:,getter=_boundingPathUtilities,nonatomic,retain) _UIScreenBoundingPathUtilities * boundingPathUtilities;                   //@synthesize boundingPathUtilities=_boundingPathUtilities - In the implementation block
@property (assign,setter=_setMainScreen:,getter=_isMainScreen,nonatomic) BOOL mainScreen;                                                                              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (getter=_focusSystem,nonatomic,readonly) UIFocusSystem * focusSystem; 
@property (assign,setter=_setFocusedWindow:,nonatomic) UIWindow*<UIFocusEnvironment> _focusedWindow;                                                                   //@synthesize _focusedWindow=__focusedWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * _preferredFocusedWindow; 
@property (assign,setter=_setPerformingSystemSnapshot:,getter=_isPerformingSystemSnapshot,nonatomic) BOOL _performingSystemSnapshot;                                   //@synthesize performingSystemSnapshot=_performingSystemSnapshot - In the implementation block
@property (nonatomic,readonly) CGRect _referenceBounds;                                                                                                                //@synthesize referenceBounds=_referenceBounds - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) double scale;                                                                                                                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableModes; 
@property (nonatomic,readonly) UIScreenMode * preferredMode; 
@property (nonatomic,readonly) UIScreenMode * currentMode; 
@property (assign,nonatomic) long long overscanCompensation; 
@property (nonatomic,readonly) UIEdgeInsets overscanCompensationInsets; 
@property (nonatomic,readonly) UIScreen * mirroredScreen; 
@property (assign,nonatomic) double brightness; 
@property (assign,nonatomic) BOOL wantsSoftwareDimming;                                                                                                                //@synthesize wantsSoftwareDimming=_wantsSoftwareDimming - In the implementation block
@property (readonly) id<UICoordinateSpace> coordinateSpace; 
@property (readonly) id<UICoordinateSpace> fixedCoordinateSpace; 
@property (nonatomic,readonly) CGRect nativeBounds; 
@property (nonatomic,readonly) double nativeScale; 
@property (readonly) long long maximumFramesPerSecond; 
@property (nonatomic,readonly) double calibratedLatency; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> focusedItem; 
@property (nonatomic,__weak,readonly) UIView * focusedView; 
@property (nonatomic,readonly) BOOL supportsFocus; 
@property (nonatomic,readonly) CGRect applicationFrame; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
+(void)_performSwiftUITestingOverrides;
+(void)initialize;
+(id)mainScreen;
+(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
+(id)screens;
+(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
+(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
+(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
+(id)_carScreen;
+(void)_enumerateScreensWithBlock:(/*^block*/id)arg1 ;
+(id)_screenWithDisplayName:(id)arg1 ;
+(id)_screenWithFBSDisplayIdentity:(id)arg1 ;
+(CGAffineTransform)transformToRotateScreen:(double)arg1 ;
+(CGAffineTransform)transformForScreenOriginRotation:(double)arg1 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 ;
+(void)_FBSDisplayIdentityDisconnected:(id)arg1 ;
+(id)_screenForScene:(id)arg1 ;
+(id)_mainScreenThreadSafeTraitCollection;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 forInitialDisplayContext:(id)arg2 andNotify:(BOOL)arg3 forceMain:(BOOL)arg4 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 ;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(BOOL)arg3 ;
+(void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(BOOL)arg2 forceMain:(BOOL)arg3 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2 ;
+(BOOL)_shouldDisableJail;
+(id)_screenWithDisplayID:(id)arg1 ;
+(id)_screenWithIntegerDisplayID:(unsigned)arg1 ;
+(void)_prepareScreensForAppResume;
+(void)_FBSDisplayDidPossiblyConnect:(id)arg1 ;
+(void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 ;
+(BOOL)_isProbablyBeingRecorded;
+(id)__displayConfigurationsIncludingMain:(BOOL)arg1 ;
-(double)_gkScale;
-(CGRect)_gkBounds;
-(double)_SwiftUITesting_currentScreenScale;
-(BOOL)_SwiftUITesting_wantsWideContentMargins;
-(id)traitCollectionForImageLoader:(id)arg1 image:(id)arg2 ;
-(id)traitCollectionForImageLoader:(id)arg1 ;
-(id)_mapkit_display;
-(NSString *)description;
-(void)dealloc;
-(id)_name;
-(void)_invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)scale;
-(double)_scale;
-(UIScreenMode *)currentMode;
-(double)_rotation;
-(id)_display;
-(CGRect)bounds;
-(long long)_interfaceOrientation;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)fbsDisplay;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(id)displayIdentity;
-(id)_displayID;
-(UIScreenMode *)preferredMode;
-(NSArray *)availableModes;
-(long long)overscanCompensation;
-(double)_latency;
-(double)_refreshRate;
-(void)setOverscanCompensation:(long long)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(double)brightness;
-(id)snapshot;
-(id)_capabilities;
-(void)setCurrentMode:(UIScreenMode *)arg1 ;
-(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(unsigned)_seed;
-(long long)_imageOrientation;
-(long long)_userInterfaceIdiom;
-(CGRect)_referenceBounds;
-(void)_updateCapabilities;
-(UITraitCollection *)traitCollection;
-(int)bitsPerComponent;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<UICoordinateSpace>)fixedCoordinateSpace;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(id)_capabilityForKey:(id)arg1 ;
-(BOOL)isCaptured;
-(double)nativeScale;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)snapshotViewAfterScreenUpdates:(BOOL)arg1 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(UIView *)focusedView;
-(NSArray *)preferredFocusEnvironments;
-(UIView *)preferredFocusedView;
-(UIEdgeInsets)_peripheryInsets;
-(void)_updateTraits;
-(void)updateFocusIfNeeded;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(id<UIFocusItemContainer>)focusItemContainer;
-(BOOL)_isCarScreen;
-(unsigned)_integerDisplayID;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(id)snapshotView;
-(UIEdgeInsets)overscanCompensationInsets;
-(id)_defaultTraitCollection;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(long long)maximumFramesPerSecond;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(id<UIFocusItem>)focusedItem;
-(void)_setScale:(double)arg1 ;
-(CGRect)nativeBounds;
-(void)_setUserInterfaceIdiom:(long long)arg1 ;
-(void)_setInterfaceOrientation:(long long)arg1 ;
-(long long)gamut;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)_isExternal;
-(CGRect)applicationFrame;
-(id)_focusSystem;
-(double)_pointsPerInch;
-(BOOL)_wantsWideContentMargins;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(void)_setOverrideTraitCollection:(id)arg1 ;
-(BOOL)_isPerformingSystemSnapshot;
-(UIWindow *)_preferredFocusedWindow;
-(CGRect)_boundsForInterfaceOrientation:(long long)arg1 ;
-(void)_computeMetrics:(BOOL)arg1 ;
-(BOOL)supportsFocus;
-(id)_fallbackTraitCollection;
-(BOOL)_isMainScreen;
-(CGRect)_applicationFrame;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(id)_displayInfoProvider;
-(CGRect)_mainSceneBoundsForInterfaceOrientation:(long long)arg1 ;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 ;
-(BOOL)_isRotatable;
-(void)_updateDisplayConfiguration:(id)arg1 ;
-(CGRect)_unjailedReferenceBounds;
-(CGRect)_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1 ;
-(unsigned long long)_artworkSubtype;
-(id)_focusMapContainer;
-(id)_lastNotifiedTraitCollection;
-(id)_overrideTraitCollection;
-(double)_displayCornerRadius;
-(BOOL)_isRightHandDrive;
-(CGRect)_mainSceneFrame;
-(CGRect)_interfaceOrientedMainSceneBounds;
-(BOOL)_areListsLimited;
-(BOOL)_areMusicListsLimited;
-(BOOL)_hasStatusBar;
-(CGRect)_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(long long)_effectiveUserInterfaceStyle;
-(id)initWithDisplayConfiguration:(id)arg1 forceMainScreen:(BOOL)arg2 ;
-(void)_connectScreen;
-(void)_computeMetrics;
-(void)_setInitialDisplayContext:(id)arg1 ;
-(void)_disconnectScreen;
-(void)_beginObservingBacklightLevelNotifications;
-(void)_accessibilityForceTouchEnabledChanged:(id)arg1 ;
-(void)_accessibilityBoldTextChanged:(id)arg1 ;
-(void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1 ;
-(void)_accessibilityTraitFlagsChanged:(id)arg1 ;
-(void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1 ;
-(void)_endObservingBacklightLevelNotifications;
-(void)_setSoftwareDimmingWindow:(id)arg1 ;
-(void)_capturedStateUpdated:(BOOL)arg1 ;
-(void)_setCaptured:(BOOL)arg1 ;
-(void)_updateAvailableDisplayModes;
-(BOOL)_hasWindows;
-(UIEdgeInsets)_displayPeripheryInsets;
-(CGRect)_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(BOOL)arg3 ;
-(CGRect)_overrideReferenceBounds;
-(CGRect)_mainSceneReferenceBounds;
-(BOOL)_UIIBAlwaysProvidePeripheryInsets;
-(double)calibratedLatency;
-(void)_setCarPlayHumanPresenceInRange:(BOOL)arg1 ;
-(void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
-(void)_ensureComputedMainScreenDPI;
-(void)_updateUserInterfaceIdiom;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(double)_traitCollectionDisplayCornerRadius;
-(id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 ;
-(void)_setDefaultTraitCollection:(id)arg1 ;
-(void)_willTransitionToTraitCollection:(id)arg1 ;
-(void)_notifyTraitsChangedAndPropagateToAllWindows;
-(void)_setLastNotifiedTraitCollection:(id)arg1 ;
-(BOOL)_isMainScreenPointer;
-(UISoftwareDimmingWindow *)_softwareDimmingWindow;
-(float)_lastNotifiedBacklightLevel;
-(void)_setLastNotifiedBacklightLevel:(float)arg1 ;
-(void)_postBrightnessDidChangeNotificationIfAppropriate;
-(BOOL)_supportsBrightness;
-(float)rawBrightnessForBacklightLevel:(float)arg1 ;
-(id)_lazySoftwareDimmingWindow;
-(CGRect)_nativeDisplayBounds;
-(double)_nativeScaleWithLevel:(unsigned long long)arg1 ;
-(id)_preferredFocusedWindowScene;
-(BOOL)_isOverscanned;
-(CGRect)_unjailedReferenceBoundsInPixels;
-(id)_boundingPathUtilities;
-(double)_touchRadiusScaleFactor;
-(UIScreen *)mirroredScreen;
-(void)setBitsPerComponent:(int)arg1 ;
-(int)screenType;
-(BOOL)_isCarInstrumentsScreen;
-(BOOL)_supportsCarPlayHumanPresence;
-(BOOL)_isCarPlayHumanPresenceInRange;
-(BOOL)_expectsSecureRendering;
-(void)_prepareForWindow;
-(double)_maximumSupportedScale;
-(double)_nativePointsPerMillimeter;
-(BOOL)_isValidInterfaceOrientation:(long long)arg1 ;
-(void)_resetUserInterfaceIdiom;
-(id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(CGRect)arg2 ;
-(void)_setCapability:(id)arg1 forKey:(id)arg2 ;
-(void)_setExternalDeviceShouldInputText:(BOOL)arg1 ;
-(BOOL)_isWorkspaceCapable;
-(long long)_workspaceCapableScreenType;
-(BOOL)_isSoftKeyboardLimited;
-(BOOL)_isCarPlayNightModeEnabled;
-(CGPoint)_mainSceneOrigin;
-(id)_snapshotExcludingWindows:(id)arg1 withRect:(CGRect)arg2 ;
-(double)_nativeScale;
-(id)_focusScrollManager;
-(id)_focusMovementPerformer;
-(id)_focusSystemManager;
-(BOOL)_isFocusSystemLoaded;
-(void)setFocusEnabled:(BOOL)arg1 ;
-(BOOL)_supportsDeferredFocus;
-(void)_setPerformingSystemSnapshot:(BOOL)arg1 ;
-(BOOL)wantsSoftwareDimming;
-(void)setWantsSoftwareDimming:(BOOL)arg1 ;
-(void)_setUIIBAlwaysProvidePeripheryInsets:(BOOL)arg1 ;
-(void)_setBoundingPathUtilities:(id)arg1 ;
-(void)_setMainScreen:(BOOL)arg1 ;
-(UIWindow*<UIFocusEnvironment>)_focusedWindow;
-(void)_setFocusedWindow:(id)arg1 ;
@end

