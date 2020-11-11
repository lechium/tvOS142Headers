/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <CacheDelete/CacheDelete-Structs.h>
@class NSString, NSObject;

@interface CDRemoveEventsConsumer : NSObject {

	BOOL _historyDone;
	NSString* _identifier;
	/*^block*/id _consumer;
	FSEventStreamRef _stream;
	NSObject*<OS_dispatch_semaphore> _sem;
	NSObject*<OS_dispatch_queue> _consumer_q;
	NSString* _volume;
	fsid _fsid;
	unsigned long long _since;

}

@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id consumer;                                            //@synthesize consumer=_consumer - In the implementation block
@property (assign) FSEventStreamRef stream;                                        //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sem;                 //@synthesize sem=_sem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> consumer_q;              //@synthesize consumer_q=_consumer_q - In the implementation block
@property (nonatomic,retain) NSString * volume;                                    //@synthesize volume=_volume - In the implementation block
@property (assign) BOOL historyDone;                                               //@synthesize historyDone=_historyDone - In the implementation block
@property (assign) fsid fsid;                                                      //@synthesize fsid=_fsid - In the implementation block
@property (assign) unsigned long long since;                                       //@synthesize since=_since - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(FSEventStreamRef)stream;
-(void)setConsumer:(id)arg1 ;
-(id)consumer;
-(NSObject*<OS_dispatch_semaphore>)sem;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(BOOL)historyDone;
-(NSObject*<OS_dispatch_queue>)consumer_q;
-(void)setFsid:(fsid)arg1 ;
-(void)setStream:(FSEventStreamRef)arg1 ;
-(id)initWithConsumer:(/*^block*/id)arg1 identifier:(id)arg2 ;
-(void)callback:(id)arg1 ;
-(void)consumeStream:(FSEventStreamRef)arg1 forVolume:(id)arg2 ;
-(void)setSem:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setConsumer_q:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setHistoryDone:(BOOL)arg1 ;
-(fsid)fsid;
-(unsigned long long)since;
-(void)setSince:(unsigned long long)arg1 ;
@end

