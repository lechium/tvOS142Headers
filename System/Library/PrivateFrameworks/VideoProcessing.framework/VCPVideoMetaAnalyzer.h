/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (nonatomic,retain,readonly) NSDictionary * publicResults; 
@property (nonatomic,retain,readonly) NSDictionary * privateResults; 
+(id)analyzerForTrackType:(id)arg1 withTransform:(CGAffineTransform)arg2 requestAnalyses:(unsigned long long)arg3 formatDescription:(opaqueCMFormatDescriptionRef)arg4 ;
-(NSDictionary *)privateResults;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
-(int)finalizeAnalysis;
-(NSDictionary *)publicResults;
@end

