/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMaterial/CoreMaterial-Structs.h>
#import <CoreMaterial/MTColor.h>

@interface MTRGBColor : MTColor {

	double _red;
	double _green;
	double _blue;
	double _alpha;

}

@property (nonatomic,readonly) double red;                //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;              //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;               //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;              //@synthesize alpha=_alpha - In the implementation block
-(id)description;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(CGColorRef)CGColor;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(id)_initWithCGColor:(CGColorRef)arg1 ;
-(id)_initWithDescription:(id)arg1 ;
-(id)colorDescription;
-(id)colorWithAdditionalAlphaComponent:(double)arg1 ;
-(id)colorBlendedWithColor:(id)arg1 ;
-(CAColorMatrix)sourceOverColorMatrix;
-(id)_rgbColor;
@end

