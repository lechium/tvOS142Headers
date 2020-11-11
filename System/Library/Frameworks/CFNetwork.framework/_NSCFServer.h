/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_tcp_listener;
@class NSString, NSDictionary, NSNumber, NSObject;

@interface _NSCFServer : NSObject {

	BOOL _enableCoprocessorInterface;
	long long _type;
	long long _listenerPort;
	NSString* _interface;
	NSDictionary* _configuration;
	NSNumber* _listenerID;
	NSObject*<OS_tcp_listener> _listener;

}

@property (assign) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (assign) long long listenerPort;                                                     //@synthesize listenerPort=_listenerPort - In the implementation block
@property (retain) NSString * interface;                                                       //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * configuration;                                               //@synthesize configuration=_configuration - In the implementation block
@property (getter=isCoprocessorInterfaceEnabled) BOOL enableCoprocessorInterface;              //@synthesize enableCoprocessorInterface=_enableCoprocessorInterface - In the implementation block
+(BOOL)startSocksServerWithPort:(long long)arg1 ;
+(BOOL)stopAll;
+(id)adressesForInterface:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3 ;
-(id)initWithType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 port:(long long)arg2 ;
-(BOOL)start;
-(BOOL)stop;
-(long long)listenerPort;
-(void)setListenerPort:(long long)arg1 ;
-(NSString *)interface;
-(void)setInterface:(NSString *)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(BOOL)isCoprocessorInterfaceEnabled;
-(void)setEnableCoprocessorInterface:(BOOL)arg1 ;
@end

