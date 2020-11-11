/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBAgentClass, NSData, NSString;

@interface NWPBAgent : PBCodable <NSCopying> {

	NWPBAgentClass* _agentClass;
	NSData* _agentData;
	NSString* _agentDescription;
	NSString* _agentIdentifier;
	BOOL _active;
	BOOL _networkProvider;
	BOOL _nexusProvider;
	BOOL _userActivated;
	BOOL _voluntary;
	SCD_Struct_NW11 _has;

}

@property (nonatomic,readonly) BOOL hasAgentClass; 
@property (nonatomic,retain) NWPBAgentClass * agentClass;              //@synthesize agentClass=_agentClass - In the implementation block
@property (nonatomic,readonly) BOOL hasAgentIdentifier; 
@property (nonatomic,retain) NSString * agentIdentifier;               //@synthesize agentIdentifier=_agentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAgentDescription; 
@property (nonatomic,retain) NSString * agentDescription;              //@synthesize agentDescription=_agentDescription - In the implementation block
@property (assign,nonatomic) BOOL hasActive; 
@property (assign,nonatomic) BOOL active;                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL hasUserActivated; 
@property (assign,nonatomic) BOOL userActivated;                       //@synthesize userActivated=_userActivated - In the implementation block
@property (assign,nonatomic) BOOL hasVoluntary; 
@property (assign,nonatomic) BOOL voluntary;                           //@synthesize voluntary=_voluntary - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkProvider; 
@property (assign,nonatomic) BOOL networkProvider;                     //@synthesize networkProvider=_networkProvider - In the implementation block
@property (assign,nonatomic) BOOL hasNexusProvider; 
@property (assign,nonatomic) BOOL nexusProvider;                       //@synthesize nexusProvider=_nexusProvider - In the implementation block
@property (nonatomic,readonly) BOOL hasAgentData; 
@property (nonatomic,retain) NSData * agentData;                       //@synthesize agentData=_agentData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)agentDescription;
-(void)setAgentDescription:(NSString *)arg1 ;
-(void)setUserActivated:(BOOL)arg1 ;
-(void)setVoluntary:(BOOL)arg1 ;
-(void)setNetworkProvider:(BOOL)arg1 ;
-(void)setNexusProvider:(BOOL)arg1 ;
-(BOOL)userActivated;
-(BOOL)voluntary;
-(void)setAgentData:(NSData *)arg1 ;
-(NSData *)agentData;
-(BOOL)nexusProvider;
-(NWPBAgentClass *)agentClass;
-(void)setAgentClass:(NWPBAgentClass *)arg1 ;
-(BOOL)hasAgentClass;
-(BOOL)hasAgentIdentifier;
-(BOOL)hasAgentDescription;
-(void)setHasActive:(BOOL)arg1 ;
-(BOOL)hasActive;
-(void)setHasUserActivated:(BOOL)arg1 ;
-(BOOL)hasUserActivated;
-(void)setHasVoluntary:(BOOL)arg1 ;
-(BOOL)hasVoluntary;
-(void)setHasNetworkProvider:(BOOL)arg1 ;
-(BOOL)hasNetworkProvider;
-(void)setHasNexusProvider:(BOOL)arg1 ;
-(BOOL)hasNexusProvider;
-(BOOL)hasAgentData;
-(NSString *)agentIdentifier;
-(void)setAgentIdentifier:(NSString *)arg1 ;
-(BOOL)networkProvider;
@end
