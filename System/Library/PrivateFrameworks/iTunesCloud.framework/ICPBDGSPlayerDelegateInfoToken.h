/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {

	double _expirationTimeInterval;
	unsigned long long _sessionID;
	NSString* _storefrontIdentifier;
	NSData* _token;
	SCD_Struct_IC4 _has;

}

@property (nonatomic,readonly) BOOL hasToken; 
@property (nonatomic,retain) NSData * token;                               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) unsigned long long sessionID;                 //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasExpirationTimeInterval; 
@property (assign,nonatomic) double expirationTimeInterval;                //@synthesize expirationTimeInterval=_expirationTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL hasStorefrontIdentifier; 
@property (nonatomic,retain) NSString * storefrontIdentifier;              //@synthesize storefrontIdentifier=_storefrontIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)token;
-(unsigned long long)sessionID;
-(void)setSessionID:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(BOOL)hasToken;
-(NSString *)storefrontIdentifier;
-(void)setStorefrontIdentifier:(NSString *)arg1 ;
-(double)expirationTimeInterval;
-(void)setExpirationTimeInterval:(double)arg1 ;
-(void)setHasExpirationTimeInterval:(BOOL)arg1 ;
-(BOOL)hasExpirationTimeInterval;
-(BOOL)hasStorefrontIdentifier;
@end

