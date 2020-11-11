/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoRetimerDelegate.h>

@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate> {

	/*^block*/id _retimerDidRetimeSampleBuffer;

}

@property (copy) id retimerDidRetimeSampleBuffer;                   //@synthesize retimerDidRetimeSampleBuffer=_retimerDidRetimeSampleBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)retimer:(id)arg1 didRetimeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)retimerDidRetimeSampleBuffer;
-(void)setRetimerDidRetimeSampleBuffer:(id)arg1 ;
@end

