/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:06:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLFunctionConstantValues : NSObject <NSCopying>
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setConstantValues:(const void*)arg1 type:(unsigned long long)arg2 withRange:(NSRange)arg3 ;
-(void)setConstantValue:(const void*)arg1 type:(unsigned long long)arg2 withName:(id)arg3 ;
@end

