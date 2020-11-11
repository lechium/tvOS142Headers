/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _NSURLSessionEventDelegate, OS_dispatch_queue, _NSURLSessionHTTPRewriter;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSMutableDictionary;

@interface __CFN_GlobalMetrics : NSObject {

	os_unfair_lock_s lock;
	id<_NSURLSessionEventDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<_NSURLSessionEventDelegate> _forwardingDelegate;
	NSMutableDictionary* _defaultSessionMetrics;
	NSMutableDictionary* _ephemeralSessionMetrics;
	NSMutableDictionary* _backgroundSessionMetrics;
	id<_NSURLSessionHTTPRewriter> _HTTPRewriter;

}
-(id)init;
@end

