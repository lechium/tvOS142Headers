/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICURLRequest.h>

@class NSString, NSDictionary, NSArray, ICJSSignConfiguration, ICStoreRequestContext;

@interface ICStoreURLRequest : ICURLRequest {

	BOOL _shouldUseMescalSigning;
	BOOL _shouldParseBodyData;
	BOOL _shouldRequireURLBag;
	long long _anisetteVersion;
	NSString* _machineDataSyncState;
	NSDictionary* _additionalHTTPCookies;
	NSArray* _additionalQueryItems;
	ICJSSignConfiguration* _JSSignConfiguration;

}

@property (nonatomic,copy,readonly) ICStoreRequestContext * storeRequestContext; 
@property (assign,nonatomic) long long anisetteVersion;                                       //@synthesize anisetteVersion=_anisetteVersion - In the implementation block
@property (assign,nonatomic) BOOL shouldUseMescalSigning;                                     //@synthesize shouldUseMescalSigning=_shouldUseMescalSigning - In the implementation block
@property (assign,nonatomic) BOOL shouldParseBodyData;                                        //@synthesize shouldParseBodyData=_shouldParseBodyData - In the implementation block
@property (assign,nonatomic) BOOL shouldRequireURLBag;                                        //@synthesize shouldRequireURLBag=_shouldRequireURLBag - In the implementation block
@property (nonatomic,copy) NSString * machineDataSyncState;                                   //@synthesize machineDataSyncState=_machineDataSyncState - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalHTTPCookies;                              //@synthesize additionalHTTPCookies=_additionalHTTPCookies - In the implementation block
@property (nonatomic,copy) NSArray * additionalQueryItems;                                    //@synthesize additionalQueryItems=_additionalQueryItems - In the implementation block
@property (nonatomic,copy) ICJSSignConfiguration * JSSignConfiguration;                       //@synthesize JSSignConfiguration=_JSSignConfiguration - In the implementation block
+(Class)_responseHandlerClass;
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
+(id)currentConnectionTypeHeader;
+(BOOL)_shouldPersonalizeRequestForClientInfo:(id)arg1 personalizationStyle:(long long)arg2 ;
-(id)description;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)setJSSignConfiguration:(ICJSSignConfiguration *)arg1 ;
-(void)setShouldUseMescalSigning:(BOOL)arg1 ;
-(void)setAdditionalHTTPCookies:(NSDictionary *)arg1 ;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setShouldRequireURLBag:(BOOL)arg1 ;
-(void)setAnisetteVersion:(long long)arg1 ;
-(void)setShouldParseBodyData:(BOOL)arg1 ;
-(void)setAdditionalQueryItems:(NSArray *)arg1 ;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldPersonalizeRequest;
-(NSArray *)additionalQueryItems;
-(void)_getSignatureDataForRequest:(id)arg1 urlBag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)additionalHTTPCookies;
-(long long)anisetteVersion;
-(BOOL)shouldUseMescalSigning;
-(BOOL)shouldParseBodyData;
-(BOOL)shouldRequireURLBag;
-(NSString *)machineDataSyncState;
-(void)setMachineDataSyncState:(NSString *)arg1 ;
-(ICJSSignConfiguration *)JSSignConfiguration;
@end

