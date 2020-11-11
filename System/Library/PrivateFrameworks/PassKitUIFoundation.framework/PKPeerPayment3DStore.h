/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <libobjc.A.dylib/PKMotionManagerClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSCache, SCNMaterial, NSObject, NSMutableArray, PKMotionManager, NSString;

@interface PKPeerPayment3DStore : NSObject <PKMotionManagerClientProtocol> {

	NSCache* _cache;
	SCNMaterial* _textMaterial;
	NSObject*<OS_dispatch_queue> _scenesQueue;
	NSObject*<OS_dispatch_queue> _sceneLoadingQueue;
	NSMutableArray* _activeScenes;
	SCD_Struct_PK0 _rotationMatrix;
	 _skew;
	 _lastRollPitch;
	SCD_Struct_PK0 _staticRotationMatrix;
	 _staticSkew;
	PKMotionManager* _motionManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)material;
-(void)newSceneWithCompletion:(/*^block*/id)arg1 synchronously:(BOOL)arg2 ;
-(void)relinquishScene:(id)arg1 ;
-(void)charactersForText:(id)arg1 completion:(/*^block*/id)arg2 synchronously:(BOOL)arg3 ;
-(void)sceneDidBecomeInactive:(id)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)setRollPitch:;
-(id)nodeForCharacter:(id)arg1 ;
-(void)motionManager:(id)arg1 didReceiveMotion:(id)arg2 ;
@end

