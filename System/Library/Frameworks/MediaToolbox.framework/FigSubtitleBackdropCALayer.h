/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <MediaToolbox/FigBaseCALayer.h>

@interface FigSubtitleBackdropCALayer : FigBaseCALayer {

	OpaqueFigSubtitleBackdropCALayerInternal* bdLayerInternal;

}
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)setNeedsDisplay;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(BOOL)shouldEnableBackdropLayer;
-(void)updateBackdropLayer;
-(void)_addBoundsAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)_addPositionAnimationToLayer:(id)arg1 usingAnimation:(id)arg2 forKey:(id)arg3 ;
-(void)updateWindowOpacity:(double)arg1 ;
-(void)updateHDRContentState:(BOOL)arg1 ;
@end
