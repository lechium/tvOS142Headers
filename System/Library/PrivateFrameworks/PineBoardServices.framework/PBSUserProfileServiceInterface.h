/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PBSUserProfileServiceInterface <NSObject>
@required
-(void)setServiceDelegate:(id)arg1;
-(void)fetchUserProfilesSnapshotWithCompletionHandler:(/*^block*/id)arg1;
-(void)selectUserProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createUserProfileWithAttributes:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateUserProfileWithIdentifier:(id)arg1 attributes:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)removeUserProfileWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_beginIgnoringUserProfileAccountNotifications;
-(void)_endIgnoringUserProfileAccountNotifications;
-(void)_handleUserProfileAccountNotification:(id)arg1;

@end

