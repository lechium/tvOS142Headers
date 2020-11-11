/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLArgumentEncoder;
#import <SceneKit/SceneKit-Structs.h>
@class NSMutableArray, MTLArgument, NSString;

@interface SCNMTLResourceBinding : NSObject {

	BOOL _needsRenderResource;
	SCD_Struct_SC55 _indices;
	SCD_Struct_SC55 _samplerIndices;
	NSMutableArray* _usedResources;
	id _bindBlock;
	MTLArgument* _argument;
	id<MTLArgumentEncoder> _argumentEncoder;

}

@property (nonatomic,retain) MTLArgument * argument;                              //@synthesize argument=_argument - In the implementation block
@property (nonatomic,retain) id<MTLArgumentEncoder> argumentEncoder;              //@synthesize argumentEncoder=_argumentEncoder - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSMutableArray * usedResources; 
@property (assign,nonatomic) BOOL needsRenderResource; 
@property (nonatomic,copy) id bindBlock;                                          //@synthesize bindBlock=_bindBlock - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)type;
-(MTLArgument *)argument;
-(void)setBindBlock:(id)arg1 ;
-(id)bindBlock;
-(void)setArgument:(MTLArgument *)arg1 ;
-(BOOL)needsRenderResource;
-(id<MTLArgumentEncoder>)argumentEncoder;
-(NSMutableArray *)usedResources;
-(void)setNeedsRenderResource:(BOOL)arg1 ;
-(void)setArgumentEncoder:(id<MTLArgumentEncoder>)arg1 ;
@end

