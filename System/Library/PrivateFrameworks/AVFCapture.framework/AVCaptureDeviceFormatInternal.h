/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCapture/AVFCapture-Structs.h>
@class FigCaptureSourceFormat, NSArray;

@interface AVCaptureDeviceFormatInternal : NSObject {

	FigCaptureSourceFormat* sourceFormat;
	NSArray* videoSupportedFrameRateRanges;
	SCD_Struct_AV0 defaultActiveMinFrameDuration;
	SCD_Struct_AV0 defaultActiveMaxFrameDuration;
	NSArray* supportedDepthDataFormats;

}
@end
