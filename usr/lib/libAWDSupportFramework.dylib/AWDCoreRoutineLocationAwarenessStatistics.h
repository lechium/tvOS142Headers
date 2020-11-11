/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDCoreRoutineLocationAwarenessBasicHistogram;

@interface AWDCoreRoutineLocationAwarenessStatistics : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestInterrupted;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithCoarseLocation;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceDisabled;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _activeRequestTimeoutWithOtherReasons;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _skippedRequestDueToRecentFix;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _skippedRequestDueToStationary;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedCount;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedMaxSeconds;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _timerFiringDelayedTotalSeconds;
	AWDCoreRoutineLocationAwarenessBasicHistogram* _validLocationCount;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                                                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                                                                                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasTimerFiringCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringCount;                                                                 //@synthesize timerFiringCount=_timerFiringCount - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestCount;                                                               //@synthesize activeRequestCount=_activeRequestCount - In the implementation block
@property (nonatomic,readonly) BOOL hasValidLocationCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * validLocationCount;                                                               //@synthesize validLocationCount=_validLocationCount - In the implementation block
@property (nonatomic,readonly) BOOL hasTimerFiringDelayedCount; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedCount;                                                          //@synthesize timerFiringDelayedCount=_timerFiringDelayedCount - In the implementation block
@property (nonatomic,readonly) BOOL hasTimerFiringDelayedTotalSeconds; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedTotalSeconds;                                                   //@synthesize timerFiringDelayedTotalSeconds=_timerFiringDelayedTotalSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasTimerFiringDelayedMaxSeconds; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * timerFiringDelayedMaxSeconds;                                                     //@synthesize timerFiringDelayedMaxSeconds=_timerFiringDelayedMaxSeconds - In the implementation block
@property (nonatomic,readonly) BOOL hasSkippedRequestDueToRecentFix; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * skippedRequestDueToRecentFix;                                                     //@synthesize skippedRequestDueToRecentFix=_skippedRequestDueToRecentFix - In the implementation block
@property (nonatomic,readonly) BOOL hasSkippedRequestDueToStationary; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * skippedRequestDueToStationary;                                                    //@synthesize skippedRequestDueToStationary=_skippedRequestDueToStationary - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestTimeoutWithCoarseLocation; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithCoarseLocation;                                           //@synthesize activeRequestTimeoutWithCoarseLocation=_activeRequestTimeoutWithCoarseLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestTimeoutWithLocationServiceDisabled; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceDisabled;                                  //@synthesize activeRequestTimeoutWithLocationServiceDisabled=_activeRequestTimeoutWithLocationServiceDisabled - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;                    //@synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled=_activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;              //@synthesize activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff=_activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestTimeoutWithOtherReasons; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestTimeoutWithOtherReasons;                                             //@synthesize activeRequestTimeoutWithOtherReasons=_activeRequestTimeoutWithOtherReasons - In the implementation block
@property (nonatomic,readonly) BOOL hasActiveRequestInterrupted; 
@property (nonatomic,retain) AWDCoreRoutineLocationAwarenessBasicHistogram * activeRequestInterrupted;                                                         //@synthesize activeRequestInterrupted=_activeRequestInterrupted - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setTimerFiringCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setValidLocationCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedCount:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedTotalSeconds:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setTimerFiringDelayedMaxSeconds:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setSkippedRequestDueToRecentFix:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setSkippedRequestDueToStationary:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithCoarseLocation:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceDisabled:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestTimeoutWithOtherReasons:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(void)setActiveRequestInterrupted:(AWDCoreRoutineLocationAwarenessBasicHistogram *)arg1 ;
-(BOOL)hasTimerFiringCount;
-(BOOL)hasActiveRequestCount;
-(BOOL)hasValidLocationCount;
-(BOOL)hasTimerFiringDelayedCount;
-(BOOL)hasTimerFiringDelayedTotalSeconds;
-(BOOL)hasTimerFiringDelayedMaxSeconds;
-(BOOL)hasSkippedRequestDueToRecentFix;
-(BOOL)hasSkippedRequestDueToStationary;
-(BOOL)hasActiveRequestTimeoutWithCoarseLocation;
-(BOOL)hasActiveRequestTimeoutWithLocationServiceDisabled;
-(BOOL)hasActiveRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
-(BOOL)hasActiveRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
-(BOOL)hasActiveRequestTimeoutWithOtherReasons;
-(BOOL)hasActiveRequestInterrupted;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)validLocationCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedCount;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedTotalSeconds;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)timerFiringDelayedMaxSeconds;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)skippedRequestDueToRecentFix;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)skippedRequestDueToStationary;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithCoarseLocation;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceDisabled;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceEnabledRoutineDisabled;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithLocationServiceEnabledRoutineEnabledWifiOff;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestTimeoutWithOtherReasons;
-(AWDCoreRoutineLocationAwarenessBasicHistogram *)activeRequestInterrupted;
@end

