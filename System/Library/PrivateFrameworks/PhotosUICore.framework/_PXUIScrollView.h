/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIScrollView.h>

@protocol PXUIScrollViewDelegate, _PXUIScrollViewFocusItemProvider;
@interface _PXUIScrollView : UIScrollView {

	BOOL _deferContentOffsetUpdates;
	BOOL _respectsContentZOrder;
	id<PXUIScrollViewDelegate> _px_delegate;
	id<_PXUIScrollViewFocusItemProvider> _focusItemProvider;
	CGPoint _pagingOriginOffset;

}

@property (assign,setter=px_setDelegate:,nonatomic,__weak) id<PXUIScrollViewDelegate> px_delegate;              //@synthesize px_delegate=_px_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_PXUIScrollViewFocusItemProvider> focusItemProvider;                     //@synthesize focusItemProvider=_focusItemProvider - In the implementation block
@property (assign,nonatomic) CGPoint pagingOriginOffset;                                                        //@synthesize pagingOriginOffset=_pagingOriginOffset - In the implementation block
@property (assign,nonatomic) BOOL deferContentOffsetUpdates;                                                    //@synthesize deferContentOffsetUpdates=_deferContentOffsetUpdates - In the implementation block
@property (assign,nonatomic) BOOL respectsContentZOrder;                                                        //@synthesize respectsContentZOrder=_respectsContentZOrder - In the implementation block
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDeferContentOffsetUpdates:(BOOL)arg1 ;
-(void)setRespectsContentZOrder:(BOOL)arg1 ;
-(BOOL)respectsContentZOrder;
-(BOOL)deferContentOffsetUpdates;
-(void)setFocusItemProvider:(id<_PXUIScrollViewFocusItemProvider>)arg1 ;
-(id<_PXUIScrollViewFocusItemProvider>)focusItemProvider;
-(void)setPagingOriginOffset:(CGPoint)arg1 ;
-(void)px_addSubview:(id)arg1 ;
-(void)px_setDelegate:(id)arg1 ;
-(void)_updatePagingOrigin;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(id<PXUIScrollViewDelegate>)px_delegate;
-(CGPoint)pagingOriginOffset;
@end

