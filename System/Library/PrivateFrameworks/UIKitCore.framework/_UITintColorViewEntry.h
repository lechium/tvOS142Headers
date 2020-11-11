/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry {

	UIColor* _tintColor;

}

@property (nonatomic,copy) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
@end
