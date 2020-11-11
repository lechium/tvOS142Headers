/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group;
#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class CKDModifyRecordsOperation, CKRecord, NSObject, CKDRecordPCSData, CKDSharePCSData, NSString, NSError, NSMutableDictionary, CKDProgressTracker, CKDZonePCSData, NSDictionary, CKRecordID, CKDPCSManager, CKDPCSCache;

@interface CKDModifyRecordHandler : NSObject {

	BOOL _isDelete;
	BOOL _saveCompletionBlockCalled;
	BOOL _needsRefetch;
	BOOL _didAttemptZoneWideShareKeyRoll;
	BOOL _didRollRecordPCSMasterKey;
	int _saveAttempts;
	CKDModifyRecordsOperation* _operation;
	CKRecord* _record;
	NSObject*<OS_dispatch_group> _pcsGroup;
	CKDRecordPCSData* _recordPCSData;
	CKDSharePCSData* _sharePCSData;
	CKRecord* _serverRecord;
	NSString* _etag;
	unsigned long long _state;
	NSError* _error;
	NSMutableDictionary* _rereferencedAssetArrayByFieldname;
	CKDProgressTracker* _progressTracker;
	long long _batchRank;
	CKDZonePCSData* _sharedZonePCSData;
	NSDictionary* _assetUUIDToExpectedProperties;
	CKRecordID* _recordID;

}

@property (nonatomic,retain) CKRecord * record;                                                    //@synthesize record=_record - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) BOOL isDelete;                                                        //@synthesize isDelete=_isDelete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pcsGroup;                                //@synthesize pcsGroup=_pcsGroup - In the implementation block
@property (nonatomic,readonly) CKDPCSManager * pcsManager; 
@property (nonatomic,readonly) CKDPCSCache * pcsCache; 
@property (assign,nonatomic) BOOL didRollRecordPCSMasterKey;                                       //@synthesize didRollRecordPCSMasterKey=_didRollRecordPCSMasterKey - In the implementation block
@property (assign,nonatomic,__weak) CKDModifyRecordsOperation * operation;                         //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) CKDRecordPCSData * recordPCSData;                                     //@synthesize recordPCSData=_recordPCSData - In the implementation block
@property (nonatomic,retain) CKDSharePCSData * sharePCSData;                                       //@synthesize sharePCSData=_sharePCSData - In the implementation block
@property (nonatomic,retain) CKRecord * serverRecord;                                              //@synthesize serverRecord=_serverRecord - In the implementation block
@property (nonatomic,retain) NSString * etag;                                                      //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * rereferencedAssetArrayByFieldname;              //@synthesize rereferencedAssetArrayByFieldname=_rereferencedAssetArrayByFieldname - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;                                 //@synthesize progressTracker=_progressTracker - In the implementation block
@property (assign,nonatomic) long long batchRank;                                                  //@synthesize batchRank=_batchRank - In the implementation block
@property (assign,nonatomic) int saveAttempts;                                                     //@synthesize saveAttempts=_saveAttempts - In the implementation block
@property (assign,nonatomic) BOOL saveCompletionBlockCalled;                                       //@synthesize saveCompletionBlockCalled=_saveCompletionBlockCalled - In the implementation block
@property (nonatomic,readonly) BOOL isShare; 
@property (assign,nonatomic) BOOL needsRefetch;                                                    //@synthesize needsRefetch=_needsRefetch - In the implementation block
@property (nonatomic,retain) CKDZonePCSData * sharedZonePCSData;                                   //@synthesize sharedZonePCSData=_sharedZonePCSData - In the implementation block
@property (assign,nonatomic) BOOL didAttemptZoneWideShareKeyRoll;                                  //@synthesize didAttemptZoneWideShareKeyRoll=_didAttemptZoneWideShareKeyRoll - In the implementation block
@property (nonatomic,copy) NSDictionary * assetUUIDToExpectedProperties;                           //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
+(id)_stringForState:(unsigned long long)arg1 ;
+(id)modifyHandlerWithRecord:(id)arg1 operation:(id)arg2 ;
+(id)modifyHandlerForDeleteWithRecordID:(id)arg1 operation:(id)arg2 ;
-(id)description;
-(NSError *)error;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(CKDModifyRecordsOperation *)operation;
-(void)setOperation:(CKDModifyRecordsOperation *)arg1 ;
-(NSString *)etag;
-(BOOL)isDelete;
-(CKRecordID *)recordID;
-(void)setEtag:(NSString *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSDictionary *)assetUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(CKDPCSManager *)pcsManager;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(CKDPCSCache *)pcsCache;
-(CKDSharePCSData *)sharePCSData;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(id)_initWithRecord:(id)arg1 operation:(id)arg2 ;
-(id)_initForDeleteWithRecordID:(id)arg1 operation:(id)arg2 ;
-(void)setSharedZonePCSData:(CKDZonePCSData *)arg1 ;
-(NSObject*<OS_dispatch_group>)pcsGroup;
-(void)prepareForSave;
-(void)setDidAttemptZoneWideShareKeyRoll:(BOOL)arg1 ;
-(CKDZonePCSData *)sharedZonePCSData;
-(void)clearProtectionDataForRecord;
-(void)setServerRecord:(CKRecord *)arg1 ;
-(void)savePCSDataToCache;
-(BOOL)isShare;
-(id)sideEffectRecordIDs;
-(void)noteSideEffectRecordPendingModify:(id)arg1 ;
-(void)noteSideEffectRecordAbsent:(id)arg1 ;
-(void)noteSideEffectRecordPendingDelete:(id)arg1 ;
-(void)fetchSharePCSData;
-(id)_initCommonWithOperation:(id)arg1 ;
-(void)_loadPCSData;
-(void)_fetchPCSData;
-(void)_unwrapRecordPCSForZone;
-(void)_unwrapRecordPCSWithShareID:(id)arg1 ;
-(void)_unwrapRecordPCSForParent;
-(void)_addShareToPCSData:(id)arg1 withError:(id)arg2 ;
-(BOOL)_useZoneishPCS;
-(void)_reallyFetchPCSDataWithOptions:(unsigned long long)arg1 ;
-(void)_createAndSavePCS;
-(int)saveAttempts;
-(CKDRecordPCSData *)recordPCSData;
-(void)_keyRollIfNeededForRecordPCSData:(id)arg1 withError:(id)arg2 ;
-(BOOL)didAttemptZoneWideShareKeyRoll;
-(void)_reallyAddShareToPCSData:(id)arg1 withError:(id)arg2 ;
-(void)_fetchSharePCSForID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)didRollRecordPCSMasterKey;
-(void)setDidRollRecordPCSMasterKey:(BOOL)arg1 ;
-(void)_fetchParentPCSForData:(id)arg1 withError:(id)arg2 ;
-(id)_addParentPCS:(id)arg1 toRecordPCS:(id)arg2 ;
-(void)_handlePCSData:(id)arg1 withError:(id)arg2 ;
-(void)_continueCreateAndSavePCSWithZonePCS:(id)arg1 sharePCS:(id)arg2 ;
-(BOOL)_canSetPreviousProtectionEtag;
-(void)_fetchExistingPCSForProvidedPCSData:(id)arg1 ;
-(void)_fetchParentPCSForID:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_clearRecordProtectionDataForRecord;
-(BOOL)_createPublicSharingKeyWithError:(id*)arg1 ;
-(void)setRecordPCSData:(CKDRecordPCSData *)arg1 ;
-(BOOL)_prepareAsset:(id)arg1 recordKey:(id)arg2 record:(id)arg3 error:(id*)arg4 ;
-(long long)batchRank;
-(void)prepareStreamingAsset:(id)arg1 forUploadWithRecord:(id)arg2 ;
-(BOOL)_wrapEncryptedDataOnRecord:(id)arg1 ;
-(BOOL)_wrapEncryptedData:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 forField:(id)arg3 recordID:(id)arg4 ;
-(void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg1 ;
-(BOOL)_wrapEncryptedDataForRecordValueStore:(id)arg1 withPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)fetchRecordPCSData;
-(id)assetsWhichNeedRecordFetch;
-(id)prepareAssetsForUploadWithError:(id*)arg1 ;
-(void)setPcsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(CKRecord *)serverRecord;
-(void)setIsDelete:(BOOL)arg1 ;
-(NSMutableDictionary *)rereferencedAssetArrayByFieldname;
-(void)setRereferencedAssetArrayByFieldname:(NSMutableDictionary *)arg1 ;
-(void)setBatchRank:(long long)arg1 ;
-(void)setSaveAttempts:(int)arg1 ;
-(BOOL)saveCompletionBlockCalled;
-(void)setSaveCompletionBlockCalled:(BOOL)arg1 ;
-(BOOL)needsRefetch;
-(void)setNeedsRefetch:(BOOL)arg1 ;
@end
