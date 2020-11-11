/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class VNFaceLandmarks2D, VNFaceLandmarks3D, VNFaceRegionMap, VNFaceAttributes, VNFaceprint, VNTorsoprint, VNFaceTorsoprint, VNFaceSegments, NSDictionary, NSData, NSArray, NSNumber, VNFaceLegacyFaceCore;

@interface VNFaceObservation : VNDetectedObjectObservation {

	VNFaceLandmarks2D* _cachedLandmarks;
	os_unfair_lock_s _cachedLandmarksLock;
	VNFaceLandmarks2D* _cachedLandmarks65;
	os_unfair_lock_s _cachedLandmarks65Lock;
	VNFaceLandmarks3D* _cachedLandmarks3d;
	os_unfair_lock_s _cachedLandmarks3dLock;
	VNFaceRegionMap* _faceRegionMap;
	VNFaceAttributes* _faceAttributes;
	VNFaceprint* _faceprint;
	VNTorsoprint* _torsoprint;
	VNFaceTorsoprint* _faceTorsoprint;
	VNFaceSegments* _faceSegments;
	float _landmarkScore;
	BOOL _isBlinking;
	float _blinkScore;
	NSDictionary* _expressionsAndScores;
	float _faceJunkinessIndex;
	float _faceOrientationIndex;
	Geometry2D_rect2D_ _alignedBoundingBox;
	CGRect _unalignedBoundingBox;
	NSData* _landmarkPoints;
	NSData* _landmarkPoints65;
	unsigned long long _landmarksConstellation;
	NSArray* _landmarkPrecisionEstimatesPerPoint;
	NSArray* _landmarkOcclusionFlagsPerPoint;
	NSData* _landmarkPoints3d;
	NSData* _poseData;
	float _faceIdConfidence;
	unsigned long long _faceId;
	BOOL _hasBBoxBeenAligned;
	float _alignedRotationAngle;
	NSNumber* _roll;
	NSNumber* _yaw;
	NSData* _alignedMeanShape;
	NSNumber* _faceCaptureQuality;
	unsigned long long _landmarksRequestRevision;
	unsigned long long _landmarks3DRequestRevision;
	VNFaceLandmarks2D* _landmarks;
	VNFaceLegacyFaceCore* _legacyFaceCore;

}

@property (nonatomic,retain) VNFaceLandmarks2D * landmarks;                                         //@synthesize landmarks=_landmarks - In the implementation block
@property (assign,nonatomic) BOOL hasBBoxBeenAligned;                                               //@synthesize hasBBoxBeenAligned=_hasBBoxBeenAligned - In the implementation block
@property (assign,nonatomic) Geometry2D_rect2D_ alignedBoundingBox;                                 //@synthesize alignedBoundingBox=_alignedBoundingBox - In the implementation block
@property (assign,nonatomic) float alignedRotationAngle;                                            //@synthesize alignedRotationAngle=_alignedRotationAngle - In the implementation block
@property (nonatomic,retain) NSData * landmarkPoints;                                               //@synthesize landmarkPoints=_landmarkPoints - In the implementation block
@property (nonatomic,retain) NSData * landmarkPoints65;                                             //@synthesize landmarkPoints65=_landmarkPoints65 - In the implementation block
@property (assign,nonatomic) unsigned long long landmarksConstellation;                             //@synthesize landmarksConstellation=_landmarksConstellation - In the implementation block
@property (nonatomic,retain) NSArray * landmarkPrecisionEstimatesPerPoint;                          //@synthesize landmarkPrecisionEstimatesPerPoint=_landmarkPrecisionEstimatesPerPoint - In the implementation block
@property (nonatomic,retain) NSArray * landmarkOcclusionFlagsPerPoint;                              //@synthesize landmarkOcclusionFlagsPerPoint=_landmarkOcclusionFlagsPerPoint - In the implementation block
@property (nonatomic,retain) NSData * landmarkPoints3d;                                             //@synthesize landmarkPoints3d=_landmarkPoints3d - In the implementation block
@property (nonatomic,retain) NSData * poseData;                                                     //@synthesize poseData=_poseData - In the implementation block
@property (assign,nonatomic) float faceIdConfidence;                                                //@synthesize faceIdConfidence=_faceIdConfidence - In the implementation block
@property (nonatomic,retain) NSData * alignedMeanShape;                                             //@synthesize alignedMeanShape=_alignedMeanShape - In the implementation block
@property (nonatomic,retain) VNTorsoprint * torsoprint; 
@property (nonatomic,retain) NSNumber * roll;                                                       //@synthesize roll=_roll - In the implementation block
@property (nonatomic,retain) NSNumber * yaw;                                                        //@synthesize yaw=_yaw - In the implementation block
@property (assign,nonatomic) unsigned long long landmarksRequestRevision;                           //@synthesize landmarksRequestRevision=_landmarksRequestRevision - In the implementation block
@property (assign,nonatomic) unsigned long long landmarks3DRequestRevision;                         //@synthesize landmarks3DRequestRevision=_landmarks3DRequestRevision - In the implementation block
@property (nonatomic,readonly) CGRect unalignedBoundingBox;                                         //@synthesize unalignedBoundingBox=_unalignedBoundingBox - In the implementation block
@property (nonatomic,readonly) VNFaceLandmarks3D * landmarks3d; 
@property (nonatomic,readonly) VNFaceLandmarks2D * landmarks65; 
@property (nonatomic,readonly) VNFaceRegionMap * faceRegionMap;                                     //@synthesize faceRegionMap=_faceRegionMap - In the implementation block
@property (nonatomic,readonly) VNFaceAttributes * faceAttributes;                                   //@synthesize faceAttributes=_faceAttributes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * expressionsAndConfidence; 
@property (nonatomic,readonly) VNFaceLegacyFaceCore * legacyFaceCore;                               //@synthesize legacyFaceCore=_legacyFaceCore - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VN52 pose; 
@property (nonatomic,readonly) {? poseQuaternion; 
@property (nonatomic,readonly) float nameConfidence; 
@property (assign,nonatomic) unsigned long long faceId;                                             //@synthesize faceId=_faceId - In the implementation block
@property (nonatomic,retain) VNFaceprint * faceprint;                                               //@synthesize faceprint=_faceprint - In the implementation block
@property (nonatomic,retain) VNFaceTorsoprint * faceTorsoprint; 
@property (nonatomic,readonly) VNFaceSegments * faceSegments;                                       //@synthesize faceSegments=_faceSegments - In the implementation block
@property (readonly) float blinkScore; 
@property (getter=faceJunkinessIndex,nonatomic,readonly) float faceJunkinessIndex; 
@property (getter=faceOrientationIndex,nonatomic,readonly) float faceOrientationIndex; 
@property (nonatomic,readonly) NSNumber * faceCaptureQuality;                                       //@synthesize faceCaptureQuality=_faceCaptureQuality - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 andAlignedBoundingBox:(CGRect)arg3 ;
+(BOOL)computeYawPitchRollFromPoseMatrix:(SCD_Struct_VN52)arg1 outputYaw:(float*)arg2 outputPitch:(float*)arg3 outputRoll:(float*)arg4 ;
+(id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 ;
+(BOOL)_exifOrientationFromFaceRollAngle:(float)arg1 exifOrientation:(int*)arg2 error:(id*)arg3 ;
+(id)faceObservationWithBoundingBox:(CGRect)arg1 andAlignedBoundingBox:(CGRect)arg2 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 unalignedBoundingBox:(CGRect)arg2 alignedBoundingBox:(CGRect)arg3 ;
+(id)faceObservationWithBoundingBox:(CGRect)arg1 faceprint:(id)arg2 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 faceprint:(id)arg3 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 roll:(id)arg3 yaw:(id)arg4 ;
+(id)faceObservationWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 alignedBoundingBox:(CGRect)arg3 roll:(id)arg4 yaw:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(VNFaceprint *)faceprint;
-(void)setFaceprint:(VNFaceprint *)arg1 ;
-(unsigned long long)faceId;
-(void)setFaceId:(unsigned long long)arg1 ;
-(VNFaceLandmarks2D *)landmarks;
-(void)setLandmarks:(VNFaceLandmarks2D *)arg1 ;
-(float)faceJunkinessIndex;
-(float)faceOrientationIndex;
-(VNFaceSegments *)faceSegments;
-(NSNumber *)yaw;
-(NSNumber *)roll;
-(SCD_Struct_VN52)pose;
-(VNFaceAttributes *)faceAttributes;
-(void)setYaw:(NSNumber *)arg1 ;
-(void)setRoll:(NSNumber *)arg1 ;
-(void)_initLocks;
-(VNTorsoprint *)torsoprint;
-(id)VNPersonsModelFaceprintWithRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 ;
-(NSDictionary *)expressionsAndConfidence;
-(float)nameConfidence;
-(VNFaceLandmarks2D *)landmarks65;
-(VNFaceLandmarks3D *)landmarks3d;
-({?)poseQuaternion;
-(BOOL)getComputedRectifyingTransform:(CGAffineTransform*)arg1 ;
-(void)setIsBlinking:(BOOL)arg1 ;
-(void)setBlinkScore:(float)arg1 ;
-(BOOL)isBlinking;
-(float)blinkScore;
-(CGRect)alignedBoundingBoxAsCGRect;
-(void)setExpressionsAndScores:(id)arg1 ;
-(id)expressionsAndScores;
-(id)expressionsAndDetections;
-(void)setLandmarkScore:(float)arg1 ;
-(float)landmarkScore;
-(void)setFaceRegionMap:(VNFaceRegionMap *)arg1 ;
-(void)setFaceAttributes:(VNFaceAttributes *)arg1 ;
-(void)setFaceSegments:(VNFaceSegments *)arg1 ;
-(void)setFaceCaptureQuality:(NSNumber *)arg1 ;
-(void)setFaceJunkinessIndex:(float)arg1 ;
-(void)setFaceOrientationIndex:(float)arg1 ;
-(void)setTorsoprint:(VNTorsoprint *)arg1 ;
-(VNFaceTorsoprint *)faceTorsoprint;
-(void)setFaceTorsoprint:(VNFaceTorsoprint *)arg1 ;
-(void)setUnalignedBoundingBox:(CGRect)arg1 ;
-(void)setLegacyFaceCore:(VNFaceLegacyFaceCore *)arg1 ;
-(BOOL)getFaceEXIFOrientation:(int*)arg1 error:(id*)arg2 ;
-(NSNumber *)faceCaptureQuality;
-(BOOL)hasBBoxBeenAligned;
-(void)setHasBBoxBeenAligned:(BOOL)arg1 ;
-(Geometry2D_rect2D_)alignedBoundingBox;
-(void)setAlignedBoundingBox:(Geometry2D_rect2D_)arg1 ;
-(float)alignedRotationAngle;
-(void)setAlignedRotationAngle:(float)arg1 ;
-(NSData *)landmarkPoints;
-(void)setLandmarkPoints:(NSData *)arg1 ;
-(NSData *)landmarkPoints65;
-(void)setLandmarkPoints65:(NSData *)arg1 ;
-(unsigned long long)landmarksConstellation;
-(void)setLandmarksConstellation:(unsigned long long)arg1 ;
-(NSArray *)landmarkPrecisionEstimatesPerPoint;
-(void)setLandmarkPrecisionEstimatesPerPoint:(NSArray *)arg1 ;
-(NSArray *)landmarkOcclusionFlagsPerPoint;
-(void)setLandmarkOcclusionFlagsPerPoint:(NSArray *)arg1 ;
-(NSData *)landmarkPoints3d;
-(void)setLandmarkPoints3d:(NSData *)arg1 ;
-(NSData *)poseData;
-(void)setPoseData:(NSData *)arg1 ;
-(float)faceIdConfidence;
-(void)setFaceIdConfidence:(float)arg1 ;
-(NSData *)alignedMeanShape;
-(void)setAlignedMeanShape:(NSData *)arg1 ;
-(unsigned long long)landmarksRequestRevision;
-(void)setLandmarksRequestRevision:(unsigned long long)arg1 ;
-(unsigned long long)landmarks3DRequestRevision;
-(void)setLandmarks3DRequestRevision:(unsigned long long)arg1 ;
-(CGRect)unalignedBoundingBox;
-(VNFaceRegionMap *)faceRegionMap;
-(VNFaceLegacyFaceCore *)legacyFaceCore;
@end

