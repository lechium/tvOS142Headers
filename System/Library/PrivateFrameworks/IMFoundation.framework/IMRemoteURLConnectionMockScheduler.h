/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject;

@interface IMRemoteURLConnectionMockScheduler : NSObject {

	NSObject*<OS_xpc_object> _connection;

}
-(id)init;
-(BOOL)_connect;
-(void)scheduleMockResponse:(id)arg1 forURL:(id)arg2 ;
-(void)scheduleMockResponse:(id)arg1 ;
@end
