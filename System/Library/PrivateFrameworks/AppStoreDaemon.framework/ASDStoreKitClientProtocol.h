/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ASDStoreKitClientProtocol <ASDNotificationCenterDialogObserver>
@required
-(void)updatedTransactions:(id)arg1;
-(void)removedTransactions:(id)arg1;
-(void)downloadAdded:(id)arg1;
-(void)downloadStatusChanged:(id)arg1;
-(void)downloadRemoved:(id)arg1;
-(void)storefrontChanged:(id)arg1;
-(void)shouldContinueTransaction:(id)arg1 withNewStorefront:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)removedEntitlementsForProductIdentifiers:(id)arg1;
-(void)askToShowMessageWithReplyBlock:(/*^block*/id)arg1;

@end

