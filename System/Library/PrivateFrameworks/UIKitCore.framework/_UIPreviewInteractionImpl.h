/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView, UIPreviewInteraction;


@protocol _UIPreviewInteractionImpl <NSObject>
@property (assign,nonatomic,__weak) id<UIPreviewInteractionDelegate> delegate; 
@property (nonatomic,__weak,readonly) UIView * view; 
@property (nonatomic,retain) id<_UIPreviewInteractionTouchForceProviding> touchForceProvider; 
@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction; 
@required
-(id<UIPreviewInteractionDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIView *)view;
-(CGPoint*)locationInCoordinateSpace:(id)arg1;
-(id)initWithView:(id)arg1 previewInteraction:(id)arg2;
-(void)setPreviewInteraction:(id)arg1;
-(void)cancelInteraction;
-(void)setTouchForceProvider:(id)arg1;
-(UIPreviewInteraction *)previewInteraction;
-(id<_UIPreviewInteractionTouchForceProviding>)touchForceProvider;

@end
