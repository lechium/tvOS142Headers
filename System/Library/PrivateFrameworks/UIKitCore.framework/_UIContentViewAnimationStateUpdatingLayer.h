/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface _UIContentViewAnimationStateUpdatingLayer : CALayer {

	/*^block*/id _progressHandler;
	double _progress;

}

@property (assign,nonatomic) double progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)layerForView:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)animationCompletedWithPosition:(long long)arg1 ;
-(void)_updateWithAnimationProgress:(double)arg1 completed:(BOOL)arg2 ;
@end
