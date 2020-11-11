/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TPPBDictionaryMatchingRule, NSString;

@interface TPPBPolicyKeyViewMapping : PBCodable <NSCopying> {

	TPPBDictionaryMatchingRule* _matchingRule;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasMatchingRule; 
@property (nonatomic,retain) TPPBDictionaryMatchingRule * matchingRule;              //@synthesize matchingRule=_matchingRule - In the implementation block
@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                                        //@synthesize view=_view - In the implementation block
+(id)TPPBPolicyKeyViewMappingWithView:(id)arg1 matchingRule:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(BOOL)hasMatchingRule;
-(BOOL)hasView;
-(TPPBDictionaryMatchingRule *)matchingRule;
-(void)setMatchingRule:(TPPBDictionaryMatchingRule *)arg1 ;
@end
