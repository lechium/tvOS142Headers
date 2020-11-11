/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor {

	int _notifyToken;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopMonitoring;
-(BOOL)isAvailable;
-(void)_availabilityChanged;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg1 ;
-(void)_notifyObserver:(id)arg1 withNetworkAvailability:(BOOL)arg2 ;
@end

