/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformOp.h>

@class NSString, MDLAnimatedMatrix4x4;

@interface MDLTransformMatrixOp : NSObject <MDLTransformOp> {

	BOOL _inverse;
	NSString* _name;
	MDLAnimatedMatrix4x4* _animatedValue;

}

@property (assign,nonatomic) BOOL inverse;                                        //@synthesize inverse=_inverse - In the implementation block
@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MDLAnimatedMatrix4x4 * animatedValue;              //@synthesize animatedValue=_animatedValue - In the implementation block
-(NSString *)name;
-(BOOL)inverse;
-(MDLAnimatedMatrix4x4 *)animatedValue;
-(SCD_Struct_MD1)float4x4AtTime:(double)arg1 ;
-(SCD_Struct_MD1)double4x4AtTime:(double)arg1 ;
-(BOOL)IsInverseOp;
-(id)initWithName:(id)arg1 inverse:(BOOL)arg2 data:(id)arg3 ;
-(void)setInverse:(BOOL)arg1 ;
@end
