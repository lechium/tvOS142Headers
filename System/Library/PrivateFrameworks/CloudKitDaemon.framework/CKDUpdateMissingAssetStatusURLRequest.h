/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecordID, NSArray;

@interface CKDUpdateMissingAssetStatusURLRequest : CKDURLRequest {

	BOOL _recovered;
	BOOL _isPackage;
	CKRecordID* _repairRecordID;
	NSArray* _assetSizes;
	NSArray* _assetPutReceipts;

}

@property (nonatomic,copy) CKRecordID * repairRecordID;               //@synthesize repairRecordID=_repairRecordID - In the implementation block
@property (assign,nonatomic) BOOL recovered;                          //@synthesize recovered=_recovered - In the implementation block
@property (assign,nonatomic) BOOL isPackage;                          //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,retain) NSArray * assetSizes;                    //@synthesize assetSizes=_assetSizes - In the implementation block
@property (nonatomic,retain) NSArray * assetPutReceipts;              //@synthesize assetPutReceipts=_assetPutReceipts - In the implementation block
-(BOOL)isPackage;
-(void)setRepairRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)repairRecordID;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setRecovered:(BOOL)arg1 ;
-(BOOL)recovered;
-(void)setIsPackage:(BOOL)arg1 ;
-(NSArray *)assetSizes;
-(void)setAssetSizes:(NSArray *)arg1 ;
-(NSArray *)assetPutReceipts;
-(void)setAssetPutReceipts:(NSArray *)arg1 ;
-(id)initWithOperation:(id)arg1 unrecoveredRepairRecordID:(id)arg2 ;
-(id)initWithOperation:(id)arg1 recoveredAssetRepairRecordID:(id)arg2 size:(unsigned long long)arg3 putReceipt:(id)arg4 ;
-(id)initWithOperation:(id)arg1 recoveredPackageRepairRecordID:(id)arg2 sizes:(id)arg3 putReceipts:(id)arg4 ;
-(id)initWithOperation:(id)arg1 repairRecordID:(id)arg2 recovered:(BOOL)arg3 package:(BOOL)arg4 sizes:(id)arg5 putReceipts:(id)arg6 ;
@end

