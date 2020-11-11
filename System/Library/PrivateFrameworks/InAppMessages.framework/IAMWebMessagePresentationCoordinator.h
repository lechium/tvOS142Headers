/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IAMWebMessageControllerDelegate.h>
#import <libobjc.A.dylib/IAMViewControllerMetricsDelegate.h>

@protocol IAMWebMessagePresentationCoordinatorDelegate;
@class NSURL, IAMWebMessageController, ICInAppMessageEntry, NSString;

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate> {

	NSURL* _webArchiveURL;
	/*^block*/id _modalViewControllerDismissedCompletion;
	BOOL _isPresenting;
	id<IAMWebMessagePresentationCoordinatorDelegate> _delegate;
	IAMWebMessageController* _webMessageController;
	ICInAppMessageEntry* _webMessageEntry;

}

@property (nonatomic,retain) IAMWebMessageController * webMessageController;                                //@synthesize webMessageController=_webMessageController - In the implementation block
@property (nonatomic,retain) ICInAppMessageEntry * webMessageEntry;                                         //@synthesize webMessageEntry=_webMessageEntry - In the implementation block
@property (assign,nonatomic,__weak) id<IAMWebMessagePresentationCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isPresenting;                                                             //@synthesize isPresenting=_isPresenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)load;
-(id<IAMWebMessagePresentationCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<IAMWebMessagePresentationCoordinatorDelegate>)arg1 ;
-(BOOL)present;
-(BOOL)isPresenting;
-(id)presentingViewController;
-(void)viewController:(id)arg1 didReportDismissalAction:(long long)arg2 ;
-(void)setWebMessageController:(IAMWebMessageController *)arg1 ;
-(IAMWebMessageController *)webMessageController;
-(ICInAppMessageEntry *)webMessageEntry;
-(void)setIsPresenting:(BOOL)arg1 ;
-(void)_modalViewControllerDismissalTransitionDidEnd:(id)arg1 ;
-(void)_handleWebMessageDismissed;
-(void)_dismissModalViewController:(/*^block*/id)arg1 ;
-(void)_handleOpenURL:(id)arg1 ;
-(void)webMessageControllerWebViewDidRequestClose:(id)arg1 ;
-(void)webMessageControllerWebViewDidRequestOpenURL:(id)arg1 url:(id)arg2 options:(id)arg3 ;
-(void)webMessageControllerWebViewDidReportEvent:(id)arg1 event:(id)arg2 ;
-(void)webMessageControllerWebViewDidRequestAction:(id)arg1 actionConfiguration:(id)arg2 options:(id)arg3 ;
-(id)initWithWebMessageEntry:(id)arg1 webArchiveURL:(id)arg2 ;
-(void)setWebMessageEntry:(ICInAppMessageEntry *)arg1 ;
@end

