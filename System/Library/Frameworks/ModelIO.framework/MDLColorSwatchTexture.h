/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLTexture.h>

@interface MDLColorSwatchTexture : MDLTexture {

	float _colorTemperature1;
	float _colorTemperature2;
	CGColorRef _color1;
	CGColorRef _color2;
	int _type;

}
-(id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2 ;
-(id)initWithColorTemperatureGradientFrom:(float)arg1 toColorTemperature:(float)arg2 name:(id)arg3 ;
-(id)initWithColorGradientFrom:(CGColorRef)arg1 toColor:(CGColorRef)arg2 name:(id)arg3 ;
@end

