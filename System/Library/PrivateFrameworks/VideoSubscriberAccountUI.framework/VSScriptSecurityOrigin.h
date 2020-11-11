/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSScriptSecurityOrigin : NSObject {

	NSString* _scheme;
	NSString* _host;
	long long _port;

}

@property (nonatomic,copy) NSString * scheme;              //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * host;                //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) long long port;               //@synthesize port=_port - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)scheme;
-(NSString *)host;
-(long long)port;
-(void)setScheme:(NSString *)arg1 ;
-(void)setHost:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
@end

