/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIVideoPackageAnalyzerDelegate;
@class NSString;

@interface HMIVideoPackageAnalyzer : HMIVideoProcessingNode <HMFLogging> {

	id<HMIVideoPackageAnalyzerDelegate> _delegate;

}

@property (__weak) id<HMIVideoPackageAnalyzerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMIVideoPackageAnalyzerDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoPackageAnalyzerDelegate>)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

