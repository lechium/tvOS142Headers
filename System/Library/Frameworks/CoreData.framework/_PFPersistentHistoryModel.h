/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface _PFPersistentHistoryModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)ancillaryModelNamespace;
+(unsigned long long)ancillaryEntityOffset;
+(void)_invalidateStaticCaches;
+(unsigned long long)ancillaryEntityCount;
+(id)_tombstonesForEntity:(id)arg1 ;
+(void)resetCaches;
+(BOOL)_hasTombstonesInUserInfo:(id)arg1 ;
+(id)newPersistentHistoryManagedObjectModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(id)newPersistentHistorySQLModelForSQLModel:(id)arg1 options:(id)arg2 ;
+(unsigned long long)_maxCountOfTombstonesInModel:(id)arg1 ;
+(id)_tombstonesColumnsForEntity:(id)arg1 ;
@end

