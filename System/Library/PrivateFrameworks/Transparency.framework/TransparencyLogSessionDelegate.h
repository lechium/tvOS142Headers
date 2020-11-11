/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@protocol OS_dispatch_workloop;
@class KTContextStore, KTLogClient, TransparencyManagedDataStore, NSObject, NSString;

@interface TransparencyLogSessionDelegate : NSObject <NSURLSessionDelegate> {

	KTContextStore* _contextStore;
	KTLogClient* _logClient;
	TransparencyManagedDataStore* _dataStore;
	NSObject*<OS_dispatch_workloop> _workloop;

}

@property (retain) TransparencyManagedDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) NSObject*<OS_dispatch_workloop> workloop;              //@synthesize workloop=_workloop - In the implementation block
@property (retain) KTContextStore * contextStore;                         //@synthesize contextStore=_contextStore - In the implementation block
@property (__weak) KTLogClient * logClient;                               //@synthesize logClient=_logClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(KTContextStore *)contextStore;
-(void)setWorkloop:(NSObject*<OS_dispatch_workloop>)arg1 ;
-(KTLogClient *)logClient;
-(void)setLogClient:(KTLogClient *)arg1 ;
-(void)handleDownloadRecord:(id)arg1 downloadData:(id)arg2 downloadMetadata:(id)arg3 ;
-(void)handleDownloadRecordFailure:(id)arg1 task:(id)arg2 downloadMetadata:(id)arg3 error:(id)arg4 ;
-(id)initWithDataStore:(id)arg1 workloop:(id)arg2 ;
-(void)setContextStore:(KTContextStore *)arg1 ;
@end

