/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSArray, NSString;

@interface ICPushNotificationMessage : NSObject {

	NSDictionary* _userInfo;
	long long _accountDSID;
	long long _actionType;
	NSDictionary* _apsPayload;

}

@property (nonatomic,readonly) long long sagaServerRevision; 
@property (nonatomic,copy,readonly) NSArray * sagaUpdatedSubscribedPlaylistIDs; 
@property (nonatomic,readonly) long long jaliscoServerRevision; 
@property (nonatomic,copy,readonly) NSArray * jaliscoChangedMediaTypes; 
@property (nonatomic,copy,readonly) NSString * clientIdentifier; 
@property (nonatomic,readonly) long long moduleIdentifier; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) long long accountDSID;                                        //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long actionType;                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * apsPayload;                               //@synthesize apsPayload=_apsPayload - In the implementation block
-(NSDictionary *)userInfo;
-(NSString *)clientIdentifier;
-(long long)actionType;
-(long long)accountDSID;
-(id)initWithMessageUserInfo:(id)arg1 ;
-(NSDictionary *)apsPayload;
-(long long)sagaServerRevision;
-(NSArray *)sagaUpdatedSubscribedPlaylistIDs;
-(long long)jaliscoServerRevision;
-(NSArray *)jaliscoChangedMediaTypes;
-(long long)moduleIdentifier;
@end

