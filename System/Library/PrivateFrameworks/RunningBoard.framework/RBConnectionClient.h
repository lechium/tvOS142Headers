/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBClientInheritanceManagerDelegate.h>
#import <libobjc.A.dylib/RBEntitlementPossessing.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_xpc_object, RBAssertionManaging, RBEntitlementManaging, RBProcessManaging, RBProcessMonitoring, RBStateCaptureManaging, RBEntitlementPossessing;
@class NSObject, RBConnectionListener, RBProcess, NSString, RBSProcessHandle, RBSProcessIdentity, RBSProcessIdentifier, RBClientInheritanceManager, NSMutableSet, RBProcessMonitorObserver, RBSAssertionIdentifier;

@interface RBConnectionClient : NSObject <RBClientInheritanceManagerDelegate, RBEntitlementPossessing, RBStateCapturing> {

	NSObject*<OS_xpc_object> _connection;
	os_unfair_lock_s _lock;
	id<RBAssertionManaging> _assertionManager;
	id<RBEntitlementManaging> _entitlementManager;
	id<RBProcessManaging> _processManager;
	id<RBProcessMonitoring> _processMonitor;
	id<RBStateCaptureManaging> _stateCaptureManager;
	RBConnectionListener* _listener;
	RBProcess* _containingProcess;
	BOOL _ready;
	NSString* _shortDescription;
	RBProcess* _process;
	RBSProcessHandle* _processHandle;
	RBSProcessIdentity* _processIdentity;
	RBSProcessIdentifier* _processIdentifier;
	unsigned _euid;
	RBClientInheritanceManager* _inheritanceManager;
	id<RBEntitlementPossessing> _entitlements;
	NSMutableSet* _assertionIdentifiers;
	NSMutableSet* _deathMonitors;
	RBProcessMonitorObserver* _stateObserver;
	RBSAssertionIdentifier* _expirationBoostAssertionIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)description;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)captureState;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(NSString *)stateCaptureTitle;
-(void)inheritanceManager:(id)arg1 didChangeInheritances:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

