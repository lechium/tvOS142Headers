/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WUIWeatherCondition, CALayer, WUIGradientLayer, NSCache, NSNumber;

@interface WUIDynamicWeatherBackground : UIView {

	WUIWeatherCondition* _condition;
	CALayer* _rootLayer;
	WUIGradientLayer* _gradientLayer;
	CALayer* _darkeningLayer;
	NSCache* _backgroundCache;
	CALayer* _currentBackground;
	CALayer* _transitionBackground;
	NSNumber* _sunHeightOverride;

}

@property (nonatomic,retain) CALayer * rootLayer;                                //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) WUIGradientLayer * gradientLayer;                   //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,retain) CALayer * darkeningLayer;                           //@synthesize darkeningLayer=_darkeningLayer - In the implementation block
@property (nonatomic,retain) NSCache * backgroundCache;                          //@synthesize backgroundCache=_backgroundCache - In the implementation block
@property (assign,nonatomic,__weak) CALayer * currentBackground;                 //@synthesize currentBackground=_currentBackground - In the implementation block
@property (assign,nonatomic,__weak) CALayer * transitionBackground;              //@synthesize transitionBackground=_transitionBackground - In the implementation block
@property (nonatomic,copy) NSNumber * sunHeightOverride;                         //@synthesize sunHeightOverride=_sunHeightOverride - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * condition;                    //@synthesize condition=_condition - In the implementation block
+(void)initialize;
+(id)dequeueBackgroundForCity:(id)arg1 ;
+(void)enqueueBackground:(id)arg1 ;
+(void)handleMemoryWarning;
+(void)beginReuseRestrictionForCity:(id)arg1 ;
+(void)endReuseRestriction;
-(WUIWeatherCondition *)condition;
-(void)addSublayer:(id)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(CALayer *)rootLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCondition:(WUIWeatherCondition *)arg1 ;
-(void)setCity:(id)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(WUIGradientLayer *)gradientLayer;
-(void)setGradientLayer:(WUIGradientLayer *)arg1 ;
-(void)getTopColor:(id*)arg1 middleColor:(id*)arg2 bottomColor:(id*)arg3 gradientStopPoint:(double*)arg4 forCity:(id)arg5 date:(id)arg6 ;
-(void)setCity:(id)arg1 animationDuration:(double)arg2 ;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(void)setCity:(id)arg1 animate:(BOOL)arg2 ;
-(void)completeTransitionWithSuccess:(BOOL)arg1 ;
-(id)updateFromCity:(id)arg1 toCity:(id)arg2 ;
-(void)darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)updateForDarkerSystemColors;
-(double)darkeningLayerOpacityForDay:(BOOL)arg1 ;
-(id)imageLayerFromConditon:(long long)arg1 isDay:(BOOL)arg2 ;
-(id)springAnimationForKeyPath:(id)arg1 mass:(double)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(BOOL)hasSublayer:(id)arg1 ;
-(CALayer *)darkeningLayer;
-(void)setDarkeningLayer:(CALayer *)arg1 ;
-(NSCache *)backgroundCache;
-(void)setBackgroundCache:(NSCache *)arg1 ;
-(CALayer *)currentBackground;
-(void)setCurrentBackground:(CALayer *)arg1 ;
-(CALayer *)transitionBackground;
-(void)setTransitionBackground:(CALayer *)arg1 ;
-(NSNumber *)sunHeightOverride;
-(void)setSunHeightOverride:(NSNumber *)arg1 ;
@end

