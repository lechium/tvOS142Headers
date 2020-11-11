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

@class NSString;

@interface NWPBServiceBrowse : PBCodable <NSCopying> {

	NSString* _domain;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;              //@synthesize domain=_domain - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDomain;
@end

