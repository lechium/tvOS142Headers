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

@class PBDataReader, NSString;

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOSessionID _sessionId;
	NSString* _sourceAppBundleId;
	NSString* _uriScheme;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_sessionId : 1;
		unsigned read_sourceAppBundleId : 1;
		unsigned read_uriScheme : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSessionId; 
@property (assign,nonatomic) GEOSessionID sessionId; 
@property (nonatomic,readonly) BOOL hasSourceAppBundleId; 
@property (nonatomic,retain) NSString * sourceAppBundleId; 
@property (nonatomic,readonly) BOOL hasUriScheme; 
@property (nonatomic,retain) NSString * uriScheme; 
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
-(void)setSessionId:(GEOSessionID)arg1 ;
-(BOOL)hasSessionId;
-(GEOSessionID)sessionId;
-(void)setHasSessionId:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSString *)sourceAppBundleId;
-(NSString *)uriScheme;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setUriScheme:(NSString *)arg1 ;
-(BOOL)hasSourceAppBundleId;
-(BOOL)hasUriScheme;
@end

