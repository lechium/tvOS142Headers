/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Accounts/Accounts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSDictionary;

@interface ACProtobufVariableValueDictionary : PBCodable <NSCopying> {

	NSMutableArray* _pairs;

}

@property (nonatomic,copy) NSDictionary * dictionary; 
@property (nonatomic,retain) NSMutableArray * pairs;               //@synthesize pairs=_pairs - In the implementation block
+(Class)pairType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)pairs;
-(void)setPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)pairsCount;
-(void)addPair:(id)arg1 ;
-(void)clearPairs;
-(id)pairAtIndex:(unsigned long long)arg1 ;
@end

