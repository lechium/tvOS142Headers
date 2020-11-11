/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCPlaybackEngineEventStreamSubscription.h>

@protocol MPCPlaybackEngineEventConsumer;
@class MPCPlaybackEngineEventStream, NSMutableDictionary, NSString;

@interface _MPCPlaybackEngineEventStreamSubscription : NSObject <MPCPlaybackEngineEventStreamSubscription> {

	os_unfair_lock_s _lock;
	id<MPCPlaybackEngineEventConsumer> _consumer;
	MPCPlaybackEngineEventStream* _eventStream;
	unsigned long long _lastEventSuccessTimestamp;
	NSMutableDictionary* _mutatingEventHandlers;
	NSMutableDictionary* _immediateEventHandlers;
	NSMutableDictionary* _eventHandlers;

}

@property (nonatomic,__weak,readonly) id<MPCPlaybackEngineEventConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngineEventStream * eventStream;               //@synthesize eventStream=_eventStream - In the implementation block
@property (assign,nonatomic) unsigned long long lastEventSuccessTimestamp;                      //@synthesize lastEventSuccessTimestamp=_lastEventSuccessTimestamp - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutatingEventHandlers;                     //@synthesize mutatingEventHandlers=_mutatingEventHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * immediateEventHandlers;                    //@synthesize immediateEventHandlers=_immediateEventHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventHandlers;                             //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)debugDescription;
-(id<MPCPlaybackEngineEventConsumer>)consumer;
-(MPCPlaybackEngineEventStream *)eventStream;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)eventHandlers;
-(void)subscribeToEventType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithConsumer:(id)arg1 eventStream:(id)arg2 ;
-(unsigned long long)lastEventSuccessTimestamp;
-(void)setLastEventSuccessTimestamp:(unsigned long long)arg1 ;
-(NSMutableDictionary *)mutatingEventHandlers;
-(NSMutableDictionary *)immediateEventHandlers;
-(void)_onQueue_flush;
-(void)cancelSubscription;
@end

