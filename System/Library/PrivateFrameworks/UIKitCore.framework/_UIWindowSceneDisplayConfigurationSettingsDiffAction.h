/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@class UIApplicationSceneSettingsDiffInspector, NSString;

@interface _UIWindowSceneDisplayConfigurationSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	UIApplicationSceneSettingsDiffInspector* _sceneSettingsDisplayConfigurationDiffInspector;

}

@property (nonatomic,retain) UIApplicationSceneSettingsDiffInspector * sceneSettingsDisplayConfigurationDiffInspector;              //@synthesize sceneSettingsDisplayConfigurationDiffInspector=_sceneSettingsDisplayConfigurationDiffInspector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
-(UIApplicationSceneSettingsDiffInspector *)sceneSettingsDisplayConfigurationDiffInspector;
-(void)setSceneSettingsDisplayConfigurationDiffInspector:(UIApplicationSceneSettingsDiffInspector *)arg1 ;
@end

