/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItemWithHrefChildItem.h>

@class CalDAVUpdateOwnerItem, NSURL;

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem {

	CalDAVUpdateOwnerItem* _changedBy;

}

@property (nonatomic,readonly) NSURL * fullHrefURL; 
@property (nonatomic,retain) CalDAVUpdateOwnerItem * changedBy;              //@synthesize changedBy=_changedBy - In the implementation block
-(id)init;
-(id)copyParseRules;
-(void)setChangedBy:(CalDAVUpdateOwnerItem *)arg1 ;
-(NSURL *)fullHrefURL;
-(CalDAVUpdateOwnerItem *)changedBy;
@end

