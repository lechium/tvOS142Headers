/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource {

	int _seed;
	double _frequency;
	long long _octaveCount;
	double _lacunarity;

}

@property (assign,nonatomic) double frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long octaveCount;              //@synthesize octaveCount=_octaveCount - In the implementation block
@property (assign,nonatomic) double lacunarity;                  //@synthesize lacunarity=_lacunarity - In the implementation block
@property (assign,nonatomic) int seed;                           //@synthesize seed=_seed - In the implementation block
-(int)seed;
-(void)setSeed:(int)arg1 ;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(double)valueAt:;
-(id)cloneModule;
-(void)setOctaveCount:(long long)arg1 ;
-(void)setLacunarity:(double)arg1 ;
-(long long)octaveCount;
-(double)lacunarity;
@end

