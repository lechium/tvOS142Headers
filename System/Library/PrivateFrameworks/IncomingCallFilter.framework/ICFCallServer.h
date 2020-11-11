/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface ICFCallServer : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _clients;
	BOOL _hasRegistered;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_cleanup;
-(void)_cleanupClient:(id)arg1 ;
-(void)_configureWithClient:(id)arg1 ;
-(void)shouldAllowIncomingCallForNumber:(id)arg1 forProviderIdentifier:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_requestCallGrantForIdentifier:(id)arg1 forProviderIdentifier:(id)arg2 waitForResponse:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_clientConnected;
@end

