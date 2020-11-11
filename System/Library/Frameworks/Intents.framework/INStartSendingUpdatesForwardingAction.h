/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntentForwardingAction.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@protocol INIntentResponseObserver;
@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCCoding> {

	id<INIntentResponseObserver> _observer;
	NSXPCConnection* _connection;
	NSXPCListenerEndpoint* _endpoint;

}

@property (nonatomic,retain) NSXPCConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                   //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,readonly) id<INIntentResponseObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id<INIntentResponseObserver>)observer;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithIntent:(id)arg1 endpointProvider:(id)arg2 observer:(id)arg3 ;
-(id)initWithIntent:(id)arg1 endpoint:(id)arg2 observer:(id)arg3 ;
@end

