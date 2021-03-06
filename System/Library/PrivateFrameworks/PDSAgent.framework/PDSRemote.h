/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PDSRemote
@required
-(void)storeEntries:(id)arg1 deleteEntries:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)batchUpdateEntries:(id)arg1 forClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)removeAllEntriesForUser:(id)arg1 withClientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)entriesForUser:(id)arg1 clientID:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)activeUsersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)usersWithClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)entriesForClientID:(id)arg1 withCompletion:(/*^block*/id)arg2;

@end

