/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICheatBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputAmount;

}
+(id)customAttributes;
-(id)outputImage;
-(id)_CIBox6;
-(id)_CIBox4;
-(id)_CICross4;
@end
