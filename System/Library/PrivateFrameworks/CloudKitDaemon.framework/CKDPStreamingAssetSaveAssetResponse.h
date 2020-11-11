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

@class NSString;

@interface CKDPStreamingAssetSaveAssetResponse : PBCodable <NSCopying> {

	long long _reservedSize;
	long long _uploadURLExpirationTimeSeconds;
	NSString* _uploadURL;
	SCD_Struct_CK4 _has;

}

@property (assign,nonatomic) BOOL hasReservedSize; 
@property (assign,nonatomic) long long reservedSize;                                //@synthesize reservedSize=_reservedSize - In the implementation block
@property (nonatomic,readonly) BOOL hasUploadURL; 
@property (nonatomic,retain) NSString * uploadURL;                                  //@synthesize uploadURL=_uploadURL - In the implementation block
@property (assign,nonatomic) BOOL hasUploadURLExpirationTimeSeconds; 
@property (assign,nonatomic) long long uploadURLExpirationTimeSeconds;              //@synthesize uploadURLExpirationTimeSeconds=_uploadURLExpirationTimeSeconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)uploadURL;
-(void)setUploadURL:(NSString *)arg1 ;
-(long long)reservedSize;
-(void)setReservedSize:(long long)arg1 ;
-(void)setHasReservedSize:(BOOL)arg1 ;
-(BOOL)hasReservedSize;
-(BOOL)hasUploadURL;
-(void)setUploadURLExpirationTimeSeconds:(long long)arg1 ;
-(void)setHasUploadURLExpirationTimeSeconds:(BOOL)arg1 ;
-(BOOL)hasUploadURLExpirationTimeSeconds;
-(long long)uploadURLExpirationTimeSeconds;
@end

