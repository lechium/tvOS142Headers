/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>

@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {

	unsigned _seed;
	OFEmitterView* _emitterView;
	CGPoint _originalEmitterPosition;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(double)settingBirthRate;
-(void)setSettingBirthRate:(double)arg1 ;
-(id)settingEmitterCells;
-(void)setSettingEmitterCells:(id)arg1 ;
-(double)settingLifetime;
-(void)setSettingLifetime:(double)arg1 ;
-(double)settingScale;
-(void)setSettingScale:(double)arg1 ;
-(double)settingSpin;
-(void)setSettingSpin:(double)arg1 ;
-(double)settingVelocity;
-(void)setSettingVelocity:(double)arg1 ;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)resumeEmitter;
-(void)pauseEmitter;
-(BOOL)isEmitting;
-(double)settingEmitterDepth;
-(void)setSettingEmitterDepth:(double)arg1 ;
-(id)settingEmitterMode;
-(void)setSettingEmitterMode:(id)arg1 ;
-(CGPoint)settingEmitterPosition;
-(void)setSettingEmitterPosition:(CGPoint)arg1 ;
-(id)settingEmitterShape;
-(void)setSettingEmitterShape:(id)arg1 ;
-(CGSize)settingEmitterSize;
-(void)setSettingEmitterSize:(CGSize)arg1 ;
-(double)settingEmitterZPosition;
-(void)setSettingEmitterZPosition:(double)arg1 ;
-(id)settingRenderMode;
-(void)setSettingRenderMode:(id)arg1 ;
-(double)settingSeed;
-(void)setSettingSeed:(double)arg1 ;
@end

