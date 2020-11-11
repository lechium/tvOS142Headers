/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject

@property (nonatomic,retain) NSString * bundleId; 
@property (nonatomic,retain) NSString * targetBundleId; 
@property (nonatomic,retain) NSString * groupName; 
@property (nonatomic,retain) NSString * derivedIntentIdentifier; 
@property (nonatomic,retain) NSString * domainIdentifier; 
@property (nonatomic,retain) NSString * contentURL; 
@property (assign,nonatomic) double creationDate; 
@property (assign,nonatomic) long long direction; 
@property (assign,nonatomic) double endDate; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) NSString * locationUUID; 
@property (assign,nonatomic) long long mechanism; 
@property (assign,nonatomic) long long recipientCount; 
@property (assign,nonatomic) double startDate; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * keywords; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NSSet * recipients; 
@property (nonatomic,retain) _CDContactRecord * sender; 
@property (assign,nonatomic) BOOL mailShareSheetDeletionCandidate; 
@end

