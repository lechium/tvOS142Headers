/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ACNotificationRebroadcaster : NSObject
+(id)sharedRebroadcaster;
-(id)init;
-(void)dealloc;
-(void)_beginObservingAccountStoreDidChangeNotifications;
-(void)_endObservingAccountStoreDidChangeNotifications;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

