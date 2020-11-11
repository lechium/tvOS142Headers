/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionEncoder.h>

@interface CVNLPCaptionEncoderLSTM : CVNLPCaptionEncoder {

	void* encoderPlan;
	void* encoderCtx;
	SCD_Struct_CV1* encoderNet;
	SCD_Struct_CV2* meanFeatsBlob;
	SCD_Struct_CV2* attFeatsBlob;
	SCD_Struct_CV2* pAttFeatsBlob;
	BOOL meanFeaturesPresent;

}
-(void)dealloc;
-(id)initWithOptions:(id)arg1 runTimeParams:(id)arg2 ;
-(void)_run:(vImage_Buffer*)arg1 meanFeatures:(id*)arg2 attnFeatures:(id*)arg3 projectedAttnFeatures:(id*)arg4 ;
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
@end

