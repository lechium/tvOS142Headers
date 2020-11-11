/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSArray;


@protocol GEOServerCondition <NSObject,NSCoding>
@property (nonatomic,readonly) long long conditionType; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSArray * subconditions; 
@required
-(NSDate *)expirationDate;
-(long long)conditionType;
-(NSArray *)subconditions;

@end

