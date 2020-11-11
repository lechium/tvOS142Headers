/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServicesUI/AMSUICommonViewController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/AMSURLProtocolDelegate.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnerDelegate.h>
#import <libobjc.A.dylib/AMSUIWebPageViewControllerDelegate.h>
#import <libobjc.A.dylib/AMSUIWebProtocolDelegate.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@protocol AMSUIWebDelegate;
@class AMSUIWebClientContext, UIViewController, NSURL, AMSUIWebContainerViewController, AMSUIWebPageViewController, ACAccount, AMSUIWebAppearance, AMSProcessInfo, NSDictionary, NSString;

@interface AMSUIWebViewController : AMSUICommonViewController <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSBagConsumer> {

	BOOL _hasAppeared;
	BOOL _hasStarted;
	id<AMSUIWebDelegate> _delegate;
	AMSUIWebClientContext* _context;
	UIViewController* _childViewController;
	long long _currentLoadState;
	NSURL* _lastLoadedURL;
	AMSUIWebContainerViewController* _rootContainer;
	AMSUIWebPageViewController* _webPage;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIViewController * childViewController;                         //@synthesize childViewController=_childViewController - In the implementation block
@property (assign,nonatomic) long long currentLoadState;                                     //@synthesize currentLoadState=_currentLoadState - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                               //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasStarted;                                                //@synthesize hasStarted=_hasStarted - In the implementation block
@property (nonatomic,retain) NSURL * lastLoadedURL;                                          //@synthesize lastLoadedURL=_lastLoadedURL - In the implementation block
@property (nonatomic,readonly) AMSUIWebContainerViewController * rootContainer;              //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,readonly) AMSUIWebPageViewController * webPage;                         //@synthesize webPage=_webPage - In the implementation block
@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,retain) AMSUIWebAppearance * appearance; 
@property (nonatomic,retain) id<AMSBagProtocol> bag; 
@property (nonatomic,retain) AMSProcessInfo * clientInfo; 
@property (nonatomic,retain) NSDictionary * clientOptions; 
@property (assign,nonatomic,__weak) id<AMSUIWebDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL loadUsingWebKit; 
@property (nonatomic,retain) NSDictionary * metricsOverlay; 
@property (nonatomic,retain) NSDictionary * clientData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
-(id<AMSUIWebDelegate>)delegate;
-(void)setDelegate:(id<AMSUIWebDelegate>)arg1 ;
-(BOOL)hasStarted;
-(void)setHasStarted:(BOOL)arg1 ;
-(AMSUIWebClientContext *)context;
-(AMSUIWebAppearance *)appearance;
-(void)setAppearance:(AMSUIWebAppearance *)arg1 ;
-(AMSProcessInfo *)clientInfo;
-(void)viewWillLayoutSubviews;
-(id)loadRequest:(id)arg1 ;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(void)loadView;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)loadURL:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithBag:(id)arg1 ;
-(void)_dismiss;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSDictionary *)clientData;
-(UIViewController *)childViewController;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)setClientOptions:(NSDictionary *)arg1 ;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSDictionary *)metricsOverlay;
-(void)setClientData:(NSDictionary *)arg1 ;
-(NSDictionary *)clientOptions;
-(id)initWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 ;
-(id)loadBagValue:(id)arg1 ;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleAuthenticateRequest:(id)arg3 ;
-(AMSUIWebPageViewController *)webPage;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleDialogRequest:(id)arg3 ;
-(void)actionDidFinishPurchaseWithResult:(id)arg1 error:(id)arg2 ;
-(id)runJSRequest:(id)arg1 ;
-(BOOL)loadUsingWebKit;
-(void)setLoadUsingWebKit:(BOOL)arg1 ;
-(id)action:(id)arg1 handleActionObject:(id)arg2 ;
-(AMSUIWebContainerViewController *)rootContainer;
-(void)action:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(void)webPageViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(void)protocolHandler:(id)arg1 didEncodeNetworkRequest:(id)arg2 ;
-(id)_rootNavigationController;
-(id)_loadRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_handleAuthenticateRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(id)_handleDialogRequest:(id)arg1 pauseTimeouts:(BOOL)arg2 ;
-(void)_handleDidEncodeNetworkRequest:(id)arg1 ;
-(long long)currentLoadState;
-(void)setCurrentLoadState:(long long)arg1 ;
-(NSURL *)lastLoadedURL;
-(void)setLastLoadedURL:(NSURL *)arg1 ;
-(id)_parseWebPropertiesFromRequest:(id)arg1 ;
-(id)_lazyPromiseForBagSnapshot;
-(id)_lazyPromiseForLoadingSession;
-(id)_lazyPromiseForLoadingRequest:(id)arg1 bagValue:(id)arg2 ;
-(id)_lazyPromiseForPageLoad;
-(id)_stringForLoadState:(long long)arg1 ;
-(void)_showErrorViewWithError:(id)arg1 request:(id)arg2 bagValue:(id)arg3 ;
@end

