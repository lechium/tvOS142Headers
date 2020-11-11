/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, NSMutableDictionary;

@interface ACUISettingsPluginManager : NSObject {

	PSViewController*<ACUISettingsPluginParentProtocol> _parentViewController;
	NSMutableDictionary* _pluginCache;

}
-(id)_settingsPluginFromBundleWithName:(id)arg1 ;
-(id)_loadSettingsPluginFromBundleWithName:(id)arg1 ;
-(id)initWithParentViewController:(id)arg1 ;
-(void)parentViewControllerWillDisappear;
-(id)mailSettingsPlugin;
-(id)calendarSettingsPlugin;
-(id)contactsSettingsPlugin;
@end

