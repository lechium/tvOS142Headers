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

@interface GEOLogMsgEventTileSetState : PBCodable <NSCopying> {

	double _durationInOldState;
	double _newCoverage;
	double _oldCoverage;
	int _tileSetStateType;
	struct {
		unsigned has_durationInOldState : 1;
		unsigned has_newCoverage : 1;
		unsigned has_oldCoverage : 1;
		unsigned has_tileSetStateType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState; 
@property (assign,nonatomic) BOOL hasTileSetStateType; 
@property (assign,nonatomic) int tileSetStateType; 
@property (assign,nonatomic) BOOL hasOldCoverage; 
@property (assign,nonatomic) double oldCoverage; 
@property (assign,nonatomic) BOOL hasNewCoverage; 
@property (assign,nonatomic) double newCoverage; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setDurationInOldState:(double)arg1 ;
-(double)durationInOldState;
-(void)setHasDurationInOldState:(BOOL)arg1 ;
-(BOOL)hasDurationInOldState;
-(void)setTileSetStateType:(int)arg1 ;
-(void)setOldCoverage:(double)arg1 ;
-(void)setNewCoverage:(double)arg1 ;
-(int)tileSetStateType;
-(void)setHasTileSetStateType:(BOOL)arg1 ;
-(BOOL)hasTileSetStateType;
-(id)tileSetStateTypeAsString:(int)arg1 ;
-(int)StringAsTileSetStateType:(id)arg1 ;
-(double)oldCoverage;
-(void)setHasOldCoverage:(BOOL)arg1 ;
-(BOOL)hasOldCoverage;
-(double)newCoverage;
-(void)setHasNewCoverage:(BOOL)arg1 ;
-(BOOL)hasNewCoverage;
@end

