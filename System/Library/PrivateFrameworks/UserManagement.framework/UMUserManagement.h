/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UMUser;


@protocol UMUserManagement <NSObject>
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,copy,readonly) UMUser * loginUser; 
@property (nonatomic,readonly) BOOL isLoginSession; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@property (nonatomic,readonly) unsigned long long userQuotaSize; 
@required
-(UMUser *)currentUser;
-(BOOL)isMultiUser;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)maxNumberOfUsers;
-(unsigned long long)userQuotaSize;
-(UMUser *)loginUser;
-(BOOL)isLoginSession;
-(BOOL)canAccessUserProperties;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserListUpdateObserver:(id)arg1;

@end

