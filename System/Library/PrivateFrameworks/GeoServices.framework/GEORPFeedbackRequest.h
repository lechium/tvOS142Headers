/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOABSecondPartyPlaceRequestClientMetaData, GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, GEORPDebugSettings, NSMutableArray, GEORPFeedbackRequestParameters, GEORPFeedbackUserInfo;

@interface GEORPFeedbackRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOABSecondPartyPlaceRequestClientMetaData* _abClientMetadata;
	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	GEORPDebugSettings* _debugSettings;
	NSMutableArray* _displayLanguages;
	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	GEORPFeedbackUserInfo* _userInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _feedbackRequestType;
	struct {
		unsigned has_feedbackRequestType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_abClientMetadata : 1;
		unsigned read_analyticMetadata : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_clientMetadata : 1;
		unsigned read_debugSettings : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_feedbackRequestParameters : 1;
		unsigned read_userInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeedbackRequestType; 
@property (assign,nonatomic) int feedbackRequestType; 
@property (nonatomic,readonly) BOOL hasFeedbackRequestParameters; 
@property (nonatomic,retain) GEORPFeedbackRequestParameters * feedbackRequestParameters; 
@property (nonatomic,readonly) BOOL hasUserInfo; 
@property (nonatomic,retain) GEORPFeedbackUserInfo * userInfo; 
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata; 
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasAbClientMetadata; 
@property (nonatomic,retain) GEOABSecondPartyPlaceRequestClientMetaData * abClientMetadata; 
@property (nonatomic,readonly) BOOL hasDebugSettings; 
@property (nonatomic,retain) GEORPDebugSettings * debugSettings; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(GEORPFeedbackUserInfo *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUserInfo:(GEORPFeedbackUserInfo *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUserInfo;
-(NSMutableArray *)displayLanguages;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEORPFeedbackRequestParameters *)feedbackRequestParameters;
-(BOOL)isPOIEnrichment;
-(GEOPDClientMetadata *)clientMetadata;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOABSecondPartyPlaceRequestClientMetaData *)abClientMetadata;
-(void)setAbClientMetadata:(GEOABSecondPartyPlaceRequestClientMetaData *)arg1 ;
-(BOOL)hasAbClientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(GEORPClientCapabilities *)clientCapabilities;
-(GEORPDebugSettings *)debugSettings;
-(void)setFeedbackRequestType:(int)arg1 ;
-(void)setFeedbackRequestParameters:(GEORPFeedbackRequestParameters *)arg1 ;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(void)setDebugSettings:(GEORPDebugSettings *)arg1 ;
-(unsigned long long)displayLanguagesCount;
-(void)clearDisplayLanguages;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(int)feedbackRequestType;
-(void)setHasFeedbackRequestType:(BOOL)arg1 ;
-(BOOL)hasFeedbackRequestType;
-(id)feedbackRequestTypeAsString:(int)arg1 ;
-(int)StringAsFeedbackRequestType:(id)arg1 ;
-(BOOL)hasFeedbackRequestParameters;
-(BOOL)hasAnalyticMetadata;
-(BOOL)hasClientMetadata;
-(BOOL)hasClientCapabilities;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasDebugSettings;
-(id)initWithFeedbackRequestParameters:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5 ;
-(void)_sharedInitWithRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
-(void)_initForSubmissionParameters;
-(void)_setupSubmissionParameters;
-(id)initWithFeedbackRequestParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestParameters:(id)arg1 userInfo:(id)arg2 traits:(id)arg3 ;
@end

