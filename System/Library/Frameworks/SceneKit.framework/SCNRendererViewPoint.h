/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:42 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject {

	MTLRenderPassDescriptor* _passDescriptor;
	SCD_Struct_SC107 _viewport;
	SCNMatrix4 viewMatrix;
	SCNMatrix4 projectionMatrix;

}

@property (assign,nonatomic) SCNMatrix4 viewMatrix; 
@property (assign,nonatomic) SCNMatrix4 projectionMatrix; 
@property (nonatomic,retain) MTLRenderPassDescriptor * passDescriptor; 
@property (assign,nonatomic) SCD_Struct_SC107 viewport; 
-(void)dealloc;
-(void)setViewport:(SCD_Struct_SC107)arg1 ;
-(SCD_Struct_SC107)viewport;
-(SCNMatrix4)projectionMatrix;
-(void)setProjectionMatrix:(SCNMatrix4)arg1 ;
-(SCNMatrix4)viewMatrix;
-(MTLRenderPassDescriptor *)passDescriptor;
-(void)setPassDescriptor:(MTLRenderPassDescriptor *)arg1 ;
-(void)setViewMatrix:(SCNMatrix4)arg1 ;
@end

