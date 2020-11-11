/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFSyncHandler <NSObject>
@optional
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;
-(void)syncDidEnd;
-(id)syncSnapshotForKey:(id)arg1;
-(id)currentSyncSnapshot;
-(id)syncVerificationKeyForKey:(id)arg1;

@end

