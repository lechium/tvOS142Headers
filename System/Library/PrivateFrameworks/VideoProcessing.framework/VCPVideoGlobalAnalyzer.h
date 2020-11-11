/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoGlobalAnalyzer : NSObject
-(float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2 ;
-(int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2 usingFaceAction:(BOOL)arg3 ;
-(int)setActivityLevel:(id)arg1 ;
-(BOOL)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2 ;
-(float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2 ;
-(float)assetActionScoreFromAnalysis:(id)arg1 ;
-(float)assetExpressionScoreFromAnalysis:(id)arg1 ;
-(float)assetVoiceScoreFromAnalysis:(id)arg1 ;
-(float)assetJunkScoreFromAnalysis:(id)arg1 ;
-(float)assetCameraMotionScoreFromAnalysis:(id)arg1 ;
-(float)scaleForTimeRange:(SCD_Struct_VC17)arg1 basedOnFace:(id)arg2 ;
-(BOOL)isJunkTimeRange:(SCD_Struct_VC17)arg1 basedOnResults:(id)arg2 ;
-(float)subjectActivityInTimeRange:(SCD_Struct_VC17)arg1 fromResults:(id)arg2 ;
-(float)cameraActivityfromQuality:(float)arg1 ;
-(float)assetActivityLevelFromAnalysisResults:(id)arg1 ;
@end

