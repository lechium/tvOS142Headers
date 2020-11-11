/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKPersistentObject.h>

@class EKFrozenReminderSource, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	EKFrozenReminderSource* _reminderSource;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (assign,nonatomic) int preferredEventPrivateValue; 
@property (assign,nonatomic) int strictestEventPrivateValue; 
@property (nonatomic,retain) NSString * UUID; 
@property (retain) EKFrozenReminderSource * reminderSource;                 //@synthesize reminderSource=_reminderSource - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
+(Class)meltedClass;
-(id)description;
-(int)flags;
-(NSString *)UUID;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(long long)sourceType;
-(void)setUUID:(NSString *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)disabled;
-(id)constraints;
-(int)entityType;
-(void)setSourceType:(long long)arg1 ;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(id)lastSyncStartDate;
-(void)setLastSyncStartDate:(id)arg1 ;
-(id)lastSyncEndDate;
-(void)setLastSyncEndDate:(id)arg1 ;
-(unsigned long long)lastSyncError;
-(void)setLastSyncError:(unsigned long long)arg1 ;
-(id)lastSyncErrorData;
-(void)setLastSyncErrorData:(id)arg1 ;
-(NSNumber *)defaultAlarmOffset;
-(void)setReminderSource:(EKFrozenReminderSource *)arg1 ;
-(int)preferredEventPrivateValueRaw;
-(void)setPreferredEventPrivateValueRaw:(int)arg1 ;
-(int)strictestEventPrivateValueRaw;
-(void)setStrictestEventPrivateValueRaw:(int)arg1 ;
-(id)constraintsName;
-(int)flags2;
-(void)setFlags2:(int)arg1 ;
-(id)delegatedAccountOwnerStoreID;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setConstraintsName:(id)arg1 ;
-(id)creatorBundleID;
-(void)setCreatorBundleID:(id)arg1 ;
-(id)creatorCodeSigningIdentity;
-(void)setCreatorCodeSigningIdentity:(id)arg1 ;
-(BOOL)onlyCreatorCanModify;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(BOOL)showsNotifications;
-(void)setShowsNotifications:(BOOL)arg1 ;
-(void)setDelegatedAccountOwnerStoreID:(id)arg1 ;
-(EKFrozenReminderSource *)reminderSource;
@end
