/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PBSUserProfileServicePendingCompletionHandler : NSObject {

	long long _type;
	id _wrappedCompletionHandler;

}

@property (nonatomic,readonly) id wrappedCompletionHandler;                                //@synthesize wrappedCompletionHandler=_wrappedCompletionHandler - In the implementation block
@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id fetchUserProfilesSnapshotCompletionHandler; 
@property (nonatomic,readonly) id selectUserProfileCompletionHandler; 
@property (nonatomic,readonly) id createUserProfileCompletionHandler; 
@property (nonatomic,readonly) id updateUserProfileCompletionHandler; 
@property (nonatomic,readonly) id removeUserProfileCompletionHandler; 
-(long long)type;
-(id)_initWithType:(long long)arg1 wrappedCompletionHandler:(id)arg2 ;
-(id)initWithFetchUserProfilesSnapshotCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSelectUserProfileCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCreateUserProfileCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithUpdateUserProfileCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRemoveUserProfileCompletionHandler:(/*^block*/id)arg1 ;
-(id)fetchUserProfilesSnapshotCompletionHandler;
-(id)selectUserProfileCompletionHandler;
-(id)createUserProfileCompletionHandler;
-(id)updateUserProfileCompletionHandler;
-(id)removeUserProfileCompletionHandler;
-(id)wrappedCompletionHandler;
@end

