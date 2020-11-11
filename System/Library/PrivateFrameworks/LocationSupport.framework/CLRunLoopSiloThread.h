/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LocationSupport/LocationSupport-Structs.h>
@class NSRunLoop, NSThread;

@interface CLRunLoopSiloThread : NSObject {

	opaque_pthread_t* _threadId;
	NSRunLoop* _underlyingRunLoop;
	NSThread* _underlyingThread;
	BOOL _shouldCancelThread;

}

@property (nonatomic,readonly) opaque_pthread_t* threadId;                 //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) NSRunLoop * underlyingRunLoop;              //@synthesize underlyingRunLoop=_underlyingRunLoop - In the implementation block
@property (nonatomic,readonly) NSThread * underlyingThread;                //@synthesize underlyingThread=_underlyingThread - In the implementation block
@property (nonatomic,readonly) BOOL shouldCancelThread;                    //@synthesize shouldCancelThread=_shouldCancelThread - In the implementation block
-(id)init;
-(void)dealloc;
-(opaque_pthread_t*)threadId;
-(id)initWithRunLoop:(CFRunLoopRef)arg1 ;
-(id)initWithCurrentThread;
-(NSRunLoop *)underlyingRunLoop;
-(NSThread *)underlyingThread;
-(BOOL)shouldCancelThread;
@end

