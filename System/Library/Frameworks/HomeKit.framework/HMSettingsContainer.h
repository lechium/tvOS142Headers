/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMSettings;


@protocol HMSettingsContainer <NSObject>
@property (readonly) HMSettings * settings; 
@property (readonly) HMSettings * privateSettings; 
@property (readonly) BOOL settingsInitialized; 
@required
-(HMSettings *)settings;
-(HMSettings *)privateSettings;
-(BOOL)settingsInitialized;

@end

