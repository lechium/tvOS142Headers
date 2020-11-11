/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingRequestResource : PBCodable <NSCopying> {

	long long _numRequested;
	NSString* _resource;
	SCD_Struct_CP3 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                 //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasNumRequested; 
@property (assign,nonatomic) long long numRequested;              //@synthesize numRequested=_numRequested - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)resource;
-(void)setResource:(NSString *)arg1 ;
-(BOOL)hasResource;
-(void)setNumRequested:(long long)arg1 ;
-(void)setHasNumRequested:(BOOL)arg1 ;
-(BOOL)hasNumRequested;
-(long long)numRequested;
@end
