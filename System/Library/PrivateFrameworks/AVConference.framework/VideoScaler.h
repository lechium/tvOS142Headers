/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VideoScaler : NSObject {

	char* _tempBuffer1;
	char* _tempBuffer2;
	unsigned long long _tempBufferWidth;
	unsigned long long _tempBufferHeight;
	IOSurfaceAcceleratorRef _ioSurfaceAccelerator;

}
-(id)init;
-(void)dealloc;
-(int)convertAndScalePixelBuffer:(CVBufferRef)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned)arg4 usingPixelBufferPool:(CVPixelBufferPoolRef)arg5 andStoreTo:(_CVBuffer*)arg6 ;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 withPixelFormat:(unsigned)arg2 usingPixelBufferPool:(CVPixelBufferPoolRef)arg3 andStoreTo:(_CVBuffer*)arg4 ;
@end

