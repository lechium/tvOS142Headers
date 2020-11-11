/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, NSString, CAGradientLayer;

@interface AVGradientView : UIView

@property (nonatomic,copy) NSArray * colors; 
@property (nonatomic,copy) NSArray * locations; 
@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer; 
+(Class)layerClass;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CAGradientLayer *)_gradientLayer;
-(void)setLeftToRight:(BOOL)arg1 ;
@end
