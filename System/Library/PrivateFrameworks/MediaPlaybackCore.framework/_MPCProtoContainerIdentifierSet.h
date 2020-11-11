/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MPCProtoContainerIdentifierSet : PBCodable <NSCopying> {

	long long _cloudID;
	long long _delegateInfoID;
	long long _storeAdamID;
	NSString* _cloudCollectionID;
	NSString* _cloudUniversalLibraryID;
	NSString* _radioStationID;
	NSString* _storePlaylistGlobalID;
	NSString* _storePlaylistVersionHash;
	SCD_Struct_MP21 _has;

}

@property (assign,nonatomic) BOOL hasDelegateInfoID; 
@property (assign,nonatomic) long long delegateInfoID;                         //@synthesize delegateInfoID=_delegateInfoID - In the implementation block
@property (assign,nonatomic) BOOL hasStoreAdamID; 
@property (assign,nonatomic) long long storeAdamID;                            //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) BOOL hasStorePlaylistGlobalID; 
@property (nonatomic,retain) NSString * storePlaylistGlobalID;                 //@synthesize storePlaylistGlobalID=_storePlaylistGlobalID - In the implementation block
@property (nonatomic,readonly) BOOL hasStorePlaylistVersionHash; 
@property (nonatomic,retain) NSString * storePlaylistVersionHash;              //@synthesize storePlaylistVersionHash=_storePlaylistVersionHash - In the implementation block
@property (assign,nonatomic) BOOL hasCloudID; 
@property (assign,nonatomic) long long cloudID;                                //@synthesize cloudID=_cloudID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudCollectionID; 
@property (nonatomic,retain) NSString * cloudCollectionID;                     //@synthesize cloudCollectionID=_cloudCollectionID - In the implementation block
@property (nonatomic,readonly) BOOL hasRadioStationID; 
@property (nonatomic,retain) NSString * radioStationID;                        //@synthesize radioStationID=_radioStationID - In the implementation block
@property (nonatomic,readonly) BOOL hasCloudUniversalLibraryID; 
@property (nonatomic,retain) NSString * cloudUniversalLibraryID;               //@synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(long long)cloudID;
-(void)setCloudID:(long long)arg1 ;
-(void)setStoreAdamID:(long long)arg1 ;
-(long long)storeAdamID;
-(void)setRadioStationID:(NSString *)arg1 ;
-(BOOL)hasRadioStationID;
-(NSString *)radioStationID;
-(void)setCloudUniversalLibraryID:(NSString *)arg1 ;
-(NSString *)cloudUniversalLibraryID;
-(void)setDelegateInfoID:(long long)arg1 ;
-(void)setStorePlaylistGlobalID:(NSString *)arg1 ;
-(void)setStorePlaylistVersionHash:(NSString *)arg1 ;
-(void)setCloudCollectionID:(NSString *)arg1 ;
-(void)setHasDelegateInfoID:(BOOL)arg1 ;
-(BOOL)hasDelegateInfoID;
-(void)setHasStoreAdamID:(BOOL)arg1 ;
-(BOOL)hasStoreAdamID;
-(BOOL)hasStorePlaylistGlobalID;
-(BOOL)hasStorePlaylistVersionHash;
-(void)setHasCloudID:(BOOL)arg1 ;
-(BOOL)hasCloudID;
-(BOOL)hasCloudCollectionID;
-(BOOL)hasCloudUniversalLibraryID;
-(long long)delegateInfoID;
-(NSString *)storePlaylistGlobalID;
-(NSString *)storePlaylistVersionHash;
-(NSString *)cloudCollectionID;
@end

