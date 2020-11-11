/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ICPlayActivityController;

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	ICPlayActivityController* _playActivityController;

}

@property (nonatomic,readonly) ICPlayActivityController * playActivityController;              //@synthesize playActivityController=_playActivityController - In the implementation block
-(id)init;
-(void)execute;
-(id)initWithPlayActivityController:(id)arg1 ;
-(ICPlayActivityController *)playActivityController;
@end
