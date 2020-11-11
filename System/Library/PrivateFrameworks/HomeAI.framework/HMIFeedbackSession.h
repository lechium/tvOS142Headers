/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMIHomeKitClient, NSOperationQueue, NSURLSession, NSString;

@interface HMIFeedbackSession : HMFObject <NSURLSessionDelegate, HMFLogging> {

	HMIHomeKitClient* _homeKitClient;
	NSOperationQueue* _operationQueue;
	NSURLSession* _session;
	NSString* _feedbackServiceHost;

}

@property (readonly) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) NSURLSession * session;                         //@synthesize session=_session - In the implementation block
@property (readonly) NSString * feedbackServiceHost;                 //@synthesize feedbackServiceHost=_feedbackServiceHost - In the implementation block
@property (readonly) HMIHomeKitClient * homeKitClient;               //@synthesize homeKitClient=_homeKitClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(NSURLSession *)session;
-(NSOperationQueue *)operationQueue;
-(HMIHomeKitClient *)homeKitClient;
-(NSString *)feedbackServiceHost;
@end

