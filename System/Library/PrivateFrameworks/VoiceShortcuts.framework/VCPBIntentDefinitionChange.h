/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, VCPBIntentDefinition;

@interface VCPBIntentDefinitionChange : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	int _changeType;
	VCPBIntentDefinition* _intentDefinition;

}

@property (assign,nonatomic) int changeType;                                       //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * associatedBundleID;                        //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasIntentDefinition; 
@property (nonatomic,retain) VCPBIntentDefinition * intentDefinition;              //@synthesize intentDefinition=_intentDefinition - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)changeType;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setChangeType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(VCPBIntentDefinition *)intentDefinition;
-(void)setIntentDefinition:(VCPBIntentDefinition *)arg1 ;
-(id)changeTypeAsString:(int)arg1 ;
-(int)StringAsChangeType:(id)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
-(BOOL)hasIntentDefinition;
@end

