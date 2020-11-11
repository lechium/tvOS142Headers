/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying> {

	int _conjunction;
	PLQuery* _first;
	PLQuery* _second;
	NSMutableArray* _singleQueries;
	SCD_Struct_PL13 _has;

}

@property (assign,nonatomic) BOOL hasConjunction; 
@property (assign,nonatomic) int conjunction;                             //@synthesize conjunction=_conjunction - In the implementation block
@property (nonatomic,readonly) BOOL hasFirst; 
@property (nonatomic,retain) PLQuery * first;                             //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) BOOL hasSecond; 
@property (nonatomic,retain) PLQuery * second;                            //@synthesize second=_second - In the implementation block
@property (nonatomic,retain) NSMutableArray * singleQueries;              //@synthesize singleQueries=_singleQueries - In the implementation block
+(Class)singleQueriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setSecond:(PLQuery *)arg1 ;
-(PLQuery *)second;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PLQuery *)first;
-(void)setFirst:(PLQuery *)arg1 ;
-(id)logDescription;
-(void)setConjunction:(int)arg1 ;
-(void)setHasConjunction:(BOOL)arg1 ;
-(BOOL)hasConjunction;
-(BOOL)hasFirst;
-(BOOL)hasSecond;
-(void)clearSingleQueries;
-(void)addSingleQueries:(id)arg1 ;
-(unsigned long long)singleQueriesCount;
-(id)singleQueriesAtIndex:(unsigned long long)arg1 ;
-(int)conjunction;
-(NSMutableArray *)singleQueries;
-(void)setSingleQueries:(NSMutableArray *)arg1 ;
@end

