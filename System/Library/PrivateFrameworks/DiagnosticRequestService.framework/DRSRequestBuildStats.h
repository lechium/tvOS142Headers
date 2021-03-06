/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticRequestService/DRSRequestStats.h>

@class NSDictionary, NSString;

@interface DRSRequestBuildStats : DRSRequestStats

@property (nonatomic,readonly) NSDictionary * perTeamIDStats; 
@property (nonatomic,readonly) NSString * build; 
+(id)keyName;
+(Class)childStatsClass;
+(id)descriptionStringForRequest:(id)arg1 ;
-(NSString *)build;
-(NSDictionary *)perTeamIDStats;
@end

