/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NoteStoreObject, NSNumber, NSMutableSet;

@interface NoteChangeObject : NSManagedObject

@property (nonatomic,retain) NoteStoreObject * store; 
@property (nonatomic,retain) NSNumber * changeType; 
@property (nonatomic,retain) NSMutableSet * noteIntegerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIds; 
@property (nonatomic,retain) NSMutableSet * noteServerIntIds; 
@end

