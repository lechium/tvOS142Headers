/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying> {

	NSArray* colorStops;
	NSArray* colorMidpointLocations;
	NSArray* opacityStops;
	NSArray* opacityMidpointLocations;
	double smoothingCoefficient;
	psdGradientColor fillColor;
	int blendMode;
	struct {
		unsigned colorEdgePixel : 2;
		unsigned opacityEdgePixel : 2;
		unsigned isDithered : 1;
		unsigned reserved : 3;
	}  pgeFlags;

}

@property (assign,nonatomic) int blendMode; 
+(void)initialize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(psdGradientColor)fillColor;
-(BOOL)isDithered;
-(int)blendMode;
-(id)colorStops;
-(id)colorMidpointLocations;
-(id)opacityStops;
-(id)opacityMidpointLocations;
-(double)smoothingCoefficient;
-(void)setBlendMode:(int)arg1 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillColor:(psdGradientColor)arg6 dither:(BOOL)arg7 ;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg1 ;
-(void)_createOrderedStops:(id*)arg1 midpoints:(id*)arg2 fromStops:(id)arg3 midpoints:(id)arg4 edgePixel:(long long*)arg5 ;
-(double)_smoothedInterpolationOfLocation:(double)arg1 betweenLower:(double)arg2 upper:(double)arg3 scaledMidpoint:(double)arg4 ;
-(id)initWithColorStops:(id)arg1 colorMidpoints:(id)arg2 opacityStops:(id)arg3 opacityMidpoints:(id)arg4 smoothingCoefficient:(double)arg5 fillCoefficient:(double)arg6 ;
-(psdGradientColor)_smoothedGradientColorAtLocation:(double)arg1 ;
-(double)fillCoefficient;
-(BOOL)hasEdgePixel;
-(void)setColorStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setOpacityStops:(id)arg1 midpoints:(id)arg2 ;
-(void)setSmoothingCoefficient:(double)arg1 ;
-(void)setFillCoefficient:(double)arg1 ;
-(void)customizeForDistance:(double)arg1 ;
@end

