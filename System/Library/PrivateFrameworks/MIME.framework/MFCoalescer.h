/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <MIME/MIME-Structs.h>
@class NSObject;

@interface MFCoalescer : NSObject {

	/*^block*/id _coalescerAction;
	os_unfair_lock_s _lock;
	id _coalescedValue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _coalescer;

}
-(id)init;
-(void)dealloc;
-(void)_handleCoalesceEvent;
-(id)initWithCoalescingAction:(/*^block*/id)arg1 ;
-(void)coalesceValue:(id)arg1 ;
@end
