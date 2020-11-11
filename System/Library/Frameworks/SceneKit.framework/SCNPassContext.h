/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@interface SCNPassContext : NSObject {

	SCD_Struct_SC47* _context;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer; 
@property (nonatomic,readonly) id<MTLDevice> device; 
-(double)time;
-(id<MTLDevice>)device;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLCommandBuffer>)commandBuffer;
-(id)inputTextureWithName:(id)arg1 ;
-(id)outputTextureWithName:(id)arg1 ;
@end
