/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	BOOL _deleted;
	BOOL _edited;
	BOOL _shared;
	BOOL _tapped;
	BOOL _visible;
	struct {
		unsigned has_proactiveItemType : 1;
		unsigned has_timeSinceStart : 1;
		unsigned has_deleted : 1;
		unsigned has_edited : 1;
		unsigned has_shared : 1;
		unsigned has_tapped : 1;
		unsigned has_visible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType; 
@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart; 
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL hasTapped; 
@property (assign,nonatomic) BOOL tapped; 
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared; 
@property (assign,nonatomic) BOOL hasEdited; 
@property (assign,nonatomic) BOOL edited; 
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted; 
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
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)shared;
-(void)setShared:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setTapped:(BOOL)arg1 ;
-(void)setEdited:(BOOL)arg1 ;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasProactiveItemType:(BOOL)arg1 ;
-(BOOL)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(int)timeSinceStart;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(BOOL)tapped;
-(void)setHasTapped:(BOOL)arg1 ;
-(BOOL)hasTapped;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(BOOL)edited;
-(void)setHasEdited:(BOOL)arg1 ;
-(BOOL)hasEdited;
-(BOOL)deleted;
-(void)setHasDeleted:(BOOL)arg1 ;
-(BOOL)hasDeleted;
@end

