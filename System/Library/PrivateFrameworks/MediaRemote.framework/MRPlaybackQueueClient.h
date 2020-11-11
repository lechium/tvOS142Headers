/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface MRPlaybackQueueClient : NSObject {

	NSMutableDictionary* _controllers;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)_handlePlayerPathRemovedNotification:(id)arg1 ;
-(void)_handleApplicationRemovedNotification:(id)arg1 ;
-(void)_handleOriginRemovedNotification:(id)arg1 ;
-(id)subscriptionControllerForPlayerPath:(id)arg1 ;
@end

