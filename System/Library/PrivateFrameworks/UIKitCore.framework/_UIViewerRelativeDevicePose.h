/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class _UIMotionEffectAcceleratedOutputRange;

@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding> {

	_UIMotionEffectAcceleratedOutputRange* _acceleratedOutputRange;
	double _planarRotationAngle;
	UIOffset _viewerOffset;

}

@property (assign,nonatomic) UIOffset viewerOffset;                   //@synthesize viewerOffset=_viewerOffset - In the implementation block
@property (assign,nonatomic) double planarRotationAngle;              //@synthesize planarRotationAngle=_planarRotationAngle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_reset;
-(UIOffset)viewerOffset;
-(void)setViewerOffset:(UIOffset)arg1 ;
-(void)_setAcceleration:(CGPoint)arg1 fixingOutputForViewerOffset:(UIOffset)arg2 ;
-(id)_acceleratedOutputRange;
-(UIOffset)_acceleratedOutputForViewerOffset:(UIOffset)arg1 accelerationBoostFactor:(CGPoint)arg2 ;
-(double)planarRotationAngle;
-(void)setPlanarRotationAngle:(double)arg1 ;
@end

