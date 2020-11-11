/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/GEOResourceLoadOperation.h>
@class NSData;


@protocol GEOResourceLoadOperation <NSObject,NSProgressReporting>
@property (assign,nonatomic) BOOL requiresWiFi; 
@property (assign,nonatomic) BOOL preferDirectNetworking; 
@property (nonatomic,readonly) NSData * data; 
@required
-(NSData *)data;
-(void)cancel;
-(void)setRequiresWiFi:(BOOL)arg1;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 eTag:(id)arg3 auditToken:(id)arg4 baseURL:(id)arg5 alternateURLs:(id)arg6 proxyURL:(id)arg7 log:(id)arg8;
-(BOOL)requiresWiFi;
-(BOOL)preferDirectNetworking;
-(void)setPreferDirectNetworking:(BOOL)arg1;

@end


@protocol OS_dispatch_queue, GEORequestCounterTicket, OS_os_log;
@class NSData, NSURL, NSObject, NSURLSession, NSURLSessionTask, NSString, NSMutableData, GEOApplicationAuditToken, GEOReportedProgress, NSDate, NSProgress;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation> {

	NSURL* _url;
	NSURL* _proxyURL;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSURLSession* _session;
	NSURLSessionTask* _task;
	id<GEORequestCounterTicket> _requestCounterTicket;
	NSString* _eTag;
	NSMutableData* _data;
	BOOL _expectsPartialContent;
	GEOApplicationAuditToken* _auditToken;
	NSURL* _authProxyURL;
	os_unfair_lock_s _lock;
	BOOL _requiresWiFi;
	BOOL _preferDirectNetworking;
	GEOReportedProgress* _progress;
	NSObject*<OS_os_log> _log;
	NSString* _serviceAddress;
	NSDate* _starttime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresWiFi;                        //@synthesize requiresWiFi=_requiresWiFi - In the implementation block
@property (assign,nonatomic) BOOL preferDirectNetworking;              //@synthesize preferDirectNetworking=_preferDirectNetworking - In the implementation block
@property (nonatomic,readonly) NSData * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) NSProgress * progress; 
-(void)dealloc;
-(NSData *)data;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)cancel;
-(NSProgress *)progress;
-(void)setRequiresWiFi:(BOOL)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 callbackQueue:(id)arg2 ;
-(id)initWithResource:(id)arg1 existingPartialData:(id)arg2 eTag:(id)arg3 auditToken:(id)arg4 baseURL:(id)arg5 alternateURLs:(id)arg6 proxyURL:(id)arg7 log:(id)arg8 ;
-(BOOL)requiresWiFi;
-(BOOL)preferDirectNetworking;
-(void)setPreferDirectNetworking:(BOOL)arg1 ;
@end
