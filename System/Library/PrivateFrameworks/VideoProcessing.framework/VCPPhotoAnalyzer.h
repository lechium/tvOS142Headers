/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableDictionary, NSDictionary, VCPAsset;

@interface VCPPhotoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	NSMutableDictionary* _analysis;
	unsigned long long _irisAnalyses;
	NSDictionary* _phFaceResults;
	unsigned long long _phFaceFlags;
	VCPAsset* _asset;
	float _imageBlurTextureScore;
	float _preAnalysisSharpnessScore;
	BOOL _faceDominated;
	BOOL _allowStreaming;
	long long _status;

}

@property (assign,nonatomic) BOOL allowStreaming;              //@synthesize allowStreaming=_allowStreaming - In the implementation block
@property (readonly) long long status;                         //@synthesize status=_status - In the implementation block
+(BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2 ;
+(id)analyzerWithVCPAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
+(id)resourceForAsset:(id)arg1 withResources:(id)arg2 ;
-(long long)status;
-(id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(void)setAllowStreaming:(BOOL)arg1 ;
-(id)analyzeAsset:(/*^block*/id)arg1 ;
-(id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3 ;
-(BOOL)allowStreaming;
-(void)processExistingAnalyses:(id)arg1 ;
-(void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1 ;
-(int)downscaleImage:(CVBufferRef)arg1 scaledImage:(_CVBuffer*)arg2 majorDimension:(int)arg3 ;
-(id)existingAnalysisForMovieAnalyzer;
-(int)checkFaceDominant;
-(int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 cancel:(/*^block*/id)arg3 ;
@end
