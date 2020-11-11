/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WatchListKit/WLKAsyncOperation.h>

@class NSString, NSNumber, NSURLRequest, NSHTTPURLResponse, NSData, NSError, AMSURLRequestEncoder, AMSURLSession, NSURLSessionDataTask, NSDate;

@interface WLKNetworkRequestOperation : WLKAsyncOperation {

	NSString* _identifier;
	NSNumber* _DSID;
	id _authenticationDelegate;
	NSURLRequest* _request;
	long long _options;
	NSHTTPURLResponse* _httpResponse;
	long long _responseStatusCode;
	NSData* _data;
	NSError* _error;
	long long _resourceFetchType;
	AMSURLRequestEncoder* _encoder;
	AMSURLSession* _session;
	NSURLSessionDataTask* _task;
	NSDate* _startDate;
	unsigned long long _signpostIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSError * error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSHTTPURLResponse * httpResponse;                   //@synthesize httpResponse=_httpResponse - In the implementation block
@property (assign,nonatomic) long long responseStatusCode;                       //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (assign,nonatomic) long long resourceFetchType;                        //@synthesize resourceFetchType=_resourceFetchType - In the implementation block
@property (nonatomic,retain) AMSURLRequestEncoder * encoder;                     //@synthesize encoder=_encoder - In the implementation block
@property (nonatomic,retain) AMSURLSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURLRequest * request;                               //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                        //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) unsigned long long signpostIdentifier;              //@synthesize signpostIdentifier=_signpostIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * DSID;                                      //@synthesize DSID=_DSID - In the implementation block
@property (assign,nonatomic,__weak) id authenticationDelegate;                   //@synthesize authenticationDelegate=_authenticationDelegate - In the implementation block
@property (nonatomic,readonly) long long options;                                //@synthesize options=_options - In the implementation block
-(id)init;
-(NSData *)data;
-(NSString *)identifier;
-(NSError *)error;
-(long long)responseStatusCode;
-(NSURLRequest *)request;
-(void)cancel;
-(AMSURLSession *)session;
-(void)setError:(NSError *)arg1 ;
-(long long)options;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)resourceFetchType;
-(void)setData:(NSData *)arg1 ;
-(NSDate *)startDate;
-(void)setSession:(AMSURLSession *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResourceFetchType:(long long)arg1 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSNumber *)DSID;
-(void)setDSID:(NSNumber *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(void)setResponseStatusCode:(long long)arg1 ;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(void)finishExecutionIfPossible;
-(void)executionDidBegin;
-(unsigned long long)signpostIdentifier;
-(void)processResponse;
-(id)initWithURLRequest:(id)arg1 options:(long long)arg2 ;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(id)httpHeaderMaxAge;
-(id)httpHeaderResponseDate;
-(id)originalExpirationDate;
-(void)setEncoder:(AMSURLRequestEncoder *)arg1 ;
-(id)authenticationDelegate;
-(void)configureSession;
-(void)_startNetworkRequest;
-(long long)_statusCodeForAMSResult:(id)arg1 error:(id)arg2 ;
-(void)_finishExecutionIfPossibleWithError:(id)arg1 ;
-(void)handleResult:(id)arg1 error:(id)arg2 ;
-(void)prepareAndStartNetworkRequest;
-(void)setAuthenticationDelegate:(id)arg1 ;
-(AMSURLRequestEncoder *)encoder;
-(void)setSignpostIdentifier:(unsigned long long)arg1 ;
@end
