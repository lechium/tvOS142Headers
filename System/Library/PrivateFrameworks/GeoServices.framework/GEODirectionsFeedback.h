/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _alightNotificationFeedbacks;
	NSData* _directionResponseID;
	NSMutableArray* _guidanceFeedbacks;
	NSMutableArray* _modalitys;
	NSMutableArray* _stepFeedbacks;
	NSMutableArray* _trafficRerouteFeedbacks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isCarplayConnected;
	struct {
		unsigned has_isCarplayConnected : 1;
		unsigned read_alightNotificationFeedbacks : 1;
		unsigned read_directionResponseID : 1;
		unsigned read_guidanceFeedbacks : 1;
		unsigned read_modalitys : 1;
		unsigned read_stepFeedbacks : 1;
		unsigned read_trafficRerouteFeedbacks : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID; 
@property (nonatomic,retain) NSMutableArray * stepFeedbacks; 
@property (nonatomic,retain) NSMutableArray * trafficRerouteFeedbacks; 
@property (nonatomic,retain) NSMutableArray * alightNotificationFeedbacks; 
@property (nonatomic,retain) NSMutableArray * guidanceFeedbacks; 
@property (nonatomic,retain) NSMutableArray * modalitys; 
@property (assign,nonatomic) BOOL hasIsCarplayConnected; 
@property (assign,nonatomic) BOOL isCarplayConnected; 
+(BOOL)isValid:(id)arg1 ;
+(Class)stepFeedbackType;
+(Class)trafficRerouteFeedbackType;
+(Class)alightNotificationFeedbackType;
+(Class)guidanceFeedbackType;
+(Class)modalityType;
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
-(NSData *)directionResponseID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(BOOL)hasDirectionResponseID;
-(void)addStepFeedback:(id)arg1 ;
-(void)addTrafficRerouteFeedback:(id)arg1 ;
-(void)addAlightNotificationFeedback:(id)arg1 ;
-(void)addGuidanceFeedback:(id)arg1 ;
-(void)addModality:(id)arg1 ;
-(void)setIsCarplayConnected:(BOOL)arg1 ;
-(unsigned long long)stepFeedbacksCount;
-(void)clearStepFeedbacks;
-(id)stepFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)trafficRerouteFeedbacksCount;
-(void)clearTrafficRerouteFeedbacks;
-(id)trafficRerouteFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alightNotificationFeedbacksCount;
-(void)clearAlightNotificationFeedbacks;
-(id)alightNotificationFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)guidanceFeedbacksCount;
-(void)clearGuidanceFeedbacks;
-(id)guidanceFeedbackAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)modalitysCount;
-(void)clearModalitys;
-(id)modalityAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)stepFeedbacks;
-(void)setStepFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)trafficRerouteFeedbacks;
-(void)setTrafficRerouteFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)alightNotificationFeedbacks;
-(void)setAlightNotificationFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)guidanceFeedbacks;
-(void)setGuidanceFeedbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)modalitys;
-(void)setModalitys:(NSMutableArray *)arg1 ;
-(BOOL)isCarplayConnected;
-(void)setHasIsCarplayConnected:(BOOL)arg1 ;
-(BOOL)hasIsCarplayConnected;
@end

