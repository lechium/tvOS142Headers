/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol OS_dispatch_queue, NSObject, OS_xpc_object;
@class _NSXPCConnectionExpectedReplies, NSObject, _NSXPCConnectionExportedObjectTable, _NSXPCConnectionRequestedReplies, _NSXPCConnectionImportInfo, NSXPCInterface, NSString, NSXPCListenerEndpoint, _NSXPCConnectionClassCache;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {

	SCD_Union_NS71 _connection;
	_NSXPCConnectionExpectedReplies* _repliesExpected;
	NSObject*<OS_dispatch_queue> _userQueue;
	unsigned _state;
	AI _state2;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	_NSXPCConnectionExportedObjectTable* _exportInfo;
	_NSXPCConnectionRequestedReplies* _repliesRequested;
	_NSXPCConnectionImportInfo* _importInfo;
	id<NSObject> _otherInfo;
	A@ _delegate;
	NSXPCInterface* _remoteObjectInterface;
	NSString* _serviceName;
	NSXPCListenerEndpoint* _endpoint;
	_NSXPCConnectionClassCache* _eCache;
	_NSXPCConnectionClassCache* _dCache;
	NSObject*<OS_xpc_object> _bootstrap;
	os_unfair_lock_s _lock;

}

@property (copy,readonly) NSString * serviceName; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
@property (retain) NSXPCInterface * exportedInterface; 
@property (retain) id exportedObject; 
@property (retain) NSXPCInterface * remoteObjectInterface;                 //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (retain,readonly) id remoteObjectProxy; 
@property (copy) id interruptionHandler; 
@property (copy) id invalidationHandler; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
+(void)beginTransaction;
+(id)currentConnection;
+(void)endTransaction;
-(void)uniquify;
-(id)cuValueForEntitlementNoCache:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)userInfo;
-(void)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)_queue;
-(void)resume;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)suspend;
-(void)start;
-(void)stop;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)_unboostingRemoteObjectProxy;
-(void)_setQueue:(id)arg1 ;
-(int)processIdentifier;
-(SCD_Struct_NS0)auditToken;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)_xpcConnection;
-(unsigned)effectiveUserIdentifier;
-(id)initWithServiceName:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)_errorDescription;
-(id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1 ;
-(void)_sendInvocation:(id)arg1 orArguments:(id*)arg2 count:(unsigned long long)arg3 methodSignature:(id)arg4 selector:(SEL)arg5 withProxy:(id)arg6 ;
-(void)_cancelProgress:(unsigned long long)arg1 ;
-(void)_pauseProgress:(unsigned long long)arg1 ;
-(void)_resumeProgress:(unsigned long long)arg1 ;
-(void)_decodeAndInvokeReplyBlockWithEvent:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3 ;
-(Class)_remoteObjectInterfaceClass;
-(void)_sendDesistForProxy:(id)arg1 ;
-(void)_decodeAndInvokeMessageWithEvent:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_initWithRemoteService:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_initWithRemoteConnection:(id)arg1 name:(id)arg2 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)activate;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 arg4:(id)arg6 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)set_additionalInvalidationHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_additionalInvalidationHandler;
-(NSString *)serviceName;
-(void)_setLanguages:(id)arg1 ;
-(void)_setBootstrapObject:(id)arg1 forKey:(id)arg2 ;
-(id)replacementObjectForEncoder:(id)arg1 object:(id)arg2 ;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(void)_setUUID:(id)arg1 ;
-(void)_setTargetUserIdentifier:(unsigned)arg1 ;
-(void)_killConnection:(int)arg1 ;
-(void)_decodeProgressMessageWithData:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSXPCInterface *)remoteObjectInterface;
@end

