/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVLeafItem;

@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVLeafItem* _commonName;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                    //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * commonName;              //@synthesize commonName=_commonName - In the implementation block
-(id)init;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(id)copyParseRules;
-(CoreDAVLeafItem *)commonName;
-(void)setCommonName:(CoreDAVLeafItem *)arg1 ;
@end

