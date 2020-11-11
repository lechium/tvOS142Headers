/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKSubcredentialInvitationFlowControllerOperation.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSubcredentialInvitationFlowControllerProtocol;
@class PKSubcredentialInvitationFlowControllerContext, PKHeroCardExplainationHeaderView, NSString;

@interface PKSubcredentialInvitationAcceptedViewController : PKExplanationViewController <PKSubcredentialInvitationFlowControllerOperation, PKViewControllerPreflightable> {

	PKHeroCardExplainationHeaderView* _heroCardView;
	BOOL _isPassExpress;
	PKSubcredentialInvitationFlowControllerContext* _provisioningContext;
	id<PKSubcredentialInvitationFlowControllerProtocol> _flowController;

}

@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController;              //@synthesize flowController=_flowController - In the implementation block
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext;              //@synthesize provisioningContext=_provisioningContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)operation;
-(void)viewDidLoad;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithFlowController:(id)arg1 context:(id)arg2 ;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(PKSubcredentialInvitationFlowControllerContext *)arg1 ;
@end
