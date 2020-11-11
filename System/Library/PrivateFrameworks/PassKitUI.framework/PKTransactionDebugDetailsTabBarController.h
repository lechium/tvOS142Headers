/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITabBarController.h>

@class UIBarButtonItem, PKPaymentTransaction, PKTransactionSource, PKTransactionCloudKitDebugDetailsViewController, PKTransactionSpotlightDebugDetailsViewController;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController {

	UIBarButtonItem* _shareButton;
	PKPaymentTransaction* _transaction;
	PKTransactionSource* _transactionSource;
	PKTransactionCloudKitDebugDetailsViewController* _cloudKitViewController;
	PKTransactionSpotlightDebugDetailsViewController* _spotlightViewController;

}
-(void)_handleShareButton:(id)arg1 ;
-(id)initWithTransaction:(id)arg1 transactionSource:(id)arg2 ;
@end

