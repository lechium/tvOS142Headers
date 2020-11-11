/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/SVXDeviceSetupFlowSceneMutating.h>

@class SVXDeviceSetupFlowScene, NSString, NSArray, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface _SVXDeviceSetupFlowSceneMutation : NSObject <SVXDeviceSetupFlowSceneMutating> {

	SVXDeviceSetupFlowScene* _baseModel;
	long long _sceneID;
	NSString* _speakableText;
	NSArray* _displayKeyFrames;
	SVXDeviceSetupFlowSiriCapabilitiesHint* _siriCapabilitiesHint;
	struct {
		unsigned isDirty : 1;
		unsigned hasSceneID : 1;
		unsigned hasSpeakableText : 1;
		unsigned hasDisplayKeyFrames : 1;
		unsigned hasSiriCapabilitiesHint : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setSceneID:(long long)arg1 ;
-(id)generate;
-(void)setSpeakableText:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setDisplayKeyFrames:(id)arg1 ;
-(void)setSiriCapabilitiesHint:(id)arg1 ;
@end
