/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/VCObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject;

@interface VCDispatchTimer : VCObject {

	/*^block*/id _callbackBlock;
	NSObject*<OS_dispatch_source> _timer;
	unsigned _intervalSeconds;
	BOOL _running;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) id callbackBlock;              //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,readonly) BOOL isRunning;                //@synthesize running=_running - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)isRunning;
-(id)callbackBlock;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 clientQueue:(id)arg3 ;
-(id)initWithIntervalSeconds:(unsigned)arg1 callbackBlock:(/*^block*/id)arg2 ;
@end

