/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoFacePoseAnalyzer : NSObject {

	SCD_Struct_VC48 _pose;

}

@property (assign) SCD_Struct_VC48 pose;              //@synthesize pose=_pose - In the implementation block
-(SCD_Struct_VC48)pose;
-(void)setPose:(SCD_Struct_VC48)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 ;
-(BOOL)updateFocalLengthInPixels:(float)arg1 ;
-(int)analyzeFrameForPose:(CVBufferRef)arg1 withFaceRect:(CGRect)arg2 withTimestamp:(SCD_Struct_VC6)arg3 ;
@end

