/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/AMSUIWebPagePresenter.h>

@protocol AMSUIWebPageViewControllerDelegate;
@class AMSUIWebView, NSURL, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebPageModel, NSString;

@interface AMSUIWebPageViewController : AMSUICommonViewController <AMSUIWebPagePresenter> {

	BOOL _replacing;
	id<AMSUIWebPageViewControllerDelegate> _delegate;
	AMSUIWebView* _webView;
	NSURL* _URL;
	AMSUIWebAppearance* _appearance;
	AMSUIWebClientContext* _context;
	AMSUIWebPageModel* _model;
	CGSize _contentSize;

}

@property (nonatomic,readonly) AMSUIWebAppearance * appearance;                                   //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) AMSUIWebClientContext * context;                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                  //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) AMSUIWebPageModel * model;                                           //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL replacing;                                                      //@synthesize replacing=_replacing - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                                         //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic,__weak) id<AMSUIWebPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AMSUIWebView * webView;                                            //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AMSUIWebPageViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebPageViewControllerDelegate>)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSUIWebPageModel *)model;
-(void)setModel:(AMSUIWebPageModel *)arg1 ;
-(CGSize)contentSize;
-(AMSUIWebAppearance *)appearance;
-(void)viewWillLayoutSubviews;
-(AMSUIWebView *)webView;
-(id)loadRequest:(id)arg1 ;
-(void)loadView;
-(void)setContentSize:(CGSize)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_applyAppearance;
-(void)willPresentPageModel:(id)arg1 appearance:(id)arg2 ;
-(void)_willEncodeRequest:(id)arg1 ;
-(void)_didEncodeRequest:(id)arg1 ;
-(void)_downloadHTMLForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 dataProvider:(id)arg2 ;
-(BOOL)replacing;
-(void)setReplacing:(BOOL)arg1 ;
@end

