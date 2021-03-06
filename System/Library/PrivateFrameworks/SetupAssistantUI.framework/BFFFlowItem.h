/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BFFFlowItem <NSObject>
@optional
+(BOOL)controllerNeedsToRun;
+(id)internalSkipKey;
+(BOOL)controllerAffectedByTapFreeSetup;
+(void)skippedByCloudConfig;
+(BOOL)isTrailing;
-(id)displayLanguage;
-(BOOL)isEphemeral;
-(id)viewController;
-(void)setNavigationController:(id)arg1;
-(BOOL)controllerNeedsToRun;
-(void)didReceiveInternalSkipInfo;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(BOOL)shouldSuppressExtendedInitializationActivityIndicator;
-(BOOL)shouldPresentModally;
-(void)startFlowItem:(BOOL)arg1;
-(void)controllerWasPopped;
-(BOOL)controllerAllowsNavigatingBack;
-(BOOL)responsibleForViewController:(id)arg1;
-(void)presentHostedViewControllerOnNavigationController:(id)arg1 completion:(/*^block*/id)arg2;
-(void)cancelHostedPresentation;
-(BOOL)shouldAllowStartOver;
-(void)startOver;
-(void)handleDebugGesture;
-(id)internalMenuActions;
-(BOOL)shouldStopInactivityTimer;
-(void)flowItemDidAppear:(BOOL)arg1;

@required
+(id)cloudConfigSkipKey;
-(id)init;
-(void)setDelegate:(id)arg1;

@end

