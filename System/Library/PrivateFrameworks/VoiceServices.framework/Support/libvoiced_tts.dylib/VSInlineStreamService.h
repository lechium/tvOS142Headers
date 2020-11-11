/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;

@interface VSInlineStreamService : NSObject {

	NSMutableDictionary* _queuedNotification;
	NSMutableSet* _ongoingNotifications;
	NSMutableArray* _streamRequestQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	opaque_pthread_mutexattr_t _recursiveLockAttr;
	opaque_pthread_mutex_t _lock;

}

@property (nonatomic,retain) NSMutableDictionary * queuedNotification;                  //@synthesize queuedNotification=_queuedNotification - In the implementation block
@property (nonatomic,retain) NSMutableSet * ongoingNotifications;                       //@synthesize ongoingNotifications=_ongoingNotifications - In the implementation block
@property (nonatomic,retain) NSMutableArray * streamRequestQueue;                       //@synthesize streamRequestQueue=_streamRequestQueue - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t lock;                               //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutexattr_t recursiveLockAttr;              //@synthesize recursiveLockAttr=_recursiveLockAttr - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                  //@synthesize notifyQueue=_notifyQueue - In the implementation block
+(id)sharedService;
-(id)init;
-(void)dealloc;
-(opaque_pthread_mutex_t)lock;
-(void)setLock:(opaque_pthread_mutex_t)arg1 ;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)popInlineStreamRequestForSpeakRequest:(id)arg1 ;
-(void)addInlineStreamRequest:(id)arg1 ;
-(void)enqueueStreamId:(id)arg1 withObject:(id)arg2 ;
-(void)removeStreamId:(id)arg1 ;
-(void)startStreamingWithId:(id)arg1 ;
-(NSMutableArray *)streamRequestQueue;
-(NSMutableSet *)ongoingNotifications;
-(NSMutableDictionary *)queuedNotification;
-(void)setQueuedNotification:(NSMutableDictionary *)arg1 ;
-(void)setOngoingNotifications:(NSMutableSet *)arg1 ;
-(void)setStreamRequestQueue:(NSMutableArray *)arg1 ;
-(opaque_pthread_mutexattr_t)recursiveLockAttr;
-(void)setRecursiveLockAttr:(opaque_pthread_mutexattr_t)arg1 ;
@end

