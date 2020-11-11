/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaUserSpeechDuration : PBCodable {

	long long _durationMs;
	NSString* _resultCandidateId;
	SCD_Struct_SI1 _has;
	BOOL _hasResultCandidateId;

}

@property (assign,nonatomic) long long durationMs;                    //@synthesize durationMs=_durationMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurationMs; 
@property (nonatomic,copy) NSString * resultCandidateId;              //@synthesize resultCandidateId=_resultCandidateId - In the implementation block
@property (assign,nonatomic) BOOL hasResultCandidateId;               //@synthesize hasResultCandidateId=_hasResultCandidateId - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setDurationMs:(long long)arg1 ;
-(long long)durationMs;
-(void)setHasDurationMs:(BOOL)arg1 ;
-(BOOL)hasDurationMs;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasResultCandidateId;
-(void)setHasResultCandidateId:(BOOL)arg1 ;
@end

