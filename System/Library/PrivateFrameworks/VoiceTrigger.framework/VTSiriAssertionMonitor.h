/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriAssertionMonitor : VTEventMonitor {

	unsigned char _assertionState;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)_stopMonitoring;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_notifyObserver:(BOOL)arg1 ;
-(void)enableAssertionReceived;
-(void)disableAssertionReceived;
@end

