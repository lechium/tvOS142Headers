/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class PETSchemaPETRawMessage, NSData;

@interface PETSchemaPETAggregationKey : PBCodable {

	int _type;
	unsigned _datestamp;
	double _bucket;
	PETSchemaPETRawMessage* _raw_message;
	SCD_Struct_LT0 _has;
	BOOL _hasRaw_message;

}

@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned datestamp;                                //@synthesize datestamp=_datestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDatestamp; 
@property (assign,nonatomic) double bucket;                                     //@synthesize bucket=_bucket - In the implementation block
@property (assign,nonatomic) BOOL hasBucket; 
@property (nonatomic,retain) PETSchemaPETRawMessage * raw_message;              //@synthesize raw_message=_raw_message - In the implementation block
@property (assign,nonatomic) BOOL hasRaw_message;                               //@synthesize hasRaw_message=_hasRaw_message - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)initWithJSON:(id)arg1 ;
-(void)setDatestamp:(unsigned)arg1 ;
-(void)setHasDatestamp:(BOOL)arg1 ;
-(BOOL)hasDatestamp;
-(void)setBucket:(double)arg1 ;
-(void)setHasBucket:(BOOL)arg1 ;
-(BOOL)hasBucket;
-(unsigned)datestamp;
-(double)bucket;
-(NSData *)jsonData;
-(void)setRaw_message:(PETSchemaPETRawMessage *)arg1 ;
-(PETSchemaPETRawMessage *)raw_message;
-(BOOL)hasRaw_message;
-(void)setHasRaw_message:(BOOL)arg1 ;
@end

