/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMPBAccessoryReference, NSData;

@interface HMPBServiceReference : PBCodable <NSCopying> {

	HMPBAccessoryReference* _accessoryReference;
	NSData* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL hasAccessoryReference; 
@property (nonatomic,retain) HMPBAccessoryReference * accessoryReference;              //@synthesize accessoryReference=_accessoryReference - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueIdentifier; 
@property (nonatomic,retain) NSData * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(id)serviceReferenceWithService:(id)arg1 ;
+(id)serviceReferenceWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUniqueIdentifier;
-(BOOL)hasAccessoryReference;
-(HMPBAccessoryReference *)accessoryReference;
-(void)setAccessoryReference:(HMPBAccessoryReference *)arg1 ;
@end

