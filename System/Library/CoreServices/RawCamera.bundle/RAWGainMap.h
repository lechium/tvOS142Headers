/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, CIVector, NSNumber;

@interface RAWGainMap : RAWFilter {

	CIImage* inputImage;
	NSData* inputGainMapData;
	CIVector* inputGainMapApplyRegion;
	CIVector* inputGainMapSize;
	NSNumber* inputGainMapRowPitch;
	NSNumber* inputGainMapColPitch;
	NSNumber* inputGainMapNumPlanes;
	NSNumber* inputGainMapExecute;
	id inputColorSpace;
	CIImage* _gainMapImg;

}
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDefaults;
-(id)outputImage;
-(id)makeMapSampler;
@end

