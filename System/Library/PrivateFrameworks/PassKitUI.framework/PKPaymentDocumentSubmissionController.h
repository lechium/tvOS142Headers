/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentDocumentSubmissionControllerDelegate, PKPaymentSetupViewControllerDelegate;
@class UIViewController, PKDocumentRequest, UIImage;

@interface PKPaymentDocumentSubmissionController : NSObject {

	long long _state;
	long long _side;
	UIViewController*<PKPaymentDocumentSubmissionControllerDelegate> _delegate;
	PKDocumentRequest* _selectedDocument;
	UIImage* _frontID;
	UIImage* _backID;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	long long _context;
	unsigned long long _featureIdentifier;

}

@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;                                 //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (assign,nonatomic) long long context;                                                                             //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long featureIdentifier;                                                          //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (assign,nonatomic) long long state;                                                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long side;                                                                                //@synthesize side=_side - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PKPaymentDocumentSubmissionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKDocumentRequest * selectedDocument;                                                          //@synthesize selectedDocument=_selectedDocument - In the implementation block
@property (nonatomic,retain) UIImage * frontID;                                                                             //@synthesize frontID=_frontID - In the implementation block
@property (nonatomic,retain) UIImage * backID;                                                                              //@synthesize backID=_backID - In the implementation block
-(UIViewController*<PKPaymentDocumentSubmissionControllerDelegate>)delegate;
-(void)setDelegate:(UIViewController*<PKPaymentDocumentSubmissionControllerDelegate>)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(unsigned long long)featureIdentifier;
-(void)stateChanged;
-(void)setFeatureIdentifier:(unsigned long long)arg1 ;
-(id)nextViewController;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id)initWithSetupDelegate:(id)arg1 context:(long long)arg2 acceptableDocuments:(id)arg3 featureIdentifier:(unsigned long long)arg4 ;
-(UIImage *)frontID;
-(UIImage *)backID;
-(PKDocumentRequest *)selectedDocument;
-(void)uploadID;
-(void)contactApplePressed;
-(long long)side;
-(void)capturedImage:(id)arg1 ;
-(void)userWantsToCancel;
-(void)terminateSetupFlow;
-(void)captureFailedWithError:(id)arg1 ;
-(void)setSide:(long long)arg1 ;
-(void)userWantsToContinue;
-(void)userApprovedCapturedID;
-(void)tryUploadAgain;
-(void)scanAgain;
-(void)userRejectedCapturedID;
-(void)setFrontID:(UIImage *)arg1 ;
-(void)setBackID:(UIImage *)arg1 ;
-(void)setSelectedDocument:(PKDocumentRequest *)arg1 ;
@end

