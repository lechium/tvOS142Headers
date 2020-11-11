/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Accounts/Notification/GameCenterAccountNotificationPlugin.bundle/GameCenterAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACDAccountNotificationPlugin <NSObject>
@optional
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)canRemoveAccount:(id)arg1 inStore:(id)arg2;
-(BOOL)account:(id)arg1 willChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 didChangeWithType:(int)arg2 inStore:(id)arg3 oldAccount:(id)arg4;
-(void)account:(id)arg1 willPerformActionsForDataclasses:(id)arg2;
-(void)account:(id)arg1 didPerformActionsForDataclasses:(id)arg2;

@end

