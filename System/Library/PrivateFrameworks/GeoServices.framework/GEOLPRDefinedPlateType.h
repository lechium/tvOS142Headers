/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEOLPRDefinedPlateType : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _conditions;
	NSString* _desc;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,retain) NSMutableArray * conditions; 
@property (nonatomic,readonly) BOOL hasDesc; 
@property (nonatomic,retain) NSString * desc; 
+(BOOL)isValid:(id)arg1 ;
+(Class)conditionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)desc;
-(void)addConditions:(id)arg1 ;
-(void)setDesc:(NSString *)arg1 ;
-(unsigned long long)conditionsCount;
-(void)clearConditions;
-(id)conditionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)conditions;
-(void)setConditions:(NSMutableArray *)arg1 ;
-(BOOL)hasDesc;
@end

