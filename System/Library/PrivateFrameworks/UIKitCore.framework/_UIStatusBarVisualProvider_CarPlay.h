/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, _UIStatusBarRegion, NSString;

@interface _UIStatusBarVisualProvider_CarPlay : NSObject <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarVisualProvider> {

	BOOL _showingSensorActivityIndicator;
	BOOL _showingPill;
	_UIStatusBar* _statusBar;
	_UIStatusBarRegion* _timeRegion;
	_UIStatusBarRegion* _radarRegion;

}

@property (nonatomic,retain) _UIStatusBarRegion * timeRegion;                   //@synthesize timeRegion=_timeRegion - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegion * radarRegion;                  //@synthesize radarRegion=_radarRegion - In the implementation block
@property (assign,nonatomic) BOOL showingSensorActivityIndicator;               //@synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL showingPill;                                  //@synthesize showingPill=_showingPill - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                   //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
-(_UIStatusBar *)statusBar;
-(void)setTimeRegion:(_UIStatusBarRegion *)arg1 ;
-(void)setRadarRegion:(_UIStatusBarRegion *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(BOOL)showSensorActivityIndicatorWithoutPortalView;
-(void)setShowingSensorActivityIndicator:(BOOL)arg1 ;
-(void)setShowingPill:(BOOL)arg1 ;
-(_UIStatusBarRegion *)timeRegion;
-(_UIStatusBarRegion *)radarRegion;
-(id)_animationForBackgroundActivityPill;
-(id)_animationForQuietMode;
-(id)_animationForSensorIndicator;
-(id)_animationForPillTime;
-(BOOL)showingSensorActivityIndicator;
-(BOOL)showingPill;
@end

