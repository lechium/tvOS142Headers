/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, CAShapeLayer;

@interface _MKAnnotationSelectionEngineDebugView : UIView {

	CALayer* _touchPointLayer;
	CALayer* _touchAnchorPointLayer;
	CAShapeLayer* _touchLineLayer;
	CAShapeLayer* _projectedLineLayer;
	CGPoint _touchAnchorPoint;
	CGPoint _touchPoint;

}

@property (assign,nonatomic) CGPoint touchAnchorPoint;              //@synthesize touchAnchorPoint=_touchAnchorPoint - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                    //@synthesize touchPoint=_touchPoint - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTouchAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)touchAnchorPoint;
-(void)setTouchPoint:(CGPoint)arg1 ;
-(void)_updateTouchLine;
-(CGPoint)touchPoint;
@end

