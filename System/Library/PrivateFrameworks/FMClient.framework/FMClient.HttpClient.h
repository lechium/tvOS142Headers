/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@interface FMClient.HttpClient : NSObject <NSURLSessionDelegate> {

	 authenticationChallengeHandler;
	 httpSuccessCodeMin;
	 httpSuccessCodeMax;
	 endpoint;
	 statusCodeHandlers;
	 statusCodeHandlerQueue;
	 $__lazy_storage_$_session;

}
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
@end

