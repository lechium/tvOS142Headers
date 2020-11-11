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

@class PBDataReader, NSString, GEOTimeToLeaveMapLaunch;

@interface GEOLogMsgEventMapLaunch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _launchUri;
	NSString* _sourceAppId;
	GEOTimeToLeaveMapLaunch* _timeToLeave;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_launchUri : 1;
		unsigned read_sourceAppId : 1;
		unsigned read_timeToLeave : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSourceAppId; 
@property (nonatomic,retain) NSString * sourceAppId; 
@property (nonatomic,readonly) BOOL hasLaunchUri; 
@property (nonatomic,retain) NSString * launchUri; 
@property (nonatomic,readonly) BOOL hasTimeToLeave; 
@property (nonatomic,retain) GEOTimeToLeaveMapLaunch * timeToLeave; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setSourceAppId:(NSString *)arg1 ;
-(void)setLaunchUri:(NSString *)arg1 ;
-(void)setTimeToLeave:(GEOTimeToLeaveMapLaunch *)arg1 ;
-(GEOTimeToLeaveMapLaunch *)timeToLeave;
-(NSString *)sourceAppId;
-(NSString *)launchUri;
-(BOOL)hasSourceAppId;
-(BOOL)hasLaunchUri;
-(BOOL)hasTimeToLeave;
@end

