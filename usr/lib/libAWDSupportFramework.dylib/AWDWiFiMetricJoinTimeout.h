/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricJoinTimeout : PBCodable <NSCopying> {

	SCD_Struct_AW21* _associationStates;
	SCD_Struct_AW21* _channels;
	SCD_Struct_AW21* _joinClassificationInfos;
	SCD_Struct_AW21* _joinTargetClassificationInfos;
	SCD_Struct_AW21* _totalNumberOfJoinAttempts;
	unsigned _sequence;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasSequence; 
@property (assign,nonatomic) unsigned sequence;                                                    //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned long long joinClassificationInfosCount; 
@property (nonatomic,readonly) unsigned* joinClassificationInfos; 
@property (nonatomic,readonly) unsigned long long joinTargetClassificationInfosCount; 
@property (nonatomic,readonly) unsigned* joinTargetClassificationInfos; 
@property (nonatomic,readonly) unsigned long long associationStatesCount; 
@property (nonatomic,readonly) unsigned* associationStates; 
@property (nonatomic,readonly) unsigned long long channelsCount; 
@property (nonatomic,readonly) unsigned* channels; 
@property (nonatomic,readonly) unsigned long long totalNumberOfJoinAttemptsCount; 
@property (nonatomic,readonly) unsigned* totalNumberOfJoinAttempts; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)setSequence:(unsigned)arg1 ;
-(unsigned)sequence;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasSequence:(BOOL)arg1 ;
-(BOOL)hasSequence;
-(unsigned long long)joinClassificationInfosCount;
-(void)clearJoinClassificationInfos;
-(unsigned)joinClassificationInfoAtIndex:(unsigned long long)arg1 ;
-(void)addJoinClassificationInfo:(unsigned)arg1 ;
-(unsigned long long)joinTargetClassificationInfosCount;
-(void)clearJoinTargetClassificationInfos;
-(unsigned)joinTargetClassificationInfoAtIndex:(unsigned long long)arg1 ;
-(void)addJoinTargetClassificationInfo:(unsigned)arg1 ;
-(unsigned long long)associationStatesCount;
-(void)clearAssociationStates;
-(unsigned)associationStateAtIndex:(unsigned long long)arg1 ;
-(void)addAssociationState:(unsigned)arg1 ;
-(unsigned long long)channelsCount;
-(void)clearChannels;
-(unsigned)channelAtIndex:(unsigned long long)arg1 ;
-(void)addChannel:(unsigned)arg1 ;
-(unsigned long long)totalNumberOfJoinAttemptsCount;
-(void)clearTotalNumberOfJoinAttempts;
-(unsigned)totalNumberOfJoinAttemptsAtIndex:(unsigned long long)arg1 ;
-(void)addTotalNumberOfJoinAttempts:(unsigned)arg1 ;
-(unsigned*)joinClassificationInfos;
-(void)setJoinClassificationInfos:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)joinTargetClassificationInfos;
-(void)setJoinTargetClassificationInfos:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)associationStates;
-(void)setAssociationStates:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)channels;
-(void)setChannels:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)totalNumberOfJoinAttempts;
-(void)setTotalNumberOfJoinAttempts:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

