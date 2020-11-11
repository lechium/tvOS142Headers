/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Security.framework/Security
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Security/SFSQLite.h>

@class NSArray, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite

@property (readonly) NSArray * hardFailures; 
@property (readonly) NSArray * softFailures; 
@property (readonly) NSArray * allEvents; 
@property (readonly) NSArray * samples; 
@property (retain) NSDate * uploadDate; 
+(id)storeWithPath:(id)arg1 schema:(id)arg2 ;
-(void)dealloc;
-(BOOL)tryToOpenDatabase;
-(long long)successCountForEventType:(id)arg1 ;
-(void)incrementSuccessCountForEventType:(id)arg1 ;
-(long long)hardFailureCountForEventType:(id)arg1 ;
-(long long)softFailureCountForEventType:(id)arg1 ;
-(void)incrementHardFailureCountForEventType:(id)arg1 ;
-(void)incrementSoftFailureCountForEventType:(id)arg1 ;
-(id)summaryCounts;
-(id)deserializedRecords:(id)arg1 ;
-(NSArray *)hardFailures;
-(NSArray *)softFailures;
-(NSArray *)allEvents;
-(NSArray *)samples;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 timestampBucket:(unsigned)arg3 ;
-(void)addEventDict:(id)arg1 toTable:(id)arg2 ;
-(void)addSample:(id)arg1 forName:(id)arg2 ;
-(void)removeAllSamplesForName:(id)arg1 ;
-(NSDate *)uploadDate;
-(void)setUploadDate:(NSDate *)arg1 ;
-(void)clearAllData;
@end

