/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID;

@interface _DKSyncPeerMO : NSManagedObject

@property (nonatomic,copy) NSString * cloudID; 
@property (nonatomic,copy) NSString * deviceID; 
@property (nonatomic,copy) NSDate * lastSeenDate; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) NSString * rapportID; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,copy) NSString * version; 
+(id)fetchRequest;
@end

