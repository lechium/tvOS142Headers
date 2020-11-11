/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Accounts/Notification/AAAccountNotificationPlugin.bundle/AAAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AAFollowUpController;

@interface AAAccountNotificationFollowUpController : NSObject {

	AAFollowUpController* _followUpController;

}
+(id)_secondaryAccountTypes;
-(id)init;
-(void)updateStartUsingiCloudFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)dismissAllFollowupsForAccount:(id)arg1 ;
-(void)updateVerifyTermsFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_updateStartUsingiCloudFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_updateVerifyTermsFollowupForAccountStore:(id)arg1 account:(id)arg2 oldAccount:(id)arg3 ;
-(void)_dismissStartUsingFollowUp;
-(BOOL)_didAddAccount:(id)arg1 oldAccount:(id)arg2 ;
-(BOOL)_didDeleteAccount:(id)arg1 oldAccount:(id)arg2 ;
@end
