/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNodeFileWriterStatusDelegate <NSObject>
@required
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingSampleDataForSettingsID:(long long)arg3;
-(void)fileWriter:(id)arg1 writerPipelineIndex:(unsigned long long)arg2 stoppedRecordingForSettings:(id)arg3 withError:(int)arg4 thumbnailSurface:(IOSurfaceRef)arg5 irisMovieInfo:(id)arg6 debugMetadataSidecarFileURL:(id)arg7 recordingSucceeded:(BOOL)arg8;
-(void)fileWriter:(id)arg1 startedRecordingForSettings:(id)arg2 writerPipelineIndex:(unsigned long long)arg3;
-(void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
-(void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;

@end
