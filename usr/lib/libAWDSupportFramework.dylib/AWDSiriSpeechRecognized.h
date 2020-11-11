/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {

	unsigned long long _durationFromVoiceRecordingEnd;
	unsigned long long _durationFromVoiceSendEnd;
	unsigned long long _timestamp;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurationFromVoiceRecordingEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceRecordingEnd;              //@synthesize durationFromVoiceRecordingEnd=_durationFromVoiceRecordingEnd - In the implementation block
@property (assign,nonatomic) BOOL hasDurationFromVoiceSendEnd; 
@property (assign,nonatomic) unsigned long long durationFromVoiceSendEnd;                   //@synthesize durationFromVoiceSendEnd=_durationFromVoiceSendEnd - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDurationFromVoiceRecordingEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceRecordingEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceRecordingEnd;
-(void)setDurationFromVoiceSendEnd:(unsigned long long)arg1 ;
-(void)setHasDurationFromVoiceSendEnd:(BOOL)arg1 ;
-(BOOL)hasDurationFromVoiceSendEnd;
-(unsigned long long)durationFromVoiceRecordingEnd;
-(unsigned long long)durationFromVoiceSendEnd;
@end

