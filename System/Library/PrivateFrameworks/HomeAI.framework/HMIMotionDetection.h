/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIMotionDetection : HMFObject {

	CGRect _boundingBox;

}

@property (readonly) CGRect boundingBox;              //@synthesize boundingBox=_boundingBox - In the implementation block
-(CGRect)boundingBox;
-(id)initWithBoundingBox:(CGRect)arg1 ;
-(BOOL)applyEventTypeAndCheckIfSubBoundingIsStatic:(CGRect)arg1 forMetric:(long long)arg2 eventType:(long long)arg3 confidence:(float)arg4 ;
@end

