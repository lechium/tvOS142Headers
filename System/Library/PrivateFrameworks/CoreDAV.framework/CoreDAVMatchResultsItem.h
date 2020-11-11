/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem;

@interface CoreDAVMatchResultsItem : CoreDAVItem {

	CoreDAVLeafItem* _rank;
	CoreDAVLeafItem* _language;
	CoreDAVLeafItem* _region;
	CoreDAVLeafItem* _calendarDescription;

}

@property (nonatomic,retain) CoreDAVLeafItem * rank;                             //@synthesize rank=_rank - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * region;                           //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * calendarDescription;              //@synthesize calendarDescription=_calendarDescription - In the implementation block
+(id)copyParseRules;
-(id)description;
-(CoreDAVLeafItem *)language;
-(CoreDAVLeafItem *)region;
-(void)setRank:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)rank;
-(void)setLanguage:(CoreDAVLeafItem *)arg1 ;
-(void)setRegion:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)calendarDescription;
-(void)setCalendarDescription:(CoreDAVLeafItem *)arg1 ;
@end
