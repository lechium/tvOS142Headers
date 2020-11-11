/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoFrameAnalyzerDelegate;
@class MovingAverage, NSUUID, NSString;

@interface HMIVideoFrameAnalyzer : HMIVideoProcessingNode <HMFLogging> {

	MovingAverage* _analysisTime;
	BOOL _recognizeFaces;
	id<HMIVideoFrameAnalyzerDelegate> _delegate;
	NSUUID* _sessionIdentifier;
	NSUUID* _homeUUID;

}

@property (__weak) id<HMIVideoFrameAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) double averageAnalysisTime; 
@property (readonly) NSUUID * sessionIdentifier;                            //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign) BOOL recognizeFaces;                                     //@synthesize recognizeFaces=_recognizeFaces - In the implementation block
@property (retain) NSUUID * homeUUID;                                       //@synthesize homeUUID=_homeUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMIVideoFrameAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoFrameAnalyzerDelegate>)arg1 ;
-(NSUUID *)sessionIdentifier;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(double)averageAnalysisTime;
-(BOOL)recognizeFaces;
-(BOOL)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 motionDetections:(id)arg2 ;
-(void)setRecognizeFaces:(BOOL)arg1 ;
@end

