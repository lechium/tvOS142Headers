/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIVectorTextLayoutParameters;

@interface _UIVectorTextLayoutInfo : NSObject {

	_UIVectorTextLayoutParameters* _parameters;
	CTFrameRef _frame;
	CGAffineTransform _coordinateAdjustment;

}

@property (nonatomic,retain) _UIVectorTextLayoutParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) CGAffineTransform coordinateAdjustment;                  //@synthesize coordinateAdjustment=_coordinateAdjustment - In the implementation block
@property (assign,nonatomic) CTFrameRef frame;                                        //@synthesize frame=_frame - In the implementation block
-(void)dealloc;
-(double)scale;
-(_UIVectorTextLayoutParameters *)parameters;
-(CTFrameRef)frame;
-(void)setFrame:(CTFrameRef)arg1 ;
-(void)setParameters:(_UIVectorTextLayoutParameters *)arg1 ;
-(CGAffineTransform)coordinateAdjustment;
-(void)setCoordinateAdjustment:(CGAffineTransform)arg1 ;
@end
