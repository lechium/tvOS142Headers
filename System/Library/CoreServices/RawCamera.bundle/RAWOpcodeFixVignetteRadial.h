/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary;

@interface RAWOpcodeFixVignetteRadial : CIFilter {

	CIImage* inputImage;
	NSDictionary* arguments;

}

@property (retain) CIImage * inputImage; 
@property (nonatomic,retain) NSDictionary * arguments; 
-(NSDictionary *)arguments;
-(void)setArguments:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)initWithArguments:(id)arg1 ;
@end

