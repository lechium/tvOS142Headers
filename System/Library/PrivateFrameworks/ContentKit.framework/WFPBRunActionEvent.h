/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {

	NSString* _actionIdentifier;
	NSString* _automationType;
	NSString* _key;
	NSString* _runSource;
	NSString* _shortcutSource;
	BOOL _completed;
	BOOL _didRunRemotely;
	SCD_Struct_WF2 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                           //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) BOOL hasActionIdentifier; 
@property (nonatomic,retain) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                      //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(BOOL)hasKey;
-(NSString *)actionIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(BOOL)hasActionIdentifier;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
-(BOOL)didRunRemotely;
-(BOOL)hasShortcutSource;
-(NSString *)shortcutSource;
-(void)setShortcutSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(BOOL)hasAutomationType;
-(BOOL)hasRunSource;
@end

