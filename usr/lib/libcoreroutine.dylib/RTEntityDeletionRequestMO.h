/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class NSDictionary, NSUUID;

@interface RTEntityDeletionRequestMO : RTCloudManagedObject

@property (nonatomic,retain) NSDictionary * recordIDs; 
@property (nonatomic,copy) NSUUID * targetDeviceIdentifier; 
+(id)fetchRequest;
+(id)managedObjectWithCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(void)mergeEntriesFromDictionary:(id)arg1 intoDictionary:(id)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObjects:(id)arg1 context:(id)arg2 ;
-(id)identifiersByTypeInSubgraphOfEntity:(id)arg1 shouldTombstone:(BOOL)arg2 ;
-(void)buildDeleteRequestFromCloudManagedObject:(id)arg1 context:(id)arg2 ;
@end
