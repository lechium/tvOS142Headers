/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIVisualEffectLayerConfig.h>

@class UIColor;

@interface _UIVisualEffectTintLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _tintColor;

}

@property (nonatomic,readonly) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)layerWithTintColor:(id)arg1 filterType:(id)arg2 ;
+(id)layerWithTintColor:(id)arg1 ;
-(id)description;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
@end

