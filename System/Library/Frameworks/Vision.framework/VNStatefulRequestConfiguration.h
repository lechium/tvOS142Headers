/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSUUID;

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration {

	NSUUID* _requestUUID;
	SCD_Struct_VN50 _frameAnalysisSpacing;

}

@property (assign) SCD_Struct_VN50 frameAnalysisSpacing;              //@synthesize frameAnalysisSpacing=_frameAnalysisSpacing - In the implementation block
@property (readonly) NSUUID * requestUUID;                            //@synthesize requestUUID=_requestUUID - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)requestUUID;
-(id)initWithRequestClass:(Class)arg1 ;
-(SCD_Struct_VN50)frameAnalysisSpacing;
-(void)setFrameAnalysisSpacing:(SCD_Struct_VN50)arg1 ;
@end

