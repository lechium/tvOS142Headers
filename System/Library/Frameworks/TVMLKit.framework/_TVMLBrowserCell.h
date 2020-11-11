/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVUIKit/_TVFullScreenBrowserViewCell.h>

@protocol TVMediaController;
@class UIViewController, _TVAppDocumentRequestController, UIView, UIImageView;

@interface _TVMLBrowserCell : _TVFullScreenBrowserViewCell {

	/*^block*/id _onLockupImageCancel;
	struct {
		BOOL loadDataSent;
	}  _flags;
	UIViewController*<TVMediaController> _mediaController;
	id _lockupImageProxy;
	_TVAppDocumentRequestController* _documentController;
	/*^block*/id _onLoadData;
	UIView* _contentBorderView;
	UIView* _contentDimmingView;
	UIImageView* _lockupImageView;

}

@property (nonatomic,readonly) UIView * contentBorderView;                                        //@synthesize contentBorderView=_contentBorderView - In the implementation block
@property (nonatomic,readonly) UIView * contentDimmingView;                                       //@synthesize contentDimmingView=_contentDimmingView - In the implementation block
@property (nonatomic,readonly) UIImageView * lockupImageView;                                     //@synthesize lockupImageView=_lockupImageView - In the implementation block
@property (nonatomic,retain) id lockupImageProxy;                                                 //@synthesize lockupImageProxy=_lockupImageProxy - In the implementation block
@property (nonatomic,readonly) UIViewController*<TVMediaController> mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,retain) _TVAppDocumentRequestController * documentController;                //@synthesize documentController=_documentController - In the implementation block
@property (nonatomic,copy) id onLoadData;                                                         //@synthesize onLoadData=_onLoadData - In the implementation block
-(void)dealloc;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIViewController*<TVMediaController>)mediaController;
-(UIImageView *)lockupImageView;
-(void)setLockupImageProxy:(id)arg1 ;
-(void)setDocumentController:(_TVAppDocumentRequestController *)arg1 ;
-(void)setOnLoadData:(id)arg1 ;
-(_TVAppDocumentRequestController *)documentController;
-(void)_loadDataConditionally:(BOOL)arg1 ;
-(UIView *)contentBorderView;
-(UIView *)contentDimmingView;
-(id)onLoadData;
-(void)normalizedPositionDidChange;
-(id)lockupImageProxy;
@end

