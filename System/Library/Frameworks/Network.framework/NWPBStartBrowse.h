/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NWPBBrowseDescriptor, NWPBParameters;

@interface NWPBStartBrowse : PBCodable <NSCopying> {

	NSString* _clientUUID;
	NWPBBrowseDescriptor* _descriptor;
	NWPBParameters* _parameters;

}

@property (nonatomic,readonly) BOOL hasDescriptor; 
@property (nonatomic,retain) NWPBBrowseDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) BOOL hasParameters; 
@property (nonatomic,retain) NWPBParameters * parameters;                    //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) BOOL hasClientUUID; 
@property (nonatomic,retain) NSString * clientUUID;                          //@synthesize clientUUID=_clientUUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NWPBParameters *)parameters;
-(NWPBBrowseDescriptor *)descriptor;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDescriptor:(NWPBBrowseDescriptor *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setParameters:(NWPBParameters *)arg1 ;
-(BOOL)hasParameters;
-(NSString *)clientUUID;
-(BOOL)hasClientUUID;
-(void)setClientUUID:(NSString *)arg1 ;
-(BOOL)hasDescriptor;
@end

