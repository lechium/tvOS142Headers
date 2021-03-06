/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/OSLog.framework/OSLog
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSEnumerator.h>

@protocol OS_dispatch_semaphore;
@class OSLogEventStream, OSLogEntry, NSObject;

@interface OSLogEnumerator : NSEnumerator {

	OSLogEventStream* _stream;
	OSLogEntry* _next;
	BOOL _done;
	NSObject*<OS_dispatch_semaphore> _pushDone;
	NSObject*<OS_dispatch_semaphore> _handlerDone;

}
-(void)dealloc;
-(id)nextObject;
-(void)_handleInvalidation;
-(id)initWithEventStream:(id)arg1 options:(unsigned long long)arg2 position:(id)arg3 ;
-(void)_handleEventProxy:(id)arg1 ;
@end

