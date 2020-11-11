/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLArgumentDescriptor.h>

@interface MTLArgumentDescriptorInternal : MTLArgumentDescriptor {

	MTLArgumentDescriptorPrivate _private;

}
+(id)indirectArgumentDescriptor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)index;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(unsigned long long)access;
-(unsigned long long)constantBlockAlignment;
-(void)setDataType:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setAccess:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setConstantBlockAlignment:(unsigned long long)arg1 ;
@end

