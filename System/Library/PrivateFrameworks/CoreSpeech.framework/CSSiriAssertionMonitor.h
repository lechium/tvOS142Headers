/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>
#import <libobjc.A.dylib/CSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate> {

	unsigned char _assertionState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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

