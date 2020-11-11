/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPTaskProcessingService;

@interface VCPVisualIntelligenceAnalysisService : NSObject {

	VCPTaskProcessingService* _service;

}
+(id)service;
-(id)init;
-(void)requestShareSheetProcessingForPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)requestShareSheetProcessingForAssetURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
@end

