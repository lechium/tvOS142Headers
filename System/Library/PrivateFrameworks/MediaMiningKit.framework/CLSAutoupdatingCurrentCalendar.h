/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CLSAutoupdatingCurrentCalendar : NSObject
+(void)initialize;
+(id)calendar;
+(id)timezone;
+(BOOL)nextWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
+(BOOL)closestWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 afterDate:(id)arg3 ;
+(BOOL)isWeekendDate:(id)arg1 ;
+(BOOL)dateIntervalIntersectsWeekend:(id)arg1 ;
+(BOOL)rangeOfWeekendLocalStartDate:(out id*)arg1 interval:(out double*)arg2 containingDate:(id)arg3 ;
@end

