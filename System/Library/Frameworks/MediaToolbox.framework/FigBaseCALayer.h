/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)setNeedsDisplay;
-(void)setSublayers:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)addSublayer:(id)arg1 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
-(id)actionForKey:(id)arg1 ;
-(id)getLayerDisplay;
-(float)getDisplayScale;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
@end

