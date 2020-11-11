/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/TRIXPCInternalServiceProtocol.h>

@protocol TRITaskQueuing, TRITrialInternalEntitled;
@class TRIServerContext;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {

	TRIServerContext* _serverContext;
	id<TRITaskQueuing> _taskQueue;
	id<TRITrialInternalEntitled> _entitlementWitness;

}
-(void)taskRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)experimentRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)experimentNotificationsWithExperimentId:(id)arg1 cloudKitContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)submitTask:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)lastFetchDateForContainer:(int)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setLastFetchDate:(id)arg1 forContainer:(int)arg2 teamId:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainerId:(int)arg7 completion:(/*^block*/id)arg8 ;
-(void)deregisterNamespaceWithNamespaceName:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startDownloadNamespaceWithName:(id)arg1 teamId:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dynamicNamespaceRecordsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithServerContext:(id)arg1 taskQueue:(id)arg2 entitlementWitness:(id)arg3 ;
@end

