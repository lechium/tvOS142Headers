/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <CVNLP/CVNLPCaptionModelBase.h>

@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase {

	unsigned long long data_dim[4];

}
-(void)computeCaptionForImage:(vImage_Buffer*)arg1 outputs:(id*)arg2 ;
-(unsigned long long)_blob_size:(SCD_Struct_CV2*)arg1 ;
-(void)computeCaptionForPixelBuffer:(CVBufferRef)arg1 outputs:(id*)arg2 ;
-(void)_fill_blob_data:(SCD_Struct_CV2*)arg1 with:(float)arg2 ;
@end

