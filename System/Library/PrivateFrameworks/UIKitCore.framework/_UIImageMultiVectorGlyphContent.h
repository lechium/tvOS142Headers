/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@class NSArray;

@interface _UIImageMultiVectorGlyphContent : _UIImageContent {

	NSArray* _glyphs;
	NSArray* _colors;
	NSArray* _offsets;
	NSArray* _scaleFactors;
	CGSize _sizeInPixels;
	CGPoint _anchorPoint;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(CGSize)sizeInPixels;
-(id)initWithScale:(double)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(double)vectorScale;
-(BOOL)canProvideCGImage;
-(void)_prepareforDrawingInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)_drawInRect:(CGRect)arg1 context:(CGContextRef)arg2 effect:(id)arg3 ;
-(BOOL)isCGImage;
-(BOOL)isVectorGlyph;
-(id)initWithSize:(CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(CGPoint)arg6 ;
@end

