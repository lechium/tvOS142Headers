/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoFrameSamplerDelegate.h>

@class NSString;

@interface HMIVideoFrameSamplerDelegateAdapter : HMFObject <HMIVideoFrameSamplerDelegate> {

	/*^block*/id _frameSamplerDidSampleFrame;
	/*^block*/id _frameSamplerDidDropFrame;

}

@property (copy) id frameSamplerDidSampleFrame;                     //@synthesize frameSamplerDidSampleFrame=_frameSamplerDidSampleFrame - In the implementation block
@property (copy) id frameSamplerDidDropFrame;                       //@synthesize frameSamplerDidDropFrame=_frameSamplerDidDropFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2 ;
-(void)frameSampler:(id)arg1 didDropFrame:(opaqueCMSampleBufferRef)arg2 ;
-(id)frameSamplerDidSampleFrame;
-(id)frameSamplerDidDropFrame;
-(void)setFrameSamplerDidSampleFrame:(id)arg1 ;
-(void)setFrameSamplerDidDropFrame:(id)arg1 ;
@end

