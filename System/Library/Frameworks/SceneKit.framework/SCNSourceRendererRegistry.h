/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@interface SCNSourceRendererRegistry : NSObject {

	CFDictionaryRef _registry;

}
+(id)sharedRegistry;
-(id)init;
-(void)dealloc;
-(void)rendererDidChange:(id)arg1 ;
-(id)sourceRendererForEngineContext:(C3DEngineContextRef)arg1 source:(id)arg2 textureSource:(id)arg3 targetTexture:(id)arg4 ;
-(void)endFrameForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForEngineContext:(C3DEngineContextRef)arg1 ;
-(void)removeSourceRenderersForSource:(id)arg1 ;
@end

