/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class HMFUnfairLock, NSMutableDictionary, NSDate, NSObject, HMDPersistentStore;

@interface HMDEventFlagsManager : HMFObject {

	HMFUnfairLock* _lock;
	BOOL _saving;
	NSMutableDictionary* _eventFlags;
	NSMutableDictionary* _definedEventPeriods;
	NSDate* _lastSaveTime;
	unsigned long long _saveCount;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDPersistentStore* _persistentStore;

}

@property (nonatomic,retain) NSMutableDictionary * eventFlags;                       //@synthesize eventFlags=_eventFlags - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * definedEventPeriods;              //@synthesize definedEventPeriods=_definedEventPeriods - In the implementation block
@property (nonatomic,retain) NSDate * lastSaveTime;                                  //@synthesize lastSaveTime=_lastSaveTime - In the implementation block
@property (assign,nonatomic) unsigned long long saveCount;                           //@synthesize saveCount=_saveCount - In the implementation block
@property (assign,getter=isSaving,nonatomic) BOOL saving;                            //@synthesize saving=_saving - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;               //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDPersistentStore * persistentStore;                           //@synthesize persistentStore=_persistentStore - In the implementation block
+(id)sharedEventFlagsManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDPersistentStore *)persistentStore;
-(id)initWithPersistentStore:(id)arg1 ;
-(NSMutableDictionary *)eventFlags;
-(void)_save;
-(void)setSaving:(BOOL)arg1 ;
-(unsigned long long)fetchEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)shiftEventFlagsForRequestGroup:(id)arg1 ;
-(void)forceSave;
-(void)defineEventPeriod:(double)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 ;
-(void)setEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)defineEventPeriod:(double)arg1 forEventNames:(id)arg2 requestGroup:(id)arg3 ;
-(void)logDiskWriteState;
-(void)setLastSaveTime:(NSDate *)arg1 ;
-(void)_performOnUpdate;
-(BOOL)isSaving;
-(NSDate *)lastSaveTime;
-(void)setSaveCount:(unsigned long long)arg1 ;
-(unsigned long long)saveCount;
-(id)unarchivedEventFlags;
-(void)_setEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)_defineEventPeriod:(double)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 ;
-(unsigned long long)_fetchEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(id)_fetchEventFlagsForRequestGroup:(id)arg1 ;
-(id)_fetchAllEventFlags;
-(id)_fetchAllDefinedEventPeriods;
-(void)_shiftEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)_resetEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)archiveEventFlagsWithEventFlagsSnapshot:(id)arg1 definedEventPeriodsSnapshot:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setEventFlagsForEventNames:(id)arg1 requestGroup:(id)arg2 ;
-(id)fetchEventFlagsForRequestGroup:(id)arg1 ;
-(id)fetchAllEventFlags;
-(id)fetchAllEventPeriodsDefinedForEventFlags;
-(void)shiftEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)resetEventFlagForEventName:(id)arg1 requestGroup:(id)arg2 ;
-(void)resetEventFlagsForRequestGroup:(id)arg1 ;
-(void)setEventFlags:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)definedEventPeriods;
-(void)setDefinedEventPeriods:(NSMutableDictionary *)arg1 ;
@end

