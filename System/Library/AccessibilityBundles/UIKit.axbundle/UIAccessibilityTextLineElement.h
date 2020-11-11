/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface UIAccessibilityTextLineElement : UIAccessibilityElement {

	NSRange _range;
	CGRect _bounds;

}

@property (assign,nonatomic) NSRange textRange;              //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGRect textBounds;              //@synthesize bounds=_bounds - In the implementation block
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityHint;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(CGRect)textBounds;
-(void)setTextBounds:(CGRect)arg1 ;
@end
