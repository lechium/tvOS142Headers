/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWDeferredProcessorControllerDelegate <BWStillImageProcessorControllerDelegate>
@required
-(void)processorController:(id)arg1 didDetermineReferenceFrame:(opaqueCMSampleBufferRef)arg2 processorInput:(id)arg3 err:(int)arg4;
-(void)processorController:(id)arg1 didProcessInferencesForSkinMask:(const void*)arg2 skyMask:(const void*)arg3 personMask:(const void*)arg4 faceObservations:(id)arg5 processorInput:(id)arg6 err:(int)arg7;

@end

