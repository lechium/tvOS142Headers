/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOPDPlaceQuestionnaireLookupParameters : PBCodable <NSCopying> {

	NSMutableArray* _placeInfos;

}

@property (nonatomic,retain) NSMutableArray * placeInfos; 
+(BOOL)isValid:(id)arg1 ;
+(Class)placeInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addPlaceInfo:(id)arg1 ;
-(unsigned long long)placeInfosCount;
-(void)clearPlaceInfos;
-(id)placeInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)placeInfos;
-(void)setPlaceInfos:(NSMutableArray *)arg1 ;
@end
