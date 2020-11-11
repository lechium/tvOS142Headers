/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface _UISearchControllerView : UIView {

	BOOL __ensureSystemInputViewAboveSearchBarContainerView;

}

@property (assign,nonatomic) BOOL _ensureSystemInputViewAboveSearchBarContainerView;              //@synthesize _ensureSystemInputViewAboveSearchBarContainerView=__ensureSystemInputViewAboveSearchBarContainerView - In the implementation block
-(void)bringSubviewToFront:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)set_ensureSystemInputViewAboveSearchBarContainerView:(BOOL)arg1 ;
-(BOOL)_ensureSystemInputViewAboveSearchBarContainerView;
-(void)_ensureViewOfClassIsOnTop:(Class)arg1 ;
-(void)_ensureContainerIsOnTop;
-(void)_ensureCarPlayLimitedUIIsOnTop;
@end

