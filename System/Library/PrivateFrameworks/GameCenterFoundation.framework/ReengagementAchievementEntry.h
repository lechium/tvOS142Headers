/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSNumber;

@interface ReengagementAchievementEntry : NSManagedObject

@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * lastReportedDate; 
@property (nonatomic,copy) NSNumber * percentComplete; 
@property (nonatomic,copy) NSString * playerID; 
+(id)fetchRequest;
@end

