/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_workloop;
@class NSObject;

@interface PLQueueDispatcher : NSObject {

	NSObject*<OS_dispatch_queue> _uiQueue;
	NSObject*<OS_dispatch_queue> _utilityQueue;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	NSObject*<OS_dispatch_queue> _sharedUtilityQueue;
	NSObject*<OS_dispatch_queue> _sharedBackgroundQueue;
	NSObject*<OS_dispatch_workloop> _sharedWorkloop;

}
+(id)sharedQueueDispatcher;
-(id)init;
-(void)sync:(/*^block*/id)arg1 ;
-(void)async:(/*^block*/id)arg1 ;
-(id)sharedUtilityQueue;
-(void)_handleUnexpectedQoSClass:(unsigned)arg1 ;
-(id)queueForCurrentQoS;
-(id)sharedBackgroundQueue;
@end
