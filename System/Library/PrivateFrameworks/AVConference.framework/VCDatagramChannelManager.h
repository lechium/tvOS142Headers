/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCDatagramChannelManager : NSObject {

	opaque_pthread_mutex_t _stateLock;
	unsigned _nextToken;
	/*^block*/id _readHandler;
	NSMutableDictionary* _datagramChannels;
	NSMutableDictionary* _destinations;

}

@property (copy) id readHandler;              //@synthesize readHandler=_readHandler - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)setReadHandler:(id)arg1 ;
-(BOOL)setupDatagramChannel:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)removeDatagramChannel:(id)arg1 ;
-(id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2 ;
-(id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)datagramChannelWithChannelToken:(unsigned)arg1 ;
-(void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(/*^block*/id)arg2 ;
-(id)readHandler;
@end

