/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {

	int _classCounter[32];
	int _classFlags;
	int _intialClassFlags;
	int _everSetClassFlags;
	int _everReportedClassFlags;
	int _lastReportedClassFlags;
	unsigned _dampeningMsecs;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	unsigned _seqno;
	NSMutableDictionary* _foregroundAppObservelist;
	NSMutableDictionary* _perAppMaxRRCTimeSecs;
	BOOL _flowSnapshotActive;
	NSMutableSet* _flowSnapshotApps;
	unsigned _flowSnapshotFlags;
	double _flowSnapshotAccumulatedTCEnabledTime;
	NSDate* _flowSnapshotTCEnabledStartTime;
	BOOL _enabled;
	BOOL _foreground;

}

@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL foreground;                       //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(BOOL)foreground;
-(void)beginTrafficClassFlowSnapshot;
-(void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)configurePolicies:(id)arg1 ;
-(id)infoDir;
-(BOOL)performDisposition:(unsigned)arg1 present:(BOOL)arg2 ;
-(void)noteNewUsage:(unsigned)arg1 ;
-(void)resetTrafficClassFlowSnapshot:(BOOL)arg1 ;
@end

