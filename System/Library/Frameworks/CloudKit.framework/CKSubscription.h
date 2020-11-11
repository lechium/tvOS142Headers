/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKNotificationInfo;

@interface CKSubscription : NSObject <NSSecureCoding, NSCopying> {

	NSString* _subscriptionID;
	long long _subscriptionType;
	CKNotificationInfo* _notificationInfo;
	NSString* _recordType;

}

@property (nonatomic,copy) NSString * recordType;                              //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSString * subscriptionID;                          //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (assign,nonatomic) long long subscriptionType;                       //@synthesize subscriptionType=_subscriptionType - In the implementation block
@property (nonatomic,copy) CKNotificationInfo * notificationInfo;              //@synthesize notificationInfo=_notificationInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicate;
-(id)zoneID;
-(NSString *)recordType;
-(void)setNotificationInfo:(CKNotificationInfo *)arg1 ;
-(NSString *)subscriptionID;
-(void)setRecordType:(NSString *)arg1 ;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(id)_initWithSubscriptionID:(id)arg1 subscriptionType:(long long)arg2 recordType:(id)arg3 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 subscriptionID:(id)arg3 options:(unsigned long long)arg4 ;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 options:(unsigned long long)arg3 ;
-(CKNotificationInfo *)notificationInfo;
-(long long)subscriptionType;
-(void)setSubscriptionType:(long long)arg1 ;
-(id)initWithZoneID:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithZoneID:(id)arg1 subscriptionID:(id)arg2 options:(unsigned long long)arg3 ;
-(unsigned long long)subscriptionOptions;
@end

