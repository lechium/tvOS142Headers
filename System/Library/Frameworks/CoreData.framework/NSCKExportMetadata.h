/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSPersistentHistoryToken, NSSet;

@interface NSCKExportMetadata : NSManagedObject

@property (nonatomic,retain) NSDate * exportedAt; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSPersistentHistoryToken * historyToken; 
@property (nonatomic,retain) NSSet * operations; 
+(id)entityPath;
@end

