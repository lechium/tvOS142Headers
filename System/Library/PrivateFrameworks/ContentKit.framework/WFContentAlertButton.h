/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFSelectableAlertButton.h>

@protocol OS_dispatch_group;
@class NSString, WFContentItem, NSObject;

@interface WFContentAlertButton : WFSelectableAlertButton {

	BOOL _hasContentSubtitle;
	BOOL _hideSubtitle;
	NSString* _subtitle;
	WFContentItem* _contentItem;
	NSObject*<OS_dispatch_group> _group;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) WFContentItem * contentItem;                   //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,readonly) BOOL hasContentSubtitle;                       //@synthesize hasContentSubtitle=_hasContentSubtitle - In the implementation block
@property (assign,nonatomic) BOOL hideSubtitle;                               //@synthesize hideSubtitle=_hideSubtitle - In the implementation block
+(id)buttonWithContentItem:(id)arg1 selected:(BOOL)arg2 stickySelection:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
+(void)processContentAlertButtonSubtitles:(id)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_group>)group;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(WFContentItem *)contentItem;
-(BOOL)hasContentSubtitle;
-(void)getSubtitle:(/*^block*/id)arg1 ;
-(BOOL)addSubtitleCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hideSubtitle;
-(void)setHideSubtitle:(BOOL)arg1 ;
@end

