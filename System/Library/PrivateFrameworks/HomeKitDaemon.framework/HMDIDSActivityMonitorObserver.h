/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IDSActivityMonitorListenerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol NSLocking;
@class HMDIDSActivityMonitor, NSMutableDictionary, NSString;

@interface HMDIDSActivityMonitorObserver : NSObject <IDSActivityMonitorListenerDelegate, HMFLogging> {

	id<NSLocking> _lock;
	HMDIDSActivityMonitor* _activityMonitor;
	NSMutableDictionary* _subactivityToDelegatesMap;

}

@property (readonly) HMDIDSActivityMonitor * activityMonitor;                      //@synthesize activityMonitor=_activityMonitor - In the implementation block
@property (readonly) NSMutableDictionary * subactivityToDelegatesMap;              //@synthesize subactivityToDelegatesMap=_subactivityToDelegatesMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDIDSActivityMonitor *)activityMonitor;
-(void)activityMonitor:(id)arg1 didReceiveActivityUpdate:(id)arg2 ;
-(id)initWithActivityMonitor:(id)arg1 ;
-(id)logIdentifier;
-(void)addObserver:(id)arg1 forSubActivity:(id)arg2 ;
-(void)removeObserver:(id)arg1 forSubActivity:(id)arg2 ;
-(void)startObservingPresenceForDevice:(id)arg1 ;
-(void)stopObservingPresenceForDevice:(id)arg1 ;
-(NSMutableDictionary *)subactivityToDelegatesMap;
@end

