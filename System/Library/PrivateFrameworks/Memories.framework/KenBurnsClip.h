/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>

@class PVEffect, NSString, KenBurnsInfo;

@interface KenBurnsClip : KonaClip <KonaClipMiroAutoEditAdditions> {

	unsigned long long _animationStyle;
	BOOL _originalIsHEIF;
	PVEffect* _kbGeneratorEffect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PVEffect * kbGeneratorEffect;                 //@synthesize kbGeneratorEffect=_kbGeneratorEffect - In the implementation block
@property (nonatomic,retain) KenBurnsInfo * kbInfo; 
@property (nonatomic,readonly) PVEffect * kbEffect; 
@property (assign,nonatomic) unsigned long long animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) BOOL originalIsHEIF;                            //@synthesize originalIsHEIF=_originalIsHEIF - In the implementation block
+(id)kenBurnsClipWithURL:(id)arg1 ;
+(id)kenBurnsClipWithAssetRepresentation:(id)arg1 ;
+(id)kenBurnsClipWithMovie:(id)arg1 ;
+(id)kenBurnsClipWithPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isPortrait;
-(double)aspectRatio;
-(BOOL)isSquare;
-(BOOL)isLandscape;
-(BOOL)isTall;
-(BOOL)isPano;
-(int)clipType;
-(KenBurnsInfo *)kbInfo;
-(BOOL)hasVisualCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(double)autoEditShortestDurationWithBlueprint:(id)arg1 ;
-(double)autoEditShortestIdealDurationWithBlueprint:(id)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(double)panoDurationMultiplier;
-(void)setAnimationStyle:(unsigned long long)arg1 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(unsigned long long)animationStyle;
-(id)animationEffectID;
-(PVEffect *)kbGeneratorEffect;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(BOOL)originalIsHEIF;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(void)setKbInfo:(KenBurnsInfo *)arg1 ;
-(void)setOriginalIsHEIF:(BOOL)arg1 ;
-(void)validateEffectRange:(SCD_Struct_VE9)arg1 inProject:(id)arg2 ;
-(PVEffect *)kbEffect;
-(double)mediaAspectRatio;
@end
