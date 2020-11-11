/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying> {

	NSMutableArray* _names;
	NSMutableArray* _properties;

}

@property (nonatomic,retain) NSMutableArray * names;                   //@synthesize names=_names - In the implementation block
@property (nonatomic,retain) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(Class)propertiesType;
+(Class)namesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)names;
-(NSMutableArray *)properties;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setProperties:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addProperties:(id)arg1 ;
-(unsigned long long)propertiesCount;
-(void)clearProperties;
-(id)propertiesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)namesCount;
-(void)clearNames;
-(void)setNames:(NSMutableArray *)arg1 ;
-(void)addNames:(id)arg1 ;
-(id)namesAtIndex:(unsigned long long)arg1 ;
@end

