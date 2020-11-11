/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMBLocalZoneProcessModelContext, HMBModel, NSNumber, NSData, NSUUID, NSString, HMBLocalSQLQueryTable, NSArray;

@interface HMBLocalZoneProcessTuple : HMFObject {

	HMBLocalZoneProcessModelContext* _previousContext;
	HMBLocalZoneProcessModelContext* _mergedContext;
	HMBModel* _updateModel;
	HMBModel* _outputModel;
	NSNumber* _outputBlockRow;
	unsigned long long _recordRow;
	unsigned long long _itemRow;
	NSData* _externalID;
	NSUUID* _modelSchema;
	NSString* _modelType;
	HMBLocalSQLQueryTable* _queryTable;
	NSArray* _encodedQueryableColumns;

}

@property (nonatomic,readonly) HMBLocalZoneProcessModelContext * previousContext;              //@synthesize previousContext=_previousContext - In the implementation block
@property (nonatomic,readonly) HMBLocalZoneProcessModelContext * mergedContext;                //@synthesize mergedContext=_mergedContext - In the implementation block
@property (nonatomic,copy,readonly) HMBModel * updateModel;                                    //@synthesize updateModel=_updateModel - In the implementation block
@property (nonatomic,copy,readonly) HMBModel * outputModel;                                    //@synthesize outputModel=_outputModel - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * outputBlockRow;                                 //@synthesize outputBlockRow=_outputBlockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long recordRow;                                   //@synthesize recordRow=_recordRow - In the implementation block
@property (nonatomic,readonly) unsigned long long itemRow;                                     //@synthesize itemRow=_itemRow - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                                            //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSUUID * modelSchema;                                           //@synthesize modelSchema=_modelSchema - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                                           //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLQueryTable * queryTable;                             //@synthesize queryTable=_queryTable - In the implementation block
@property (nonatomic,readonly) NSArray * encodedQueryableColumns;                              //@synthesize encodedQueryableColumns=_encodedQueryableColumns - In the implementation block
-(NSString *)modelType;
-(NSData *)externalID;
-(NSUUID *)modelSchema;
-(unsigned long long)itemRow;
-(NSNumber *)outputBlockRow;
-(id)initWithPreviousContext:(id)arg1 mergedContext:(id)arg2 updateModel:(id)arg3 outputModel:(id)arg4 outputBlockRow:(id)arg5 recordRow:(unsigned long long)arg6 itemRow:(unsigned long long)arg7 modelSchema:(id)arg8 modelType:(id)arg9 externalID:(id)arg10 queryTable:(id)arg11 ;
-(HMBLocalZoneProcessModelContext *)previousContext;
-(HMBLocalZoneProcessModelContext *)mergedContext;
-(HMBModel *)updateModel;
-(HMBModel *)outputModel;
-(unsigned long long)recordRow;
-(HMBLocalSQLQueryTable *)queryTable;
-(NSArray *)encodedQueryableColumns;
@end

