/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedConnection;
+(void)warmUp;
-(void)warmUp;
@end

