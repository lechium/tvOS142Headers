/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStripesGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor0;
	CIColor* inputColor1;
	NSNumber* inputWidth;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(NSNumber *)inputWidth;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(NSNumber *)inputSharpness;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
@end

