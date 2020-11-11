/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor

@property (assign,nonatomic) unsigned long long dataType; 
@property (assign,nonatomic) unsigned long long index; 
@property (assign,nonatomic) unsigned long long arrayLength; 
@property (assign,nonatomic) unsigned long long access; 
@property (assign,nonatomic) unsigned long long textureType; 
@property (assign,nonatomic) unsigned long long constantBlockAlignment; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)indirectArgumentDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

