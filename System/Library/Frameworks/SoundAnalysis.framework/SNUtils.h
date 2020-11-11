/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@interface SNUtils : NSObject
+(BOOL)isInternalBuild;
+(BOOL)isRunningInDaemon;
+(int)modelSampleRate:(id)arg1 orDefaultRate:(int)arg2 ;
+(int)modelBlockSize:(id)arg1 ;
+(id)vggishFeatureEmbeddingInputShape;
+(int)numberOfElements:(id)arg1 ;
+(id)vggishFeatureEmbeddingOutputShape;
+(id)vggishFrontEndProcessingModelDescription;
+(id)userSuppliedInputFeatureNames:(id)arg1 ;
+(id)userSuppliedOutputFeatureNames:(id)arg1 ;
+(id)feedbackConnections:(id)arg1 ;
+(id)valueForEntitlement:(id)arg1 error:(id*)arg2 ;
+(int)modelOutputBlockSize:(id)arg1 ;
+(BOOL)isFormatPCM:(id)arg1 ;
+(id)splitBuffer:(id)arg1 intoBuffersWithFrameCount:(unsigned)arg2 ;
+(long long)audioFileFrameCount:(id)arg1 ;
+(long long)detectionCountInResults:(id)arg1 ;
+(id)vggishFrontEndProcessingInputShape;
+(id)vggishFrontEndProcessingOutputShape;
+(id)parseFeedbackConnectionsString:(id)arg1 ;
+(id)userSuppliedFeatureNames:(id)arg1 direction:(long long)arg2 ;
+(id)subtractSet:(id)arg1 from:(id)arg2 ;
+(void)_deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3 ;
+(id)fileCreationDate:(id)arg1 ;
+(id)diskSpaceRemainingBytesContainingDirectory:(id)arg1 ;
+(id)fileSizeBytes:(id)arg1 ;
+(id)valueForEntitlement:(id)arg1 fromTask:(SecTaskRef)arg2 error:(id*)arg3 ;
+(void)silenceUnfilledFramesInBuffer:(id)arg1 ;
+(void)copyAudioBufferList:(AudioBufferList*)arg1 to:(AudioBufferList*)arg2 frameCount:(unsigned)arg3 bytesPerFrame:(unsigned)arg4 ;
+(int)modelInputBlockSize:(id)arg1 ;
+(id)loggingPrefixForRequest:(id)arg1 ;
+(void)deleteWAVAndTextFilesInDirectory:(id)arg1 createdBeforeDate:(id)arg2 withRemainingDirectoryByteSizeLessThan:(long long)arg3 ;
@end

