/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLRequest, NSURLSessionDataTask, NSURLSession;

@interface RUIHTTPRequest : NSObject {

	NSURLRequest* _request;
	NSURLSessionDataTask* _dataTask;
	NSURLSession* _urlSession;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)errorWithCode:(unsigned long long)arg1 ;
+(id)invalidResponseErrorWithResponse:(id)arg1 ;
+(id)serviceUnavailableError;
+(id)nonSecureConnectionNotAllowedError;
+(BOOL)anyRequestLoading;
+(id)safeBaseURL;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)request;
-(void)cancel;
-(void)parseData:(id)arg1 ;
-(BOOL)isLoading;
-(void)_finishedLoading;
-(void)loadRequest:(id)arg1 ;
-(id)sessionConfiguration;
-(void)loadStatusChanged;
-(void)_preLoadCancel;
-(id)urlSessionDelegate;
-(BOOL)receivedValidResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)willParseData;
-(void)didParseData;
-(void)failWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)_startedLoading;
-(void)shouldLoadRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadRequestMain:(id)arg1 ;
-(id)handleWillLoadRequest:(id)arg1 ;
@end

