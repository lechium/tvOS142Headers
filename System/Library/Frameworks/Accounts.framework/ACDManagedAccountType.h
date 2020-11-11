/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSSet;

@interface ACDManagedAccountType : NSManagedObject

@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * supportsMultipleAccounts; 
@property (nonatomic,retain) NSString * accountTypeDescription; 
@property (nonatomic,retain) NSString * credentialProtectionPolicy; 
@property (nonatomic,retain) NSNumber * supportsAuthentication; 
@property (nonatomic,retain) NSNumber * visibility; 
@property (nonatomic,retain) NSString * credentialType; 
@property (nonatomic,retain) NSString * owningBundleID; 
@property (nonatomic,retain) NSSet * supportedDataclasses; 
@property (nonatomic,retain) NSSet * permission; 
@property (nonatomic,retain) NSSet * accounts; 
@property (nonatomic,retain) NSSet * accessKeys; 
@property (nonatomic,retain) NSSet * syncableDataclasses; 
@property (nonatomic,retain) NSNumber * obsolete; 
-(id)description;
@end

