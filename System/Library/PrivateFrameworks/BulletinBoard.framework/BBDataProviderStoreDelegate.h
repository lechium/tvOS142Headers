/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BBDataProviderStoreDelegate <NSObject>
@optional
-(void)dataProviderStore:(id)arg1 didAddParentSectionFactory:(id)arg2;

@required
-(void)dataProviderStore:(id)arg1 didAddDataProvider:(id)arg2 performMigration:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(void)dataProviderStore:(id)arg1 didRemoveDataProvider:(id)arg2;

@end

