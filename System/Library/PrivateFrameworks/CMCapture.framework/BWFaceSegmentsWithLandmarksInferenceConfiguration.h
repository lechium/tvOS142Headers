/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWLandmarksInferenceConfiguration.h>

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration {

	BOOL _detectFacesInFullSizeInput;
	BOOL _skipFaceLandmarkDetection;
	BOOL _skipFoodAndDrinkDetection;
	BOOL _includesInvalidContent;

}

@property (assign,nonatomic) BOOL detectFacesInFullSizeInput;              //@synthesize detectFacesInFullSizeInput=_detectFacesInFullSizeInput - In the implementation block
@property (assign,nonatomic) BOOL skipFaceLandmarkDetection;               //@synthesize skipFaceLandmarkDetection=_skipFaceLandmarkDetection - In the implementation block
@property (assign,nonatomic) BOOL skipFoodAndDrinkDetection;               //@synthesize skipFoodAndDrinkDetection=_skipFoodAndDrinkDetection - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;                  //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)configuration;
-(BOOL)includesInvalidContent;
-(id)initWithInferenceType:(int)arg1 ;
-(BOOL)detectFacesInFullSizeInput;
-(void)setDetectFacesInFullSizeInput:(BOOL)arg1 ;
-(BOOL)skipFaceLandmarkDetection;
-(void)setSkipFaceLandmarkDetection:(BOOL)arg1 ;
-(BOOL)skipFoodAndDrinkDetection;
-(void)setSkipFoodAndDrinkDetection:(BOOL)arg1 ;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
@end
