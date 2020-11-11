/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/PFHistoryAnalyzerOptions.h>

@class CKRecordZone, CKSchedulerActivity;

@interface PFCloudKitHistoryAnalyzerOptions : PFHistoryAnalyzerOptions {

	BOOL _includePrivateTransactions;
	CKRecordZone* _recordZone;
	CKSchedulerActivity* _activity;

}

@property (nonatomic,retain) CKRecordZone * recordZone;                    //@synthesize recordZone=_recordZone - In the implementation block
@property (assign,nonatomic) BOOL includePrivateTransactions;              //@synthesize includePrivateTransactions=_includePrivateTransactions - In the implementation block
@property (nonatomic,retain) CKSchedulerActivity * activity;               //@synthesize activity=_activity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CKRecordZone *)recordZone;
-(void)setRecordZone:(CKRecordZone *)arg1 ;
-(id)initWithRecordZone:(id)arg1 ;
-(BOOL)includePrivateTransactions;
-(void)setIncludePrivateTransactions:(BOOL)arg1 ;
-(CKSchedulerActivity *)activity;
-(void)setActivity:(CKSchedulerActivity *)arg1 ;
@end

