/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID, NSData, NSSet;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateLastModified; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (assign,nonatomic) BOOL isMarkedAsDeleted; 
@property (nonatomic,retain) NSData * keyImageData; 
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,retain) NSData * serializedWorkflowData; 
@property (nonatomic,copy) NSString * shortcutDescription; 
@property (nonatomic,copy) NSString * shortcutName; 
@property (nonatomic,retain) NSSet * syncStates; 
+(id)fetchRequest;
@end

