/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>

@class HMDHomeManager, UNUserNotificationCenter, NSMutableDictionary, NSString;

@interface HMDUserNotificationCenter : HMFObject <NSSecureCoding, UNUserNotificationCenterDelegate> {

	HMDHomeManager* _homeManager;
	UNUserNotificationCenter* _userNotificationCenter;
	NSMutableDictionary* _notificationRequests;

}

@property (__weak) HMDHomeManager * homeManager;                                     //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) UNUserNotificationCenter * userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (readonly) NSMutableDictionary * notificationRequests;                     //@synthesize notificationRequests=_notificationRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sortDescriptors;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)notificationCategories;
-(id)initWithUserNotificationCenter:(id)arg1 ;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)configureHomeManager:(id)arg1 ;
-(NSMutableDictionary *)notificationRequests;
-(id)sortedRequestsByDate;
-(void)_removeRequestWithIdentifiersFromNotificationCenter:(id)arg1 ;
-(void)_removeRequestWithIdentifier:(id)arg1 ;
-(void)_showNotification:(id)arg1 ;
-(id)createNotificationAttachmentWithIdentifier:(id)arg1 forFileAtPath:(id)arg2 ;
-(id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(BOOL)arg9 ;
-(void)setBadgeNumber:(id)arg1 ;
-(void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2 ;
-(void)cullBulletinsToCount:(unsigned long long)arg1 ;
-(void)removeRequestWithIdentifier:(id)arg1 ;
-(void)registerNotificationCategories;
-(id)insertRequestWithTitle:(id)arg1 snapshotData:(id)arg2 message:(id)arg3 requestIdentifier:(id)arg4 date:(id)arg5 bulletinType:(unsigned long long)arg6 actionURL:(id)arg7 bulletinContext:(id)arg8 actionContext:(id)arg9 ;
@end

