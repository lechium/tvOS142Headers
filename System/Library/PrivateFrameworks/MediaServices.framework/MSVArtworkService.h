/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOperationQueue, NSXPCConnection;

@interface MSVArtworkService : NSObject {

	NSOperationQueue* _serviceThrottlingOperationQueue;
	NSXPCConnection* _serverConnection;

}

@property (nonatomic,retain) NSOperationQueue * serviceThrottlingOperationQueue;              //@synthesize serviceThrottlingOperationQueue=_serviceThrottlingOperationQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                              //@synthesize serverConnection=_serverConnection - In the implementation block
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(void)setServiceThrottlingOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)serviceThrottlingOperationQueue;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)serverConnection;
-(void)sendRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

