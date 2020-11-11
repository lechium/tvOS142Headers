/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject {

	BOOL _visible;
	double _effectScale;
	NSMutableDictionary* _effectList;

}

@property (assign) BOOL visible;                                  //@synthesize visible=_visible - In the implementation block
@property (assign) double effectScale;                            //@synthesize effectScale=_effectScale - In the implementation block
@property (retain) NSMutableDictionary * effectList;              //@synthesize effectList=_effectList - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setEffectScale:(double)arg1 ;
-(void)addLayerEffectComponent:(id)arg1 ;
-(NSMutableDictionary *)effectList;
-(double)effectScale;
-(id)colorOverlay;
-(id)dropShadow;
-(void)setEffectList:(NSMutableDictionary *)arg1 ;
@end

