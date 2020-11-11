/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListPosition, NSMutableArray;

@interface CKDPFieldActionInsertIntoList : PBCodable <NSCopying> {

	CKDPListPosition* _position;
	NSMutableArray* _values;
	BOOL _insertAfter;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) CKDPListPosition * position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) BOOL hasInsertAfter; 
@property (assign,nonatomic) BOOL insertAfter;                         //@synthesize insertAfter=_insertAfter - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
+(Class)valueType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSMutableArray *)values;
-(id)dictionaryRepresentation;
-(CKDPListPosition *)position;
-(void)setPosition:(CKDPListPosition *)arg1 ;
-(void)addValue:(id)arg1 ;
-(void)setValues:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)valuesCount;
-(void)clearValues;
-(BOOL)hasPosition;
-(void)setInsertAfter:(BOOL)arg1 ;
-(void)setHasInsertAfter:(BOOL)arg1 ;
-(BOOL)hasInsertAfter;
-(BOOL)insertAfter;
@end

