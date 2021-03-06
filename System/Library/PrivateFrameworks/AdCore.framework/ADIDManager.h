/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/ADSingleton.h>
#import <libobjc.A.dylib/ADIDManager_XPC.h>

@class DSIDRecord, NSDictionary, NSArray;

@interface ADIDManager : ADSingleton <ADIDManager_XPC> {

	DSIDRecord* _activeDSIDRecord;
	NSDictionary* _usageVectors;
	NSArray* _monthlyResetArray;

}

@property (retain) NSArray * monthlyResetArray;                                       //@synthesize monthlyResetArray=_monthlyResetArray - In the implementation block
@property (nonatomic,retain) NSDictionary * usageVectors;                             //@synthesize usageVectors=_usageVectors - In the implementation block
@property (retain) DSIDRecord * activeDSIDRecord;                                     //@synthesize activeDSIDRecord=_activeDSIDRecord - In the implementation block
@property (nonatomic,readonly) long long PersonalizedAdsMonthResetCount; 
+(id)sharedInstance;
-(id)init;
-(id)deviceIdentifiers;
-(BOOL)loadIDs;
-(void)forceReconcile:(/*^block*/id)arg1 ;
-(id)reloadRecords:(id)arg1 ;
-(id)loadFakeRecord:(id)arg1 ;
-(id)dsidRecord:(id)arg1 fromDict:(id)arg2 ;
-(void)setActiveDSIDRecord:(DSIDRecord *)arg1 ;
-(DSIDRecord *)activeDSIDRecord;
-(id)idForClientType:(long long)arg1 ;
-(id)encryptedIDForClientType:(long long)arg1 ;
-(id)readUsageVectors:(id)arg1 ;
-(long long)PersonalizedAdsMonthResetCount;
-(void)reloadRecords:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)logIDs:(id)arg1 ;
-(id)retrieveDeviceIDs;
-(NSDictionary *)usageVectors;
-(void)setUsageVectors:(NSDictionary *)arg1 ;
-(NSArray *)monthlyResetArray;
-(void)setMonthlyResetArray:(NSArray *)arg1 ;
@end

