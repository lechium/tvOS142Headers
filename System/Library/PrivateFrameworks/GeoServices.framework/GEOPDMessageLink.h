/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, NSString, GEOTimezone;

@interface GEOPDMessageLink : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _hoursOfOperations;
	NSString* _messageId;
	NSString* _messageUrl;
	NSString* _navBackgroundColor;
	NSString* _navTintColor;
	GEOTimezone* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _responseTime;
	BOOL _isVerified;
	struct {
		unsigned has_responseTime : 1;
		unsigned has_isVerified : 1;
		unsigned read_unknownFields : 1;
		unsigned read_hoursOfOperations : 1;
		unsigned read_messageId : 1;
		unsigned read_messageUrl : 1;
		unsigned read_navBackgroundColor : 1;
		unsigned read_navTintColor : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId; 
@property (nonatomic,readonly) BOOL hasMessageUrl; 
@property (nonatomic,retain) NSString * messageUrl; 
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime; 
@property (nonatomic,retain) NSMutableArray * hoursOfOperations; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone; 
@property (assign,nonatomic) BOOL hasIsVerified; 
@property (assign,nonatomic) BOOL isVerified; 
@property (nonatomic,readonly) BOOL hasNavBackgroundColor; 
@property (nonatomic,retain) NSString * navBackgroundColor; 
@property (nonatomic,readonly) BOOL hasNavTintColor; 
@property (nonatomic,retain) NSString * navTintColor; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)messageLinkForPlaceData:(id)arg1 ;
+(Class)hoursOfOperationType;
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
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setResponseTime:(int)arg1 ;
-(int)responseTime;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(GEOTimezone *)timezone;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(BOOL)hasTimezone;
-(NSString *)messageUrl;
-(NSString *)navBackgroundColor;
-(NSString *)navTintColor;
-(void)setMessageUrl:(NSString *)arg1 ;
-(void)addHoursOfOperation:(id)arg1 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(void)setNavBackgroundColor:(NSString *)arg1 ;
-(void)setNavTintColor:(NSString *)arg1 ;
-(unsigned long long)hoursOfOperationsCount;
-(void)clearHoursOfOperations;
-(id)hoursOfOperationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMessageId;
-(BOOL)hasMessageUrl;
-(id)responseTimeAsString:(int)arg1 ;
-(int)StringAsResponseTime:(id)arg1 ;
-(NSMutableArray *)hoursOfOperations;
-(void)setHoursOfOperations:(NSMutableArray *)arg1 ;
-(BOOL)isVerified;
-(void)setHasIsVerified:(BOOL)arg1 ;
-(BOOL)hasIsVerified;
-(BOOL)hasNavBackgroundColor;
-(BOOL)hasNavTintColor;
@end

