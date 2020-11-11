/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, AWDHomeKitPredicate;

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying> {

	int _activationState;
	int _activationType;
	NSMutableArray* _events;
	AWDHomeKitPredicate* _predicate;
	BOOL _containsRecurrences;
	BOOL _executeOnce;
	SCD_Struct_AW8 _has;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasExecuteOnce; 
@property (assign,nonatomic) BOOL executeOnce;                             //@synthesize executeOnce=_executeOnce - In the implementation block
@property (assign,nonatomic) BOOL hasContainsRecurrences; 
@property (assign,nonatomic) BOOL containsRecurrences;                     //@synthesize containsRecurrences=_containsRecurrences - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) AWDHomeKitPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) BOOL hasActivationState; 
@property (assign,nonatomic) int activationState;                          //@synthesize activationState=_activationState - In the implementation block
@property (assign,nonatomic) BOOL hasActivationType; 
@property (assign,nonatomic) int activationType;                           //@synthesize activationType=_activationType - In the implementation block
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(AWDHomeKitPredicate *)predicate;
-(void)setPredicate:(AWDHomeKitPredicate *)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)events;
-(int)activationState;
-(void)setExecuteOnce:(BOOL)arg1 ;
-(void)setActivationState:(int)arg1 ;
-(BOOL)executeOnce;
-(int)activationType;
-(void)setActivationType:(int)arg1 ;
-(BOOL)containsRecurrences;
-(void)setContainsRecurrences:(BOOL)arg1 ;
-(void)setHasExecuteOnce:(BOOL)arg1 ;
-(BOOL)hasExecuteOnce;
-(void)setHasContainsRecurrences:(BOOL)arg1 ;
-(BOOL)hasContainsRecurrences;
-(BOOL)hasPredicate;
-(void)setHasActivationState:(BOOL)arg1 ;
-(BOOL)hasActivationState;
-(id)activationStateAsString:(int)arg1 ;
-(int)StringAsActivationState:(id)arg1 ;
-(void)setHasActivationType:(BOOL)arg1 ;
-(BOOL)hasActivationType;
-(id)activationTypeAsString:(int)arg1 ;
-(int)StringAsActivationType:(id)arg1 ;
@end

