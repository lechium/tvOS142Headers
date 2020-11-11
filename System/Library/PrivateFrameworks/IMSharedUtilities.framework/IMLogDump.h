/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMLogDump : NSObject {

	BOOL _shouldCollectPowerWifiStats;
	NSObject*<OS_dispatch_queue> _logDumpQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> logDumpQueue;              //@synthesize logDumpQueue=_logDumpQueue - In the implementation block
@property (nonatomic,readonly) BOOL shouldCollectPowerWifiStats;                       //@synthesize shouldCollectPowerWifiStats=_shouldCollectPowerWifiStats - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)_isOnPower;
-(void)printSyncDurationStats;
-(void)printPowerAndWifiStats;
-(NSObject*<OS_dispatch_queue>)logDumpQueue;
-(void)dumpMOCLoggingMetaData;
-(void)printIfWeAreInTheMiddleOfASync;
-(void)clearSyncStats;
-(BOOL)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withPredicate:(id)arg3 withError:(id*)arg4 ;
-(id)_lastHoursToAppend:(int)arg1 ;
-(id)_predicateToAppend:(id)arg1 ;
-(BOOL)shouldCollectPowerWifiStats;
-(double)_calculateMinutesSyncingWithDurationKey:(id)arg1 attemptDateKey:(id)arg2 ;
-(BOOL)_isWifiUsable;
-(id)_dictionaryForDayKey:(id)arg1 ;
-(void)_calculateConnectedMinutesForDateKey:(id)arg1 durationKey:(id)arg2 daysDictionary:(id)arg3 totalDurationDictionary:(id)arg4 totalDurationKey:(id)arg5 ;
-(id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg1 ;
-(void)_incrementSyncAttemptsWithKey:(id)arg1 syncDateKey:(id)arg2 ;
-(void)_noteSyncEndedForDurationKey:(id)arg1 dateKey:(id)arg2 ;
-(void)_compressAndDeleteFilesAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 includeCKDebug:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)logShowCommandToFilePath:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3 ;
-(void)_includeCloudKitDebugFilesAtPath:(id)arg1 ;
-(void)incrementCoreDuetSyncAttempts;
-(void)incrementAHDASyncAttempts;
-(void)noteCoreDuetSyncEnded;
-(void)noteAHDASyncEnded;
-(id)createTodaysStatisticDictionaryIfNeeded;
@end

