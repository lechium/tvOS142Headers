/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture {

	BOOL _vectorNoise;
	float _smoothness;
	BOOL _grayScale;
	float _frequency;
	int _noiseMode;

}
-(id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(id)_generateCellularNoiseAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
-(id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(BOOL)arg5 ;
-(id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
@end

