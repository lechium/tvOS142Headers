/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class OSLogEventStore, NSDateFormatter, OSLogEventStream, NSString;

@interface _DASLogExtractor : NSObject {

	OSLogEventStore* _logStore;
	NSDateFormatter* _dateFormatter;
	OSLogEventStream* _eventStream;
	NSString* _subsystem;
	NSString* _category;

}

@property (nonatomic,retain) OSLogEventStore * logStore;                   //@synthesize logStore=_logStore - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) OSLogEventStream * eventStream;               //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,retain) NSString * subsystem;                         //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,retain) NSString * category;                          //@synthesize category=_category - In the implementation block
+(id)extractorForArchive:(id)arg1 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSString *)subsystem;
-(OSLogEventStream *)eventStream;
-(void)setSubsystem:(NSString *)arg1 ;
-(void)setEventStream:(OSLogEventStream *)arg1 ;
-(id)initWithArchive:(id)arg1 ;
-(id)getDefaultFilterPredicate;
-(id)getPolicyDenialReasonsFromMessage:(id)arg1 ;
-(id)getpolicyToIntervals:(id)arg1 ;
-(id)summarizePolicyDenialsOverMessages:(id)arg1 maxDuration:(double)arg2 ;
-(id)descriptionOfPolicyToIntervalsMap:(id)arg1 ;
-(id)getIncompatibilityReasons:(id)arg1 forActivity:(id)arg2 ;
-(id)descriptionOfIncompatibilityDenials:(id)arg1 ;
-(id)getInstancesOfHigherThreshold:(id)arg1 forActivity:(id)arg2 ;
-(id)descriptionOfHigherThresholds:(id)arg1 ;
-(id)getScheduledBlocksOfMessages:(id)arg1 forActivity:(id)arg2 ;
-(id)getMessagesBeforeRunning:(id)arg1 forActivity:(id)arg2 ;
-(id)summarizeAllDenialsOverMessages:(id)arg1 forActivity:(id)arg2 detail:(BOOL)arg3 ;
-(id)getActivityStartBeforeDate:(id)arg1 forActivity:(id)arg2 ;
-(BOOL)didActivityRun:(id)arg1 forActivity:(id)arg2 ;
-(id)getMessagesAfterRunning:(id)arg1 forActivity:(id)arg2 ;
-(id)summarizeRuntimeOverMessages:(id)arg1 forActivity:(id)arg2 ;
-(BOOL)didActivityFinish:(id)arg1 forActivity:(id)arg2 ;
-(id)copyActivitySummary:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(BOOL)arg4 error:(int*)arg5 ;
-(int)handleLogEventsLogEvents:(id)arg1 sinceDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)getSummaryFromLogs:(id)arg1 forActivity:(id)arg2 detail:(BOOL)arg3 ;
-(id)objectForTrigger:(id)arg1 fromCondition:(id)arg2 compactRepresentation:(BOOL)arg3 ;
-(void)addConditionToHistory:(id)arg1 fromMessage:(id)arg2 atTimestamp:(id)arg3 compactRepresentation:(BOOL)arg4 ;
-(int)summarizeActivity:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 detail:(BOOL)arg4 ;
-(int)sysConditionsLog:(BOOL)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(OSLogEventStore *)logStore;
-(void)setLogStore:(OSLogEventStore *)arg1 ;
@end

