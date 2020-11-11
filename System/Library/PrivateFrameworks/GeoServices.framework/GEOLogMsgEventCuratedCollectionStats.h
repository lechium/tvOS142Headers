/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventCuratedCollectionStats : PBCodable <NSCopying> {

	SCD_Struct_GE87* _savedCollectionMuids;

}

@property (nonatomic,readonly) unsigned long long savedCollectionMuidsCount; 
@property (nonatomic,readonly) unsigned long long* savedCollectionMuids; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)addSavedCollectionMuids:(unsigned long long)arg1 ;
-(unsigned long long)savedCollectionMuidsCount;
-(void)clearSavedCollectionMuids;
-(unsigned long long)savedCollectionMuidsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long*)savedCollectionMuids;
-(void)setSavedCollectionMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
@end

