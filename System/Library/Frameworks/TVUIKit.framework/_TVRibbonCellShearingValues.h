/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVUIKit/TVUIKit-Structs.h>
@interface _TVRibbonCellShearingValues : NSObject {

	CGPoint _shearedMaskingViewCenter;
	CGPoint _maskedContentViewCenter;
	CGRect _shearedMaskingViewBounds;
	CGRect _maskedContentViewBounds;

}

@property (assign,nonatomic) CGRect shearedMaskingViewBounds;               //@synthesize shearedMaskingViewBounds=_shearedMaskingViewBounds - In the implementation block
@property (assign,nonatomic) CGPoint shearedMaskingViewCenter;              //@synthesize shearedMaskingViewCenter=_shearedMaskingViewCenter - In the implementation block
@property (assign,nonatomic) CGRect maskedContentViewBounds;                //@synthesize maskedContentViewBounds=_maskedContentViewBounds - In the implementation block
@property (assign,nonatomic) CGPoint maskedContentViewCenter;               //@synthesize maskedContentViewCenter=_maskedContentViewCenter - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)shearedMaskingViewBounds;
-(CGPoint)shearedMaskingViewCenter;
-(CGRect)maskedContentViewBounds;
-(CGPoint)maskedContentViewCenter;
-(void)setShearedMaskingViewBounds:(CGRect)arg1 ;
-(void)setShearedMaskingViewCenter:(CGPoint)arg1 ;
-(void)setMaskedContentViewBounds:(CGRect)arg1 ;
-(void)setMaskedContentViewCenter:(CGPoint)arg1 ;
@end
