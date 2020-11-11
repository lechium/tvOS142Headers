/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate;


@protocol GEOServiceGap <NSObject>
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long routeListInsertBeforeIndex; 
@property (nonatomic,readonly) id<GEOServerFormattedString> displayMessagFormatString; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)routeListInsertBeforeIndex;
-(id<GEOServerFormattedString>)displayMessagFormatString;

@end

