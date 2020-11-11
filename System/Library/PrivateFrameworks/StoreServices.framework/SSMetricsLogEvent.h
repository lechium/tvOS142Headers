/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsLogEvent : SSMetricsMutableEvent

@property (assign,nonatomic) unsigned long long logLevel; 
@property (nonatomic,retain) NSString * logSubsystem; 
@property (nonatomic,retain) NSString * message; 
+(unsigned long long)_logLevelFromString:(id)arg1 ;
+(id)_stringFromLogLevel:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)logLevel;
-(NSString *)logSubsystem;
-(void)setLogSubsystem:(NSString *)arg1 ;
@end

