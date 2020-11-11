/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PETDistribution, PETAggregationKey;

@interface PETAggregatedMessage : PBCodable <NSCopying> {

	unsigned _count;
	PETDistribution* _distribution;
	PETAggregationKey* _key;
	SCD_Struct_PE5 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) PETAggregationKey * key;                     //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL hasDistribution; 
@property (nonatomic,retain) PETDistribution * distribution;              //@synthesize distribution=_distribution - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(PETAggregationKey *)key;
-(id)dictionaryRepresentation;
-(void)setCount:(unsigned)arg1 ;
-(void)setKey:(PETAggregationKey *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(BOOL)hasKey;
-(BOOL)hasDistribution;
-(PETDistribution *)distribution;
-(void)setDistribution:(PETDistribution *)arg1 ;
@end

