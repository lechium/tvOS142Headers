/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Vision/Vision-Structs.h>
@class ShotflowNetwork, NSArray;

@interface ShotflowDetector : NSObject {

	float _nmsThreshold;
	ShotflowNetwork* _network;
	float _osfsThreshold;
	float _osfsSizeRatio;
	float _olmcsThreshold;
	int _olmcsMergeCountDelta;
	float _smartThreshold;
	float _smartDistanceFactor;
	NSArray* _filterThreshold;

}

@property (assign,nonatomic) float threshold; 
@property (nonatomic,retain) NSArray * filterThreshold;              //@synthesize filterThreshold=_filterThreshold - In the implementation block
@property (assign,nonatomic) float nmsThreshold;                     //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (assign,nonatomic) float osfsThreshold;                    //@synthesize osfsThreshold=_osfsThreshold - In the implementation block
@property (assign,nonatomic) float osfsSizeRatio;                    //@synthesize osfsSizeRatio=_osfsSizeRatio - In the implementation block
@property (assign,nonatomic) float olmcsThreshold;                   //@synthesize olmcsThreshold=_olmcsThreshold - In the implementation block
@property (assign,nonatomic) int olmcsMergeCountDelta;               //@synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta - In the implementation block
@property (assign,nonatomic) float smartThreshold;                   //@synthesize smartThreshold=_smartThreshold - In the implementation block
@property (assign,nonatomic) float smartDistanceFactor;              //@synthesize smartDistanceFactor=_smartDistanceFactor - In the implementation block
+(CGSize)inputImageSize;
+(id)modelName;
+(id)inputLayerName;
+(float)inputImageMinDimension;
+(float)inputImageMaxDimension;
+(float)inputImageAspectRatio;
+(id)supportedLabelKeys;
+(id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThreshold:(id)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6 ;
+(id)processingDeviceDetectorWithModelPath:(id)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4 ;
+(id)processingDeviceDetectorWithEspressoNetwork:(SCD_Struct_Sh39*)arg1 espressoPlan:(void*)arg2 networkThreshold:(float)arg3 filterThreshold:(id)arg4 ;
+(id)processingDeviceDetectorWithEspressoNetwork:(SCD_Struct_Sh39*)arg1 espressoPlan:(void*)arg2 ;
+(float)networkThreshold;
+(CGSize)getSuggestedImageSize:(CGSize)arg1 ;
-(void)setThreshold:(float)arg1 ;
-(float)threshold;
-(id)initWithNetwork:(id)arg1 ;
-(id)initWithNetwork:(id)arg1 filterThreshold:(id)arg2 ;
-(id)overlappingSmallFacesSuppression:(id)arg1 ;
-(id)overlappingLowMergeCountSuppression:(id)arg1 ;
-(id)mergeBoxes:(id)arg1 ;
-(id)smartMergeBoxes:(id)arg1 ;
-(id)nmsBoxes:(id)arg1 ;
-(id)sortBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2 ;
-(id)filterBoxes:(id)arg1 ;
-(id)detect:(const vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(id)detectAndProcessObjects:(const vImage_Buffer*)arg1 inputIsBGR:(BOOL)arg2 ;
-(id)enforceSquareFaces:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3 ;
-(float)nmsThreshold;
-(void)setNmsThreshold:(float)arg1 ;
-(NSArray *)filterThreshold;
-(void)setFilterThreshold:(NSArray *)arg1 ;
-(float)osfsThreshold;
-(void)setOsfsThreshold:(float)arg1 ;
-(float)osfsSizeRatio;
-(void)setOsfsSizeRatio:(float)arg1 ;
-(float)olmcsThreshold;
-(void)setOlmcsThreshold:(float)arg1 ;
-(int)olmcsMergeCountDelta;
-(void)setOlmcsMergeCountDelta:(int)arg1 ;
-(float)smartThreshold;
-(void)setSmartThreshold:(float)arg1 ;
-(float)smartDistanceFactor;
-(void)setSmartDistanceFactor:(float)arg1 ;
@end

