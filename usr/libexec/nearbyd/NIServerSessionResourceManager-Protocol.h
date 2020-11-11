//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NIDiscoveryToken, NIServerAnalyticsManager, NSObject, NSString, NSUUID, PRAppStateMonitor;
@protocol NIServerSessionLifecycleSupervisor, OS_dispatch_queue, PRBLEDiscoveryProviding, PRUWBServiceProviding, UWBSessionDelegateProxyProtocol;

@protocol NIServerSessionResourceManager <NSObject>
- (id <UWBSessionDelegateProxyProtocol>)remote;
- (NIServerAnalyticsManager *)analytics;
- (PRAppStateMonitor *)appStateMonitor;
- (id <NIServerSessionLifecycleSupervisor>)lifecycleSupervisor;
- (id <PRUWBServiceProviding>)uwbResource;
- (id <PRBLEDiscoveryProviding>)btResource;
- (NIDiscoveryToken *)discoveryToken;
- (NSUUID *)serverSessionIdentifier;
- (int)clientPid;
- (NSString *)clientAppDisplayName;
- (NSObject<OS_dispatch_queue> *)clientConnectionQueue;
@end

