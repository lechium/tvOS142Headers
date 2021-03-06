/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)setAssociatedView:(id)arg1;
-(UIView *)associatedView;
-(CGSize)fixedSize;
-(void)setFixedSize:(CGSize)arg1;
-(void)_isPlaceholderViewSelector;
-(UIView *)placeheldView;
-(void)setFallbackView:(id)arg1;
-(BOOL)refreshPlaceholder;
-(UIView *)fallbackView;

@end

