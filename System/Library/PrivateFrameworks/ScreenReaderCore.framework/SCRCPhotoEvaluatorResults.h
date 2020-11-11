/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SCRCPhotoEvaluatorResult;

@interface SCRCPhotoEvaluatorResults : NSObject {

	SCRCPhotoEvaluatorResult* _blurResult;
	SCRCPhotoEvaluatorResult* _colorResult;
	SCRCPhotoEvaluatorResult* _luminanceResult;

}

@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * blurResult;                   //@synthesize blurResult=_blurResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * colorResult;                  //@synthesize colorResult=_colorResult - In the implementation block
@property (nonatomic,readonly) SCRCPhotoEvaluatorResult * luminanceResult;              //@synthesize luminanceResult=_luminanceResult - In the implementation block
-(id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3 ;
-(SCRCPhotoEvaluatorResult *)blurResult;
-(SCRCPhotoEvaluatorResult *)colorResult;
-(SCRCPhotoEvaluatorResult *)luminanceResult;
@end

