/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeToLeaveInitialTravelTimeFeedbackCollection : PBCodable <NSCopying> {

	int _travelTime;
	struct {
		unsigned has_travelTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTravelTime; 
@property (assign,nonatomic) int travelTime; 
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
-(void)setTravelTime:(int)arg1 ;
-(int)travelTime;
-(void)setHasTravelTime:(BOOL)arg1 ;
-(BOOL)hasTravelTime;
-(id)travelTimeAsString:(int)arg1 ;
-(int)StringAsTravelTime:(id)arg1 ;
@end
