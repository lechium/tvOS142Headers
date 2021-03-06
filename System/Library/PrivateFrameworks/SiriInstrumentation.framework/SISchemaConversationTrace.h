/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaConversationTrace : PBCodable {

	NSData* _previousTurnID;
	BOOL _hasPreviousTurnID;

}

@property (nonatomic,copy) NSData * previousTurnID;               //@synthesize previousTurnID=_previousTurnID - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousTurnID;              //@synthesize hasPreviousTurnID=_hasPreviousTurnID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPreviousTurnID:(NSData *)arg1 ;
-(NSData *)previousTurnID;
-(BOOL)hasPreviousTurnID;
-(void)setHasPreviousTurnID:(BOOL)arg1 ;
@end

