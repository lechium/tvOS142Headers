/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <ATFoundation/ATFoundation-Structs.h>
@class NSObject, NSHashTable;

@interface ATEnvironmentMonitor : NSObject {

	SCNetworkReachabilityRef _reachability;
	unsigned _powerNotification;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _observers;
	BOOL _power;
	BOOL _internetReachable;
	BOOL _internetReachableViaOnlyWWAN;
	unsigned long long _thermalPressureLevel;

}

@property (assign,nonatomic) unsigned long long thermalPressureLevel;                                                //@synthesize thermalPressureLevel=_thermalPressureLevel - In the implementation block
@property (getter=hasPower,nonatomic,readonly) BOOL power;                                                           //@synthesize power=_power - In the implementation block
@property (getter=isInternetReachable,nonatomic,readonly) BOOL internetReachable;                                    //@synthesize internetReachable=_internetReachable - In the implementation block
@property (getter=isInternetReachableViaOnlyWWAN,nonatomic,readonly) BOOL internetReachableViaOnlyWWAN;              //@synthesize internetReachableViaOnlyWWAN=_internetReachableViaOnlyWWAN - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)start;
-(void)stop;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isInternetReachable;
-(BOOL)hasPower;
-(BOOL)isInternetReachableViaOnlyWWAN;
-(unsigned long long)thermalPressureLevel;
-(void)setThermalPressureLevel:(unsigned long long)arg1 ;
@end

