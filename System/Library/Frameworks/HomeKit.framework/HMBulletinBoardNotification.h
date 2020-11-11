/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMFUnfairLock, NSPredicate, HMBulletinBoardNotificationServiceGroup, NSUUID, HMService, NSString, _HMContext;

@interface HMBulletinBoardNotification : NSObject <NSSecureCoding, HMObjectMerge, HMFMessageReceiver, HMFLogging> {

	HMFUnfairLock* _lock;
	BOOL _enabled;
	NSPredicate* _condition;
	HMBulletinBoardNotificationServiceGroup* _notificationServiceGroup;
	NSUUID* _uniqueIdentifier;
	NSUUID* _targetUUID;
	HMService* _service;
	NSString* _logID;
	_HMContext* _context;

}

@property (nonatomic,copy,readonly) NSUUID * targetUUID;                                                        //@synthesize targetUUID=_targetUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * logID;                                                           //@synthesize logID=_logID - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) HMService * service;                                                      //@synthesize service=_service - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                     //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                                           //@synthesize condition=_condition - In the implementation block
@property (nonatomic,readonly) HMBulletinBoardNotificationServiceGroup * notificationServiceGroup;              //@synthesize notificationServiceGroup=_notificationServiceGroup - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSPredicate *)condition;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(BOOL)isEnabled;
-(HMService *)service;
-(void)setCondition:(NSPredicate *)arg1 ;
-(NSString *)logID;
-(void)commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(void)_registerNotificationHandlers;
-(NSUUID *)targetUUID;
-(void)__configureWithContext:(id)arg1 ;
-(id)initWithEnabled:(BOOL)arg1 condition:(id)arg2 ;
-(void)_commitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1 ;
-(HMBulletinBoardNotificationServiceGroup *)notificationServiceGroup;
-(void)_callBulletinBoardNotificationUpdatedDelegate;
@end

