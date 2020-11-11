/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICGColor.h>

@interface UIPatternCGColor : UICGColor {

	CGColorRef _cachedUnflippedColor;

}
-(id)description;
-(void)dealloc;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(id)colorSpaceName;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
-(BOOL)isPatternColor;
@end

