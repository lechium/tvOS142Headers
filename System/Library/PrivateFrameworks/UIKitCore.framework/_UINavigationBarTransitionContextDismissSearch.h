/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {

	UISearchBar* _transitioningSearchBar;

}
-(void)cancel;
-(void)complete;
-(int)transition;
-(void)prepare;
-(void)animate;
@end

