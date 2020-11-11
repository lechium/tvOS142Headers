/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONavCameraState;

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying> {

	double _distanceToDestination;
	GEONavCameraState* _navCameraState;
	int _lineType;
	int _navState;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasLineType; 
@property (assign,nonatomic) int lineType; 
@property (assign,nonatomic) BOOL hasNavState; 
@property (assign,nonatomic) int navState; 
@property (assign,nonatomic) BOOL hasDistanceToDestination; 
@property (assign,nonatomic) double distanceToDestination; 
@property (nonatomic,readonly) BOOL hasNavCameraState; 
@property (nonatomic,retain) GEONavCameraState * navCameraState; 
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
-(int)lineType;
-(GEONavCameraState *)navCameraState;
-(void)setLineType:(int)arg1 ;
-(void)setNavState:(int)arg1 ;
-(void)setDistanceToDestination:(double)arg1 ;
-(void)setNavCameraState:(GEONavCameraState *)arg1 ;
-(void)setHasLineType:(BOOL)arg1 ;
-(BOOL)hasLineType;
-(id)lineTypeAsString:(int)arg1 ;
-(int)StringAsLineType:(id)arg1 ;
-(int)navState;
-(void)setHasNavState:(BOOL)arg1 ;
-(BOOL)hasNavState;
-(id)navStateAsString:(int)arg1 ;
-(int)StringAsNavState:(id)arg1 ;
-(double)distanceToDestination;
-(void)setHasDistanceToDestination:(BOOL)arg1 ;
-(BOOL)hasDistanceToDestination;
-(BOOL)hasNavCameraState;
@end

