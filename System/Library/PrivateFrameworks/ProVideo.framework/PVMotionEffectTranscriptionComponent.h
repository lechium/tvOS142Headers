/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVMotionEffectComponent.h>
#import <libobjc.A.dylib/PVEffectTranscript.h>

@class PVMotionEffect, PVMotionEffectTextComponent;

@interface PVMotionEffectTranscriptionComponent : NSObject <PVMotionEffectComponent, PVEffectTranscript> {

	PVMotionEffect* _motionEffect;
	PVMotionEffectTextComponent* _textComponent;

}

@property (assign,nonatomic,__weak) PVMotionEffect * motionEffect;                            //@synthesize motionEffect=_motionEffect - In the implementation block
@property (assign,nonatomic,__weak) PVMotionEffectTextComponent * textComponent;              //@synthesize textComponent=_textComponent - In the implementation block
+(id)parameterKeyToPublishedParameterNameMap;
+(SCD_Struct_PV21)liveTitlePickerLoopTime;
+(void)setLiveTitlePickerLoopTime:(SCD_Struct_PV21)arg1 ;
-(BOOL)isTranscription;
-(void)clearTranscription;
-(void)resetToDefaultTranscriptionForLocaleID:(id)arg1 ;
-(void)setTranscriptionText:(id)arg1 ;
-(BOOL)transcriptionHitTest:(CGPoint)arg1 time:(SCD_Struct_PV21)arg2 ;
-(void)updateLiveTitlePickerLoopTime:(BOOL)arg1 ;
-(void)setMotionEffect:(PVMotionEffect *)arg1 ;
-(void)didLoad:(BOOL)arg1 ;
-(void)didUnload;
-(void)updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)documentDidStartLoading;
-(void)documentDidLoad:(const PVMotionDocumentInfo*)arg1 ;
-(void)documentWillOpenMedia:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentDidBecomeReady:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 ;
-(void)documentWillRender:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 time:(SCD_Struct_PV21)arg3 ;
-(void)documentDidFailToLoad;
-(void)documentDidUnload;
-(BOOL)propertiesDisableCache:(id)arg1 time:(SCD_Struct_PV21)arg2 isAtPosterFrame:(BOOL)arg3 ;
-(id)parameterKeysThatInvalidateCache;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 parameterA:(id)arg2 parameterB:(id)arg3 ;
-(PVMotionEffect *)motionEffect;
-(void)setTextComponent:(PVMotionEffectTextComponent *)arg1 ;
-(BOOL)isSingleWordTranscription;
-(void)disableWordFadeOutIfNecessary:(const PVMotionDocumentInfo*)arg1 ;
-(void)updateLiveTitlePickerLoopTime_NoLock:(BOOL)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(BOOL)shouldDisableWordFadeOut:(const PVMotionDocumentInfo*)arg1 ;
-(void)computeLoopMarkerBasedOnTranscription:(const PVMotionDocumentInfo*)arg1 ;
-(void)setupTranscriptionParameters:(id)arg1 documentInfo:(const PVMotionDocumentInfo*)arg2 ;
-(id)initWithEffect:(id)arg1 textComponent:(id)arg2 ;
-(PVMotionEffectTextComponent *)textComponent;
@end

