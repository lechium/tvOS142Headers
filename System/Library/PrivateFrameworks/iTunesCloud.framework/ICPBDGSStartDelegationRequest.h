/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ICPBDGSStartDelegationRequest : PBRequest <NSCopying> {

	NSMutableArray* _playerInfoContextRequestTokens;

}

@property (nonatomic,retain) NSMutableArray * playerInfoContextRequestTokens;              //@synthesize playerInfoContextRequestTokens=_playerInfoContextRequestTokens - In the implementation block
+(Class)playerInfoContextRequestTokenType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)playerInfoContextRequestTokens;
-(void)addPlayerInfoContextRequestToken:(id)arg1 ;
-(void)clearPlayerInfoContextRequestTokens;
-(unsigned long long)playerInfoContextRequestTokensCount;
-(id)playerInfoContextRequestTokenAtIndex:(unsigned long long)arg1 ;
-(void)setPlayerInfoContextRequestTokens:(NSMutableArray *)arg1 ;
@end

