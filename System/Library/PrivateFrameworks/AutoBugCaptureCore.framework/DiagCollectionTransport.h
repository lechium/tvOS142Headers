/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCListener, DiagCollectionServiceImpl, NSObject;

@interface DiagCollectionTransport : NSObject {

	NSXPCListener* listener;
	DiagCollectionServiceImpl* service;
	NSObject*<OS_dispatch_queue> transport_queue;

}
-(id)init;
-(void)dealloc;
-(void)shutdown;
-(void)setListeningPort:(const char*)arg1 ;
@end

