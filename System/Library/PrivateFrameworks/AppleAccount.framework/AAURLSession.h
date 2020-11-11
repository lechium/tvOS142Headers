/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol OS_dispatch_queue;
@class NSURLSession, NSObject, NSMutableDictionary, NSString;

@interface AAURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	BOOL _requiresSigning;
	NSURLSession* _session;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	NSMutableDictionary* _pendingSessionOperations;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSession;
+(id)sharedSigningSession;
-(id)init;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)dataTaskWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)bodyTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initForProxiedDevice:(id)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_initRequiringSigning:(BOOL)arg1 ;
-(id)_enqueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sessionQueue_enqueueTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_sessionQueue_updateTask:(id)arg1 withData:(id)arg2 ;
-(void)_sessionQueue_dequeueTask:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)resetSessionCache;
-(id)bodyTaskWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

