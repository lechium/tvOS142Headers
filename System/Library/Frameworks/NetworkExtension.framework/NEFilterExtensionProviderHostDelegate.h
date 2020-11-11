/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NEFilterExtensionProviderHostDelegate <NEExtensionProviderHostDelegate>
@required
-(void)notifyRulesChanged;
-(void)provideRemediationMap:(id)arg1;
-(void)provideURLAppendStringMap:(id)arg1;
-(void)report:(id)arg1;
-(void)sendBrowserContentFilterServerRequest;
-(void)sendSocketContentFilterRequest;
-(void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)applySettings:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createPacketChannelForExtension:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

