/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MetalKit.framework/MetalKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MTKMeshBuffer, MTKMesh, NSString;

@interface MTKSubmesh : NSObject {

	unsigned long long _primitiveType;
	unsigned long long _indexType;
	MTKMeshBuffer* _indexBuffer;
	unsigned long long _indexCount;
	MTKMesh* _mesh;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long primitiveType;              //@synthesize primitiveType=_primitiveType - In the implementation block
@property (nonatomic,readonly) unsigned long long indexType;                  //@synthesize indexType=_indexType - In the implementation block
@property (nonatomic,readonly) MTKMeshBuffer * indexBuffer;                   //@synthesize indexBuffer=_indexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long indexCount;                 //@synthesize indexCount=_indexCount - In the implementation block
@property (nonatomic,__weak,readonly) MTKMesh * mesh;                         //@synthesize mesh=_mesh - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)indexType;
-(unsigned long long)primitiveType;
-(unsigned long long)indexCount;
-(MTKMesh *)mesh;
-(MTKMeshBuffer *)indexBuffer;
-(id)initWithMesh:(id)arg1 submesh:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
@end

