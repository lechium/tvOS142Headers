/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSData;

@interface MRPlayer : NSObject <NSCopying> {

	NSString* _identifier;
	NSString* _displayName;
	long long _audioSessionType;
	NSSet* _mxSessionIDs;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                     //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long audioSessionType;                               //@synthesize audioSessionType=_audioSessionType - In the implementation block
@property (nonatomic,copy) NSSet * mxSessionIDs;                                       //@synthesize mxSessionIDs=_mxSessionIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryProperties; 
@property (nonatomic,readonly) MRPlayer * skeleton; 
@property (nonatomic,copy,readonly) NSData * data; 
@property (getter=isDefaultPlayer,nonatomic,readonly) BOOL defaultPlayer; 
+(id)anyPlayer;
+(id)defaultPlayer;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)mergeFrom:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(MRPlayer *)skeleton;
-(NSSet *)mxSessionIDs;
-(void)setMxSessionIDs:(NSSet *)arg1 ;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 ;
-(BOOL)hasAuxiliaryProperties;
-(void)setAudioSessionType:(long long)arg1 ;
-(long long)audioSessionType;
-(BOOL)isDefaultPlayer;
@end

