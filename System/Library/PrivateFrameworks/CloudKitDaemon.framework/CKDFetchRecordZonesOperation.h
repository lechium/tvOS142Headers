/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation {

	BOOL _isFetchAllRecordZonesOperation;
	BOOL _shouldRetry;
	BOOL _onlyFetchPCSInfo;
	BOOL _ignorePCSFailures;
	/*^block*/id _recordZoneFetchedProgressBlock;
	NSArray* _recordZoneIDs;
	NSMutableDictionary* _zonesToSaveForPCSUpdateByZoneID;
	NSMutableArray* _zoneIDsNeedingPCSUpdateRetry;
	NSMutableDictionary* _pcsUpdateErrorsByZoneID;
	long long _numZoneSaveAttempts;
	NSMutableSet* _zoneIDsNeedingDugongKeyRoll;

}

@property (assign,nonatomic) unsigned long long state; 
@property (nonatomic,retain) NSArray * recordZoneIDs;                                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllRecordZonesOperation;                                                //@synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zonesToSaveForPCSUpdateByZoneID;                              //@synthesize zonesToSaveForPCSUpdateByZoneID=_zonesToSaveForPCSUpdateByZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldRetry;                                                                   //@synthesize shouldRetry=_shouldRetry - In the implementation block
@property (nonatomic,retain) NSMutableArray * zoneIDsNeedingPCSUpdateRetry;                                      //@synthesize zoneIDsNeedingPCSUpdateRetry=_zoneIDsNeedingPCSUpdateRetry - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsUpdateErrorsByZoneID;                                      //@synthesize pcsUpdateErrorsByZoneID=_pcsUpdateErrorsByZoneID - In the implementation block
@property (assign,nonatomic) long long numZoneSaveAttempts;                                                      //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL onlyFetchPCSInfo;                                                              //@synthesize onlyFetchPCSInfo=_onlyFetchPCSInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * zoneIDsNeedingDugongKeyRoll;                                         //@synthesize zoneIDsNeedingDugongKeyRoll=_zoneIDsNeedingDugongKeyRoll - In the implementation block
@property (assign,nonatomic) BOOL ignorePCSFailures;                                                             //@synthesize ignorePCSFailures=_ignorePCSFailures - In the implementation block
@property (nonatomic,retain) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,copy) id recordZoneFetchedProgressBlock;                                                    //@synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock - In the implementation block
-(void)main;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(id)relevantZoneIDs;
-(void)setIsFetchAllRecordZonesOperation:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)isFetchAllRecordZonesOperation;
-(BOOL)ignorePCSFailures;
-(void)setIgnorePCSFailures:(BOOL)arg1 ;
-(void)setShouldRetry:(BOOL)arg1 ;
-(BOOL)shouldRetry;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordZoneFetchedProgressBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(BOOL)makeStateTransition;
-(void)setOnlyFetchPCSInfo:(BOOL)arg1 ;
-(BOOL)onlyFetchPCSInfo;
-(long long)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(long long)arg1 ;
-(void)_sendErrorForFailedZones;
-(void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3 ;
-(void)checkPCSIdentity;
-(void)fetchZonesFromServer;
-(void)saveZonesWithUpdatedZonePCS;
-(NSMutableArray *)zoneIDsNeedingPCSUpdateRetry;
-(NSMutableDictionary *)zonesToSaveForPCSUpdateByZoneID;
-(NSMutableDictionary *)pcsUpdateErrorsByZoneID;
-(void)_locked_callbackForRecordZone:(id)arg1 zoneID:(id)arg2 error:(id)arg3 ;
-(NSMutableSet *)zoneIDsNeedingDugongKeyRoll;
-(id)recordZoneFetchedProgressBlock;
-(void)_cachePCSOnRecordZone:(id)arg1 ;
-(void)_handleRecordZoneSaved:(id)arg1 error:(id)arg2 ;
-(void)_continueHandlingFetchedRecordZone:(id)arg1 zoneID:(id)arg2 ;
-(BOOL)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)arg1 error:(id*)arg2 ;
-(void)setZonesToSaveForPCSUpdateByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsNeedingPCSUpdateRetry:(NSMutableArray *)arg1 ;
-(void)setPcsUpdateErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(void)setZoneIDsNeedingDugongKeyRoll:(NSMutableSet *)arg1 ;
@end

