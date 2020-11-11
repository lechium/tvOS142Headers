/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSDictionary, NSString, NSObject, AVVideoComposition;

@interface AVVideoCompositionRenderContextInternal : NSObject {

	NSDictionary* _basisProperties;
	CGSize _size;
	CGAffineTransform _renderTransform;
	float _renderScale;
	SCD_Struct_AV73 _pixelAspectRatio;
	NSEdgeInsets _edgeWidths;
	BOOL _highQualityRendering;
	NSDictionary* _clientRequiredPixelBufferAttributes;
	NSDictionary* _destinationDesiredPixelBufferAttributes;
	NSString* _destinationDesiredPixelBufferYCbCrMatrix;
	NSString* _destinationDesiredPixelBufferColorPrimaries;
	NSString* _destinationDesiredPixelBufferTransferFunction;
	NSString* _blendingTransferFunction;
	int pixelFormatFamily;
	CFDictionaryRef _pixelAspectRatioDict;
	CFDictionaryRef _cleanApertureDict;
	SCD_Struct_AV74 _destinationPixelBufferDimensions;
	OpaqueFigSimpleMutexRef _bufferPoollInitMutex;
	NSObject*<OS_dispatch_queue> _pixelBufferPoolQ;
	CVPixelBufferPoolRef _pixelBufferPool;
	AVVideoComposition* _videoComposition;

}
-(void)dealloc;
-(void)_willDeallocOrFinalize;
@end
