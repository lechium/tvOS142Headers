/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying> {

	double _borderAlpha;
	UIColor* _borderColor;
	double _borderWidth;
	double _fillAlpha;
	UIColor* _fillColor;
	double _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned long long _dropShadowEdges;
	double _dropShadowWidth;

}

@property (assign,nonatomic) double borderAlpha;                                             //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) double borderWidth;                                             //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double fillAlpha;                                               //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double dropShadowAlpha;                                         //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                                      //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned long long dropShadowEdges;                             //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) double dropShadowWidth;                                         //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (getter=isFullyTransparent,nonatomic,readonly) BOOL fullyTransparent; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(void)setBorderColor:(UIColor *)arg1 ;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)isFullyTransparent;
-(double)borderAlpha;
-(void)setBorderAlpha:(double)arg1 ;
-(double)fillAlpha;
-(void)setFillAlpha:(double)arg1 ;
-(double)dropShadowAlpha;
-(void)setDropShadowAlpha:(double)arg1 ;
-(UIColor *)dropShadowColor;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(unsigned long long)dropShadowEdges;
-(void)setDropShadowEdges:(unsigned long long)arg1 ;
-(double)dropShadowWidth;
-(void)setDropShadowWidth:(double)arg1 ;
@end

