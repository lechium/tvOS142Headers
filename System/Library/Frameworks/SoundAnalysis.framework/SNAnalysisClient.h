/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableArray;

@interface SNAnalysisClient : NSObject {

	/*^block*/id _connectionToServerGenerator;
	NSXPCConnection* _xpcConnectionToServer;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingInvalidationHandlers;

}
+(id)newConnectionToMachServiceWithName:(id)arg1 lostConnectionHandler:(/*^block*/id)arg2 queue:(id)arg3 ;
+(id)defaultClient;
-(id)init;
-(id)initToConnectToMachServiceWithName:(id)arg1 queue:(id)arg2 ;
-(id)initWithConnectionGenerator:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_handleLostConnection;
-(id)_connectionToServerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_remoteResourceCoordinatorWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)_createRemoteSystemAudioAnalyzerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

