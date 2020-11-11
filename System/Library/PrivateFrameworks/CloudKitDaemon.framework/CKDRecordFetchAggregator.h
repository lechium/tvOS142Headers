/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class CKDRecordCache, NSDictionary, NSSet, NSObject, NSMutableDictionary, CKDFetchRecordsOperation;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {

	CKDRecordCache* _recordCache;
	BOOL _useRecordCache;
	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	BOOL _started;
	BOOL _markedToFinishByParent;
	BOOL _forceDecryptionAttempt;
	/*^block*/id _fetchAggregatorCompletionBlock;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSSet* _desiredKeys;
	NSObject*<OS_dispatch_source> _recordReadySource;
	NSObject*<OS_dispatch_queue> _fetchQueue;
	NSObject*<OS_dispatch_source> _fetchSource;
	NSObject*<OS_dispatch_group> _fetchGroup;
	NSMutableDictionary* _fetchInfosByOrder;
	unsigned long long _curFetchOrder;
	unsigned long long _highestReturnedOrder;
	CKDFetchRecordsOperation* _currentFetchOp;

}

@property (assign,nonatomic) BOOL fetchAssetContents;                                            //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                              //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> recordReadySource;                    //@synthesize recordReadySource=_recordReadySource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;                            //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> fetchSource;                          //@synthesize fetchSource=_fetchSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchGroup;                            //@synthesize fetchGroup=_fetchGroup - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchInfosByOrder;                            //@synthesize fetchInfosByOrder=_fetchInfosByOrder - In the implementation block
@property (assign) unsigned long long curFetchOrder;                                             //@synthesize curFetchOrder=_curFetchOrder - In the implementation block
@property (assign) unsigned long long highestReturnedOrder;                                      //@synthesize highestReturnedOrder=_highestReturnedOrder - In the implementation block
@property (assign,nonatomic,__weak) CKDFetchRecordsOperation * currentFetchOp;                   //@synthesize currentFetchOp=_currentFetchOp - In the implementation block
@property (nonatomic,readonly) CKDRecordCache * recordCache; 
@property (assign) BOOL started;                                                                 //@synthesize started=_started - In the implementation block
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;                         //@synthesize markedToFinishByParent=_markedToFinishByParent - In the implementation block
@property (assign,nonatomic) BOOL forceDecryptionAttempt;                                        //@synthesize forceDecryptionAttempt=_forceDecryptionAttempt - In the implementation block
@property (assign,nonatomic) BOOL useRecordCache;                                                //@synthesize useRecordCache=_useRecordCache - In the implementation block
@property (nonatomic,copy) id fetchAggregatorCompletionBlock;                                    //@synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock - In the implementation block
-(id)description;
-(void)dealloc;
-(void)main;
-(BOOL)started;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(id)CKPropertiesDescription;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSSet *)desiredKeys;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchGroup;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)fetchRecords:(id)arg1 withPerRecordCompletion:(/*^block*/id)arg2 ;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(void)setFetchAggregatorCompletionBlock:(id)arg1 ;
-(void)finishIfAppropriate;
-(BOOL)supportsClearAssetEncryption;
-(NSObject*<OS_dispatch_source>)recordReadySource;
-(void)setRecordReadySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
-(BOOL)forceDecryptionAttempt;
-(void)setForceDecryptionAttempt:(BOOL)arg1 ;
-(void)_recordFetchesAvailable;
-(void)_flushFetchedRecordsToConsumerLocked;
-(BOOL)useRecordCache;
-(NSMutableDictionary *)fetchInfosByOrder;
-(unsigned long long)highestReturnedOrder;
-(void)setHighestReturnedOrder:(unsigned long long)arg1 ;
-(void)_performCallbackForFetchInfoLocked:(id)arg1 ;
-(void)_flushFetchedRecordsToConsumerOrderedLocked;
-(void)_flushFetchedRecordsToConsumerNoOrderingLocked;
-(CKDFetchRecordsOperation *)currentFetchOp;
-(void)setUseRecordCache:(BOOL)arg1 ;
-(void)setCurrentFetchOp:(CKDFetchRecordsOperation *)arg1 ;
-(NSObject*<OS_dispatch_source>)fetchSource;
-(void)_lockedSendFetchRequest;
-(BOOL)isMarkedToFinishByParent;
-(void)_finishRecordFetchAggregator;
-(unsigned long long)curFetchOrder;
-(void)setCurFetchOrder:(unsigned long long)arg1 ;
-(CKDRecordCache *)recordCache;
-(id)_fetchRecord:(id)arg1 recordReadyHandle:(BOOL*)arg2 withRecordCompletion:(/*^block*/id)arg3 ;
-(void)_addRecordFetchInfos:(id)arg1 ;
-(void)setMarkedToFinishByParent:(BOOL)arg1 ;
-(id)fetchAggregatorCompletionBlock;
-(void)setFetchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setFetchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setFetchInfosByOrder:(NSMutableDictionary *)arg1 ;
@end

