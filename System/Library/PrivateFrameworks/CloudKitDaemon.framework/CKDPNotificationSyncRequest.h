/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {

	unsigned _maxChanges;
	NSData* _serverChangeToken;
	BOOL _wantsChanges;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasServerChangeToken; 
@property (nonatomic,retain) NSData * serverChangeToken;               //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                      //@synthesize maxChanges=_maxChanges - In the implementation block
@property (assign,nonatomic) BOOL hasWantsChanges; 
@property (assign,nonatomic) BOOL wantsChanges;                        //@synthesize wantsChanges=_wantsChanges - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServerChangeToken:(NSData *)arg1 ;
-(NSData *)serverChangeToken;
-(void)setWantsChanges:(BOOL)arg1 ;
-(BOOL)wantsChanges;
-(BOOL)hasServerChangeToken;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(BOOL)arg1 ;
-(BOOL)hasMaxChanges;
-(void)setHasWantsChanges:(BOOL)arg1 ;
-(BOOL)hasWantsChanges;
-(unsigned)maxChanges;
@end

