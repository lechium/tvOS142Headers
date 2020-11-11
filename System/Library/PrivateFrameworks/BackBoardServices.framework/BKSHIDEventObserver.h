/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSObject, NSMapTable, NSSet, BSServiceConnection;

@interface BKSHIDEventObserver : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	NSMapTable* _lock_deferringAssertionsToObservers;
	NSSet* _lock_deferringResolutions;
	BSServiceConnection* _connection;

}

@property (nonatomic,readonly) NSSet * deferringResolutions; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(id)addDeferringObserver:(id)arg1 ;
-(NSSet *)deferringResolutions;
-(void)_lock_enableObservation;
-(void)_lock_disableObservation;
-(void)didUpdateDeferringResolutions:(id)arg1 ;
@end

