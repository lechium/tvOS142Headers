/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AVCallbackCancellation;
#import <AVFCore/AVFCore-Structs.h>
@class AVQueuePlayer, AVPlayerItem, NSMutableArray, NSObject, NSError, AVWeakReference;

@interface AVPlayerLooperInternal : NSObject {

	AVQueuePlayer* loopingPlayer;
	AVPlayerItem* loopingItem;
	NSMutableArray* loopingItemCopies;
	SCD_Struct_AV7 loopRange;
	long long loopCount;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	long long playerOriginalActionAtItemEnd;
	SCD_Struct_AV6 forwardPlaybackStartTime;
	AVPlayerItem* lastEnqueuedLoopingItem;
	BOOL waitingForLastLoopingCopyToFinish;
	long long status;
	NSError* error;
	id<AVCallbackCancellation> playerCurrentItemKVOInvoker;
	NSMutableArray* loopingItemStatusKVOInvokers;
	AVWeakReference* weakReference;
	BOOL listeningForItemFailedToPlayToEndTime;

}
@end

