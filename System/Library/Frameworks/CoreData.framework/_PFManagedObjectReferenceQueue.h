/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectContext;

@interface _PFManagedObjectReferenceQueue : NSObject {

	int _cd_rc;
	os_unfair_lock_s _spinLock;
	int _flags;
	int _signalRunloop;
	NSManagedObjectContext* _context;
	CFArrayRef _queue;
	CFRunLoopObserverRef _rlObserver;
	int _processing;

}
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(void)dealloc;
-(void)finalize;
@end

