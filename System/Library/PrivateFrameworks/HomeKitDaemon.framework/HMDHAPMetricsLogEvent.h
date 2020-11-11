/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMFUnfairLock;

@interface HMDHAPMetricsLogEvent : HMDLogEvent {

	HMFUnfairLock* _lock;
	unsigned long long _sentHTTPRequests;
	unsigned long long _receivedHTTPResponses;
	unsigned long long _receivedHTTPEvents;
	unsigned long long _accessoryServerInvalidations;
	unsigned long long _btleConnections;
	unsigned long long _btleDiscoveries;
	unsigned long long _btleConnectionPerReasons;

}

@property (nonatomic,readonly) unsigned long long sentHTTPRequests;                          //@synthesize sentHTTPRequests=_sentHTTPRequests - In the implementation block
@property (nonatomic,readonly) unsigned long long receivedHTTPResponses;                     //@synthesize receivedHTTPResponses=_receivedHTTPResponses - In the implementation block
@property (nonatomic,readonly) unsigned long long receivedHTTPEvents;                        //@synthesize receivedHTTPEvents=_receivedHTTPEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryServerInvalidations;              //@synthesize accessoryServerInvalidations=_accessoryServerInvalidations - In the implementation block
@property (nonatomic,readonly) unsigned long long btleConnections;                           //@synthesize btleConnections=_btleConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long btleDiscoveries;                           //@synthesize btleDiscoveries=_btleDiscoveries - In the implementation block
@property (nonatomic,readonly) unsigned long long btleConnectionPerReasons;                  //@synthesize btleConnectionPerReasons=_btleConnectionPerReasons - In the implementation block
+(id)uuid;
-(id)init;
-(id)initWithEventType:(id)arg1 ;
-(void)updateWithHAPAccessoryServer:(id)arg1 ;
-(unsigned long long)accessoryServerInvalidations;
-(unsigned long long)sentHTTPRequests;
-(unsigned long long)receivedHTTPResponses;
-(unsigned long long)receivedHTTPEvents;
-(unsigned long long)btleConnections;
-(unsigned long long)btleDiscoveries;
-(unsigned long long)btleConnectionPerReasons;
@end

