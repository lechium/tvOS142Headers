/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HKDataCollectorClientInterface
@required
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3;
-(void)clientRemote_collectionConfigurationDidChange:(id)arg1;
-(void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2;
-(void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2;
-(void)clientRemote_collectThroughDate:(id)arg1 completion:(/*^block*/id)arg2;

@end

