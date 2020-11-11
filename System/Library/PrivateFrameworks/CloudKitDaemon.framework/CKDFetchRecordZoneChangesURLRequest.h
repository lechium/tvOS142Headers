/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>
#import <libobjc.A.dylib/CKDURLRequestPipelining.h>

@class NSArray, NSDictionary, NSSet, NSMutableDictionary, NSMutableArray, NSString;

@interface CKDFetchRecordZoneChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {

	BOOL _shouldFetchAssetContent;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	long long _changeTypes;
	NSSet* _desiredAssetKeys;
	/*^block*/id _recordsChangedBlock;
	/*^block*/id _recordDeletedBlock;
	NSMutableDictionary* _zoneIDsByRequestOperationUUID;
	NSMutableDictionary* _requestResultsByRecordZoneID;
	NSMutableDictionary* _nodeErrorsByZoneID;
	NSMutableArray* _recordResponses;

}

@property (nonatomic,copy) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                      //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * zoneIDsByRequestOperationUUID;              //@synthesize zoneIDsByRequestOperationUUID=_zoneIDsByRequestOperationUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestResultsByRecordZoneID;               //@synthesize requestResultsByRecordZoneID=_requestResultsByRecordZoneID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nodeErrorsByZoneID;                         //@synthesize nodeErrorsByZoneID=_nodeErrorsByZoneID - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordResponses;                                 //@synthesize recordResponses=_recordResponses - In the implementation block
@property (assign,nonatomic) long long changeTypes;                                            //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                     //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSSet * desiredAssetKeys;                                         //@synthesize desiredAssetKeys=_desiredAssetKeys - In the implementation block
@property (nonatomic,copy) id recordsChangedBlock;                                             //@synthesize recordsChangedBlock=_recordsChangedBlock - In the implementation block
@property (nonatomic,copy) id recordDeletedBlock;                                              //@synthesize recordDeletedBlock=_recordDeletedBlock - In the implementation block
@property (nonatomic,readonly) NSDictionary * resultsByRecordZoneID; 
@property (nonatomic,readonly) NSDictionary * zoneErrorsByZoneID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(void)setChangeTypes:(long long)arg1 ;
-(long long)changeTypes;
-(void)setRecordDeletedBlock:(id)arg1 ;
-(void)setDesiredAssetKeys:(NSSet *)arg1 ;
-(id)generateRequestOperations;
-(BOOL)requestGETPreAuth;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(BOOL)allowsAnonymousAccount;
-(id)zoneIDsToLock;
-(void)requestDidComplete;
-(NSSet *)desiredAssetKeys;
-(NSMutableArray *)recordResponses;
-(void)setRecordResponses:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)nodeErrorsByZoneID;
-(NSMutableDictionary *)requestResultsByRecordZoneID;
-(NSMutableDictionary *)zoneIDsByRequestOperationUUID;
-(id)initWithOperation:(id)arg1 recordZoneIDs:(id)arg2 configurationsByRecordZoneID:(id)arg3 ;
-(NSDictionary *)zoneErrorsByZoneID;
-(NSDictionary *)resultsByRecordZoneID;
-(void)setZoneIDsByRequestOperationUUID:(NSMutableDictionary *)arg1 ;
-(void)setRequestResultsByRecordZoneID:(NSMutableDictionary *)arg1 ;
-(void)setNodeErrorsByZoneID:(NSMutableDictionary *)arg1 ;
-(id)recordDeletedBlock;
-(void)setRecordsChangedBlock:(id)arg1 ;
-(id)recordsChangedBlock;
-(id)_handleRecordChanges:(id)arg1 ;
@end

