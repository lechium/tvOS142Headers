/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RTPersistenceMetricsDelegate <NSObject>
@required
-(void)onDailyMetricsNotification:(id)arg1;
-(void)persistenceStore:(id)arg1 didPrepareWithContext:(id)arg2;
-(void)persistenceStoreFailedWithError:(id)arg1;
-(void)persistenceStoreResetSyncWithUserInfo:(id)arg1;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didStartMigratingStore:(id)arg3 withModelProvider:(id)arg4;
-(void)persistenceDriver:(id)arg1 persistenceMigrator:(id)arg2 didFinishMigratingStore:(id)arg3 withModelProvider:(id)arg4;

@end

