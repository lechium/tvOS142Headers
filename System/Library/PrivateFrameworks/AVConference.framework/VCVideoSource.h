/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCVideoSource <NSObject>
@optional
-(void)setCameraZoomFactor:(double)arg1;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
-(BOOL)setAnimoji:(id)arg1;
-(BOOL)setMemoji:(id)arg1;
-(void)addStickerWithURL:(id)arg1 atPosition:(CGPoint)arg2 identifier:(id)arg3;
-(void)setViewPointCorrectionEnabaled:(BOOL)arg1;
-(void)frameCount:(int*)arg1 averageProcessTime:(float*)arg2;

@required
-(int)startPreview;
-(int)setFrameRate:(int)arg1;
-(BOOL)isPreviewRunning;
-(int)stop:(BOOL)arg1;
-(BOOL)isFrontCamera;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const *)arg1;
-(int)configureCaptureWithToken:(VCVideoSourceToken)arg1;
-(int)frameCount:(BOOL)arg1;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;

@end

