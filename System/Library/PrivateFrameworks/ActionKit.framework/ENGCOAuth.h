/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSURL;

@interface ENGCOAuth : NSObject {

	NSDictionary* __parameters;
	NSString* __method;
	NSURL* __url;
	NSString* _signatureSecret;
	NSDictionary* _OAuthParameters;

}

@property (nonatomic,copy) NSDictionary * requestParameters;              //@synthesize _parameters=__parameters - In the implementation block
@property (nonatomic,copy) NSString * HTTPMethod;                         //@synthesize _method=__method - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                   //@synthesize _url=__url - In the implementation block
@property (nonatomic,copy) NSString * signatureSecret;                    //@synthesize signatureSecret=_signatureSecret - In the implementation block
@property (nonatomic,retain) NSDictionary * OAuthParameters;              //@synthesize OAuthParameters=_OAuthParameters - In the implementation block
+(void)setUserAgent:(id)arg1 ;
+(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
+(id)nonce;
+(id)timeStamp;
+(void)setTimeStampOffset:(long long)arg1 ;
+(id)queryStringFromParameters:(id)arg1 ;
+(id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7 ;
+(id)URLRequestForPath:(id)arg1 GETParameters:(id)arg2 scheme:(id)arg3 host:(id)arg4 consumerKey:(id)arg5 consumerSecret:(id)arg6 accessToken:(id)arg7 tokenSecret:(id)arg8 ;
+(id)URLRequestForPath:(id)arg1 POSTParameters:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7 ;
-(id)request;
-(NSURL *)URL;
-(NSString *)HTTPMethod;
-(void)setURL:(NSURL *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(id)signature;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)requestParameters;
-(id)authorizationHeader;
-(id)initWithConsumerKey:(id)arg1 consumerSecret:(id)arg2 accessToken:(id)arg3 tokenSecret:(id)arg4 ;
-(id)signatureBase;
-(NSString *)signatureSecret;
-(void)setSignatureSecret:(NSString *)arg1 ;
-(NSDictionary *)OAuthParameters;
-(void)setOAuthParameters:(NSDictionary *)arg1 ;
@end

