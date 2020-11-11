/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:07:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FBSWorkspaceFencing.h>

@protocol OS_dispatch_queue;
@class NSObject, FBSSerialQueue, BSMutableIntegerMap, BSMutableIntegerSet, NSString;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing> {

	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _callOutQueue;
	unsigned long long _signpostName;
	BSMutableIntegerMap* _triggerToFenceNameMap;
	BSMutableIntegerSet* _triggersToIgnore;
	BOOL _synchronizingFence;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestSystemAnimationFence;
-(BOOL)isTrackingAnySystemAnimationFence;
-(BOOL)trackSystemAnimationFence:(id)arg1 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 ;
@end

