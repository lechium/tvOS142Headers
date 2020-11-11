/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIVisualEffectView, UITraitCollection;

@interface _UIVisualEffectEnvironment : NSObject <NSCopying> {

	BOOL _allowsDithering;
	BOOL _allowsBlurring;
	BOOL _useSimpleVibrancy;
	BOOL _reducedTransperancy;
	UIVisualEffectView* _effectView;
	UITraitCollection* _traitCollection;

}

@property (nonatomic,readonly) UIVisualEffectView * effectView;              //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic) BOOL allowsDithering;                           //@synthesize allowsDithering=_allowsDithering - In the implementation block
@property (assign,nonatomic) BOOL allowsBlurring;                            //@synthesize allowsBlurring=_allowsBlurring - In the implementation block
@property (assign,nonatomic) BOOL useSimpleVibrancy;                         //@synthesize useSimpleVibrancy=_useSimpleVibrancy - In the implementation block
@property (assign,nonatomic) BOOL reducedTransperancy;                       //@synthesize reducedTransperancy=_reducedTransperancy - In the implementation block
@property (nonatomic,copy) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(UITraitCollection *)traitCollection;
-(UIVisualEffectView *)effectView;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)allowsBlurring;
-(BOOL)allowsDithering;
-(BOOL)reducedTransperancy;
-(BOOL)useSimpleVibrancy;
-(void)setAllowsDithering:(BOOL)arg1 ;
-(void)setAllowsBlurring:(BOOL)arg1 ;
-(void)setUseSimpleVibrancy:(BOOL)arg1 ;
-(void)setReducedTransperancy:(BOOL)arg1 ;
-(id)initWithHost:(id)arg1 ;
@end

