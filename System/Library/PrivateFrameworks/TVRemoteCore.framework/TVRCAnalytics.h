/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TVRCAnalytics : NSObject
+(id)sharedInstance;
-(id)_presentationSourceEventDictionaryFor:(id)arg1 ;
-(id)_spinnerShownDictionaryFor:(id)arg1 ;
-(id)_connectionDictionaryForType:(id)arg1 status:(id)arg2 reason:(id)arg3 ;
-(void)logPresentationFrom:(id)arg1 ;
-(void)logConnectingSpinnerShown:(id)arg1 ;
-(void)logSearchingSpinnerShown;
-(void)logConnectionStatus:(long long)arg1 type:(long long)arg2 reason:(long long)arg3 ;
-(void)logShortcutActionRunWithType:(id)arg1 ;
-(void)logSessionStatistics:(id)arg1 ;
@end
