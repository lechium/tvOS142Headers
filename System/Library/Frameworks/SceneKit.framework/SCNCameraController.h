/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SCNCameraControllerDelegate;
#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNCameraController : NSObject {

	SCD_Struct_SC139 _orientationState;
	SCD_Struct_SC15 _inputLocation;
	SCD_Struct_SC15 _arcball;
	SCD_Struct_SC140 _inertia;
	 _up;
	 _target;
	 _minimumAngles;
	 _maximumAngles;
	BOOL _handlingInteraction;
	BOOL _drivenBydefaultNavigationCameraController;
	BOOL _automaticTarget;
	id<SCNCameraControllerDelegate> _delegate;
	SCNNode* _pointOfView;
	long long _interactionMode;

}

@property (assign,nonatomic) BOOL drivenByDefaultNavigationCameraController; 
@property (assign,nonatomic)  simdUp; 
@property (assign,nonatomic)  simdTarget; 
@property (assign,nonatomic) SCNVector3 up; 
@property (assign,nonatomic) float verticalMaximumAngle; 
@property (assign,nonatomic) float horizontalMaximumAngle; 
@property (assign,nonatomic) id<SCNCameraControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SCNNode * pointOfView;                                       //@synthesize pointOfView=_pointOfView - In the implementation block
@property (assign,nonatomic) long long interactionMode;                                   //@synthesize interactionMode=_interactionMode - In the implementation block
@property (assign,nonatomic) SCNVector3 target; 
@property (assign,nonatomic) BOOL automaticTarget;                                        //@synthesize automaticTarget=_automaticTarget - In the implementation block
@property (assign,nonatomic) SCNVector3 worldUp; 
@property (assign,nonatomic) BOOL inertiaEnabled; 
@property (assign,nonatomic) float inertiaFriction; 
@property (getter=isInertiaRunning,nonatomic,readonly) BOOL inertiaRunning; 
@property (assign,nonatomic) float minimumVerticalAngle; 
@property (assign,nonatomic) float maximumVerticalAngle; 
@property (assign,nonatomic) float minimumHorizontalAngle; 
@property (assign,nonatomic) float maximumHorizontalAngle; 
-(id)init;
-(void)dealloc;
-(id<SCNCameraControllerDelegate>)delegate;
-(void)setDelegate:(id<SCNCameraControllerDelegate>)arg1 ;
-(void)setTarget:(SCNVector3)arg1 ;
-(SCNVector3)target;
-(SCNVector3)up;
-(SCNVector3)worldUp;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(SCNNode *)pointOfView;
-()simdTarget;
-(void)setInertiaEnabled:(BOOL)arg1 ;
-(void)setInteractionMode:(long long)arg1 ;
-(void)setDrivenByDefaultNavigationCameraController:(BOOL)arg1 ;
-(BOOL)inertiaEnabled;
-(float)inertiaFriction;
-(void)setInertiaFriction:(float)arg1 ;
-(long long)interactionMode;
-(BOOL)isInertiaRunning;
-(BOOL)automaticTarget;
-(void)setAutomaticTarget:(BOOL)arg1 ;
-(void)frameNodes:(id)arg1 ;
-(void)rollBy:(float)arg1 aroundScreenPoint:(CGPoint)arg2 viewport:(CGSize)arg3 ;
-(void)translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)setSimdTarget:;
-(void)updateInertiaAtTime:(double)arg1 ;
-(void)setUp:(SCNVector3)arg1 ;
-(void)setSimdUp:;
-(void)stopInertia;
-(void)endInteraction:(CGPoint)arg1 withViewport:(CGSize)arg2 velocity:(CGPoint)arg3 ;
-(void)beginInteraction:(CGPoint)arg1 withViewport:(CGSize)arg2 ;
-(void)continueInteraction:(CGPoint)arg1 withViewport:(CGSize)arg2 sensitivity:(double)arg3 ;
-(void)_setInertiaRunning:(BOOL)arg1 ;
-()simdUp;
-(void)setPointOfView:(id)arg1 updateUpTransform:(BOOL)arg2 ;
-(float)maximumVerticalAngle;
-(float)maximumHorizontalAngle;
-(void)setMaximumVerticalAngle:(float)arg1 ;
-(void)setMaximumHorizontalAngle:(float)arg1 ;
-(void)_translateInCameraSpaceByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(void)_resetOrientationState;
-(void)_rotateByX:(float)arg1 Y:(float)arg2 ;
-(4)_directionForScreenPoint:(CGPoint)arg1 viewport:(CGSize)arg2 ;
-(BOOL)useOrbitInteractionMode;
-(SCD_Struct_SC15)unrolledWorldOrientation:(out float*)arg1 ;
-(4)_mapToSphere:(CGPoint)arg1 inViewport:(CGSize)arg2 ;
-(void)rotateByX:(float)arg1 Y:(float)arg2 ;
-(void)_updateArcballOrientation;
-(void)_endDraggingWithVelocity:(CGPoint)arg1 ;
-(BOOL)drivenByDefaultNavigationCameraController;
-(void)_updateRotation;
-(void)_capOrientationAnglesToMaximum;
-(SCD_Struct_SC15)_orientationForMode;
-(SCD_Struct_SC15)_convertRotationFromWorldToPointOfView:(SCD_Struct_SC15)arg1 ;
-(void)_updateInertiaAtTime:(double)arg1 ;
-(void)setWorldUp:(SCNVector3)arg1 ;
-(float)minimumVerticalAngle;
-(float)minimumHorizontalAngle;
-(void)setMinimumVerticalAngle:(float)arg1 ;
-(void)setMinimumHorizontalAngle:(float)arg1 ;
-(float)verticalMaximumAngle;
-(float)horizontalMaximumAngle;
-(void)setVerticalMaximumAngle:(float)arg1 ;
-(void)setHorizontalMaximumAngle:(float)arg1 ;
-(void)translateInScreenSpaceTo:(CGPoint)arg1 viewport:(CGSize)arg2 ;
-(void)rollCameraSpaceBy:(float)arg1 withPoint:(CGPoint)arg2 viewport:(CGSize)arg3 ;
-(void)rollAroundTarget:(float)arg1 ;
-(void)dollyToTarget:(float)arg1 ;
-(void)clearRoll;
-(SCD_Struct_SC13)lookAtWith:target:;
-(void)dollyBy:(float)arg1 onScreenPoint:(CGPoint)arg2 viewport:(CGSize)arg3 ;
-(1)_targetRelativeToPointOfViewParent;
-(BOOL)_isLocationValid:(CGPoint)arg1 inViewport:(CGSize)arg2 ;
-(4)_orthographicViewSpaceTranslationForZoomAtScreenPoint:(float)arg1 scaleDelta:(CGSize)arg2 ;
@end

