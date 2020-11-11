/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary;

@interface VNFaceLegacyFaceCore : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {

	unsigned long long _profile;
	double _faceSize;
	double _faceAngle;
	long long _trackID;
	unsigned long long _trackDuration;
	NSDictionary* _features;
	CGPoint _faceCenter;
	CGPoint _leftEye;
	CGPoint _rightEye;
	CGPoint _mouth;
	CGRect _faceBoundingBox;

}

@property (nonatomic,readonly) unsigned long long profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) double faceSize;                                 //@synthesize faceSize=_faceSize - In the implementation block
@property (nonatomic,readonly) double faceAngle;                                //@synthesize faceAngle=_faceAngle - In the implementation block
@property (nonatomic,readonly) CGPoint faceCenter;                              //@synthesize faceCenter=_faceCenter - In the implementation block
@property (nonatomic,readonly) CGRect faceBoundingBox;                          //@synthesize faceBoundingBox=_faceBoundingBox - In the implementation block
@property (nonatomic,readonly) CGPoint leftEye;                                 //@synthesize leftEye=_leftEye - In the implementation block
@property (nonatomic,readonly) CGPoint rightEye;                                //@synthesize rightEye=_rightEye - In the implementation block
@property (nonatomic,readonly) CGPoint mouth;                                   //@synthesize mouth=_mouth - In the implementation block
@property (nonatomic,readonly) long long trackID;                               //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) unsigned long long trackDuration;                //@synthesize trackDuration=_trackDuration - In the implementation block
@property (nonatomic,readonly) NSDictionary * features;                         //@synthesize features=_features - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
+(void)_setFaceExpressionFeatureScoreIfDetected:(id)arg1 features:(id)arg2 detectionKey:(id)arg3 scoreKey:(id)arg4 featureKey:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)profile;
-(NSDictionary *)features;
-(double)faceAngle;
-(double)faceSize;
-(CGPoint)leftEye;
-(CGPoint)mouth;
-(CGPoint)rightEye;
-(unsigned long long)trackDuration;
-(long long)trackID;
-(unsigned long long)requestRevision;
-(CGRect)faceBoundingBox;
-(id)initWithFace:(id)arg1 ;
-(CGPoint)faceCenter;
@end

