/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSiriEnabledMonitor : CSEventMonitor {

	BOOL _isSiriEnabled;

}
+(id)sharedInstance;
-(id)init;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2 ;
-(void)_didReceiveSiriSettingChanged:(BOOL)arg1 ;
-(BOOL)fetchIsEnabled;
@end
