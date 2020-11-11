/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSXPCListenerEndpoint, NSXPCConnection, NSNumber, NSString;

@interface TKClientToken : NSObject {

	NSXPCListenerEndpoint* _serverEndpoint;
	NSXPCConnection* _serverConnection;
	BOOL _namedConnection;
	NSNumber* _targetUID;
	long long _connectionIdentifier;
	NSString* _tokenID;
	NSXPCConnection* _tokenConnection;

}

@property (nonatomic,readonly) NSXPCConnection * serverConnection; 
@property (nonatomic,readonly) NSXPCConnection * tokenConnection;                          //@synthesize tokenConnection=_tokenConnection - In the implementation block
@property (nonatomic,readonly) NSString * tokenID;                                         //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * configurationEndpoint; 
@property (nonatomic,readonly) NSXPCListenerEndpoint * watcherEndpoint; 
-(void)dealloc;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithTokenID:(id)arg1 ;
-(NSString *)tokenID;
-(id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3 ;
-(NSXPCConnection *)serverConnection;
-(id)sessionWithLAContext:(id)arg1 error:(id*)arg2 ;
-(NSXPCListenerEndpoint *)configurationEndpoint;
-(BOOL)ensureConnectionWithError:(id*)arg1 ;
-(NSXPCConnection *)tokenConnection;
-(NSXPCListenerEndpoint *)watcherEndpoint;
-(id)withError:(id*)arg1 invoke:(/*^block*/id)arg2 ;
@end

