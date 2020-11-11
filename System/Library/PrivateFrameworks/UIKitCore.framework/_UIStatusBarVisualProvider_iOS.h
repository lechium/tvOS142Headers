/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, _UIStatusBarDisplayItemPlacementNetworkGroup, NSArray, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarAnimation, NSString;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {

	BOOL _expanded;
	BOOL _onLockScreen;
	_UIStatusBar* _statusBar;
	_UIStatusBarDisplayItemPlacementNetworkGroup* _expandedNetworkGroup;
	NSArray* _expandedCellularPlacementsAffectedByAirplaneMode;
	NSArray* _expandedLeadingPlacements;
	NSArray* _expandedTrailingPlacements;
	_UIStatusBarDisplayItemPlacementGroup* _secondaryWifiGroup;

}

@property (nonatomic,retain) _UIStatusBarDisplayItemPlacementGroup * secondaryWifiGroup;                         //@synthesize secondaryWifiGroup=_secondaryWifiGroup - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                      //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL onLockScreen;                                                                  //@synthesize onLockScreen=_onLockScreen - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementNetworkGroup * expandedNetworkGroup;              //@synthesize expandedNetworkGroup=_expandedNetworkGroup - In the implementation block
@property (nonatomic,readonly) NSArray * expandedCellularPlacementsAffectedByAirplaneMode;                       //@synthesize expandedCellularPlacementsAffectedByAirplaneMode=_expandedCellularPlacementsAffectedByAirplaneMode - In the implementation block
@property (nonatomic,readonly) NSArray * expandedLeadingPlacements;                                              //@synthesize expandedLeadingPlacements=_expandedLeadingPlacements - In the implementation block
@property (nonatomic,readonly) NSArray * expandedTrailingPlacements;                                             //@synthesize expandedTrailingPlacements=_expandedTrailingPlacements - In the implementation block
@property (nonatomic,readonly) _UIStatusBarAnimation * animationForAirplaneMode; 
@property (nonatomic,readonly) double airplaneObstacleFadeOutDuration; 
@property (nonatomic,readonly) double airplaneObstacleFadeInDuration; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                                    //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)height;
+(double)cornerRadius;
+(BOOL)hasCellularCapability;
+(double)itemSpacing;
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
+(double)expandedItemSpacing;
+(double)regionSpacing;
+(double)bluetoothPaddingInset;
+(BOOL)wantsExpandedLeadingPlacements;
-(id)init;
-(void)setOnLockScreen:(BOOL)arg1 ;
-(BOOL)onLockScreen;
-(BOOL)expanded;
-(void)setExpanded:(BOOL)arg1 ;
-(_UIStatusBar *)statusBar;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)modeUpdatedFromMode:(long long)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(NSArray *)expandedCellularPlacementsAffectedByAirplaneMode;
-(NSArray *)expandedLeadingPlacements;
-(NSArray *)expandedTrailingPlacements;
-(void)updateDataForService:(id)arg1 ;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(void)updateDataForSystemNavigation:(id)arg1 ;
-(double)airplaneObstacleFadeOutDuration;
-(_UIStatusBarAnimation *)animationForAirplaneMode;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_createExpandedPlacements;
-(void)_applyToAppearingRegions:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(double)airplaneObstacleFadeInDuration;
-(_UIStatusBarDisplayItemPlacementNetworkGroup *)expandedNetworkGroup;
-(_UIStatusBarDisplayItemPlacementGroup *)secondaryWifiGroup;
-(void)setSecondaryWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
@end
