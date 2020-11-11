/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode {

	VNGenerateAttentionBasedSaliencyImageRequest* __imageSaliencyRequest;

}

@property (nonatomic,retain) VNGenerateAttentionBasedSaliencyImageRequest * _imageSaliencyRequest;              //@synthesize _imageSaliencyRequest=__imageSaliencyRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(VNGenerateAttentionBasedSaliencyImageRequest *)_imageSaliencyRequest;
-(void)set_imageSaliencyRequest:(VNGenerateAttentionBasedSaliencyImageRequest *)arg1 ;
@end

