/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate, NSNumber, NSArray, NSDictionary;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * activityType; 
@property (assign,nonatomic) BOOL ascending; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSNumber * limit; 
@property (nonatomic,copy) NSArray * matchingMetadataKeys; 
@property (nonatomic,copy) NSDictionary * matchingMetadataKeysAndStringValues; 
@property (nonatomic,copy) NSString * sortBy; 
@property (nonatomic,copy) NSArray * streamTypes; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchActivityStream;
+(id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTaskType:(NSString *)arg1 ;
-(BOOL)ascending;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)activityType;
-(NSString *)visibility;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(NSString *)taskType;
-(void)setSortBy:(NSString *)arg1 ;
-(NSString *)sortBy;
-(NSDate *)toDate;
-(void)setLimit:(NSNumber *)arg1 ;
-(NSNumber *)limit;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSArray *)matchingMetadataKeys;
-(void)setMatchingMetadataKeys:(NSArray *)arg1 ;
-(NSDictionary *)matchingMetadataKeysAndStringValues;
-(void)setMatchingMetadataKeysAndStringValues:(NSDictionary *)arg1 ;
-(NSArray *)streamTypes;
-(void)setStreamTypes:(NSArray *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
@end

