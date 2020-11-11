/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying> {

	SISchemaClientAnyEvent* _event;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) BOOL hasTurnContext; 
@property (nonatomic,retain) SISchemaClientTurnContext * turnContext;              //@synthesize turnContext=_turnContext - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) SISchemaClientAnyEvent * event;                       //@synthesize event=_event - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(SISchemaClientAnyEvent *)event;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEvent:(SISchemaClientAnyEvent *)arg1 ;
-(BOOL)hasEvent;
-(id)si_dictionaryRepresentation;
-(void)setTurnContext:(SISchemaClientTurnContext *)arg1 ;
-(BOOL)hasTurnContext;
-(SISchemaClientTurnContext *)turnContext;
@end

