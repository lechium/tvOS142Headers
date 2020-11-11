/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, BBSettingsGateway, NSDictionary;

@interface PSNotificationSettingsController : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _gateway;
	NSDictionary* _sectionInfosByIdentifier;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)allSectionInfoIdentifiers;
-(id)sectionInfoForIdentifier:(id)arg1 ;
@end

