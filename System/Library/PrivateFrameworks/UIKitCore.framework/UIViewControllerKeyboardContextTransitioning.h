/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol UIViewControllerKeyboardContextTransitioning <NSObject>
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> mainContext; 
@property (nonatomic,readonly) UIView * fromKeyboard; 
@property (nonatomic,readonly) CGRect fromKeyboardFrame; 
@property (nonatomic,readonly) UIView * toKeyboard; 
@property (nonatomic,readonly) CGRect toKeyboardFrame; 
@required
-(id<UIViewControllerContextTransitioning>)mainContext;
-(UIView *)toKeyboard;
-(UIView *)fromKeyboard;
-(CGRect)fromKeyboardFrame;
-(CGRect)toKeyboardFrame;

@end

