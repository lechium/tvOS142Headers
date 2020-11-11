/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWStillImageProcessorConfiguration.h>

@class BWVideoFormat;

@interface BWDeepFusionProcessorControllerConfiguration : BWStillImageProcessorConfiguration {

	BWVideoFormat* _inputFormat;
	BOOL _semanticRenderingEnabled;
	int _stillImageFusionScheme;

}

@property (nonatomic,retain) BWVideoFormat * inputFormat;                //@synthesize inputFormat=_inputFormat - In the implementation block
@property (assign,nonatomic) BOOL semanticRenderingEnabled;              //@synthesize semanticRenderingEnabled=_semanticRenderingEnabled - In the implementation block
@property (assign,nonatomic) int stillImageFusionScheme;                 //@synthesize stillImageFusionScheme=_stillImageFusionScheme - In the implementation block
-(void)dealloc;
-(BWVideoFormat *)inputFormat;
-(void)setInputFormat:(BWVideoFormat *)arg1 ;
-(BOOL)semanticRenderingEnabled;
-(void)setSemanticRenderingEnabled:(BOOL)arg1 ;
-(int)stillImageFusionScheme;
-(void)setStillImageFusionScheme:(int)arg1 ;
@end
