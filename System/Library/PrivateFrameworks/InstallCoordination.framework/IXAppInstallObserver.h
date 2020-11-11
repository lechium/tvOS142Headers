/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/IXAppInstallObserverProtocol.h>

@protocol IXAppInstallObserverDelegate, OS_dispatch_queue;
@class NSXPCListener, NSObject, NSString;

@interface IXAppInstallObserver : NSObject <NSXPCListenerDelegate, IXAppInstallObserverProtocol> {

	id<IXAppInstallObserverDelegate> _delegate;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSXPCListener * listener;                                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                      //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,__weak,readonly) id<IXAppInstallObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<IXAppInstallObserverDelegate>)delegate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)_internalInit;
-(id)_oncePerBootUniqueIdentifierForServiceName:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPrioritizeWithSeed:(id)arg1 ;
-(oneway void)_client_shouldPrioritizeAppWithBundleID:(id)arg1 ;
-(oneway void)_client_coordinatorShouldResumeWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorShouldPauseWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2 ;
-(oneway void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)arg1 ;
-(oneway void)_client_coordinatorWithSeed:(id)arg1 didCancelWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(id)initWithMachServiceName:(id)arg1 forClients:(id)arg2 delegate:(id)arg3 ;
-(id)initTransientForClients:(id)arg1 delegate:(id)arg2 ;
@end

