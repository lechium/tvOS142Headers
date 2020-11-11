/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLArrayType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long arrayLength; 
@property (readonly) unsigned long long stride; 
@property (readonly) unsigned long long argumentIndexStride; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
-(id)elementIndirectArgumentType;
-(id)elementTextureReferenceType;
-(id)elementPointerType;
@end
