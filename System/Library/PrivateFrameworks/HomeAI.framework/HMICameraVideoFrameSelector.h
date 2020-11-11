/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMICameraVideoFrameSamplerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMICameraVideoFrameSelectorDelegate, HMIMotionDetector;
@class HMICameraVideoFrameSampler, NSMutableArray, NSArray, NSString;

@interface HMICameraVideoFrameSelector : HMFObject <HMICameraVideoFrameSamplerDelegate, HMFLogging> {

	id<HMICameraVideoFrameSelectorDelegate> _delegate;
	HMICameraVideoFrameSampler* _sampler;
	NSMutableArray* _framesInternal;
	long long _maxFrameCount;
	NSMutableArray* _predictedFrames;
	id<HMIMotionDetector> _detector;
	SCD_Struct_HM3 _sampleRate;

}

@property (readonly) HMICameraVideoFrameSampler * sampler;                        //@synthesize sampler=_sampler - In the implementation block
@property (readonly) SCD_Struct_HM3 sampleRate;                                   //@synthesize sampleRate=_sampleRate - In the implementation block
@property (readonly) NSMutableArray * framesInternal;                             //@synthesize framesInternal=_framesInternal - In the implementation block
@property (readonly) long long maxFrameCount;                                     //@synthesize maxFrameCount=_maxFrameCount - In the implementation block
@property (readonly) NSMutableArray * predictedFrames;                            //@synthesize predictedFrames=_predictedFrames - In the implementation block
@property (readonly) id<HMIMotionDetector> detector;                              //@synthesize detector=_detector - In the implementation block
@property (__weak) id<HMICameraVideoFrameSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * frames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMICameraVideoFrameSelectorDelegate>)delegate;
-(void)setDelegate:(id<HMICameraVideoFrameSelectorDelegate>)arg1 ;
-(void)finish;
-(SCD_Struct_HM3)sampleRate;
-(HMICameraVideoFrameSampler *)sampler;
-(id<HMIMotionDetector>)detector;
-(NSArray *)frames;
-(id)initWithResourceAttributes:(id)arg1 sampleRate:(SCD_Struct_HM3)arg2 ;
-(BOOL)handleVideoFrame:(id)arg1 error:(id*)arg2 ;
-(BOOL)isFinishedEarly;
-(NSMutableArray *)framesInternal;
-(long long)maxFrameCount;
-(NSMutableArray *)predictedFrames;
-(void)sampler:(id)arg1 didFindSample:(id)arg2 target:(id)arg3 ;
-(void)sampler:(id)arg1 didDiscardFrame:(id)arg2 ;
@end
