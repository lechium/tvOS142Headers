/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSDictionary;

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSDictionary * eventInformation; 
@property (nonatomic,copy) NSString * originalCommandId; 
@property (nonatomic,copy) NSDictionary * timings; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metrics;
+(id)metricsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)_descriptionHint;
-(NSDictionary *)timings;
-(NSString *)originalCommandId;
-(void)setOriginalCommandId:(NSString *)arg1 ;
-(NSDictionary *)eventInformation;
-(void)setEventInformation:(NSDictionary *)arg1 ;
-(void)setTimings:(NSDictionary *)arg1 ;
@end

