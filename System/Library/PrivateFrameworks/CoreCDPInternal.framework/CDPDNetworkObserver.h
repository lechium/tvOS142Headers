/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSLock, NSMutableDictionary, NSObject;

@interface CDPDNetworkObserver : NSObject {

	BOOL _networkIsReachable;
	NSLock* _clientsLock;
	NSMutableDictionary* _clientsByUUID;
	SCNetworkReachabilityRef _networkReach;
	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)startObservingNetwork;
-(void)_networkReachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(id)addNetworkObserverWithEventHandler:(/*^block*/id)arg1 ;
-(void)removeObserverWithToken:(id)arg1 ;
@end

