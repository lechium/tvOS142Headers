/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface TDImageColorHistogram : NSObject {

	histogram_ARGB_t _histogram;
	vImage_Buffer* _imageBuffer;
	vImage_CGImageFormat* _imageFormat;
	BOOL _isMonochrome;

}

@property (readonly) BOOL isMonochrome; 
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(BOOL)isMonochrome;
-(double)intersection:(id)arg1 ;
@end

