/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:53 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSYSyncCoordinatorDelegate <NSObject>
@optional
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
-(void)supportsMigrationSync;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;

@end
