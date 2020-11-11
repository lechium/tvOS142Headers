/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMIConfidence, NSDictionary, NSString;

@interface HMIVideoAnalyzerEvent : HMFObject <HMFLogging, NSSecureCoding> {

	BOOL _hasMotionVectors;
	HMIConfidence* _confidence;
	NSDictionary* _userInfo;
	CGRect _boundingBox;

}

@property (readonly) HMIConfidence * confidence;                    //@synthesize confidence=_confidence - In the implementation block
@property (readonly) NSDictionary * userInfo;                       //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) BOOL hasMotionVectors;                         //@synthesize hasMotionVectors=_hasMotionVectors - In the implementation block
@property (readonly) long long confidenceLevel; 
@property (readonly) CGRect boundingBox;                            //@synthesize boundingBox=_boundingBox - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)eventClasses;
+(id)classShortNameStringMap;
+(id)eventsWithContentsOfFile:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMIConfidence *)confidence;
-(id)shortDescription;
-(CGRect)boundingBox;
-(long long)confidenceLevel;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 userInfo:(id)arg4 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(BOOL)hasMotionVectors;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
@end

