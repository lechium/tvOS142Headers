/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSSet, GamesPlayedSummaryList;

@interface GameSummary : NSManagedObject

@property (nonatomic,copy) NSNumber * adamID; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,copy) NSNumber * isArcade; 
@property (nonatomic,retain) NSSet * compatiblePlatforms; 
@property (nonatomic,retain) GamesPlayedSummaryList * list; 
+(id)fetchRequest;
@end
