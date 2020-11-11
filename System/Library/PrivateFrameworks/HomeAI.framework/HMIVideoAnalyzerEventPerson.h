/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@class HMIVideoAnalyzerEventFace;

@interface HMIVideoAnalyzerEventPerson : HMIVideoAnalyzerEvent {

	BOOL _isBoundingBoxEstimated;
	HMIVideoAnalyzerEventFace* _face;

}

@property (getter=hasEstimatedBoundingBox,readonly) BOOL isBoundingBoxEstimated;              //@synthesize isBoundingBoxEstimated=_isBoundingBoxEstimated - In the implementation block
@property (readonly) CGRect boundingBoxForFaceTracker; 
@property (readonly) HMIVideoAnalyzerEventFace * face;                                        //@synthesize face=_face - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)confidence;
-(id)shortDescription;
-(HMIVideoAnalyzerEventFace *)face;
-(CGRect)boundingBox;
-(id)attributeDescriptions;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 face:(id)arg4 ;
-(id)initWithFaceEvent:(id)arg1 ;
-(CGRect)boundingBoxForFaceTracker;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
-(BOOL)hasEstimatedBoundingBox;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 face:(id)arg3 ;
@end

