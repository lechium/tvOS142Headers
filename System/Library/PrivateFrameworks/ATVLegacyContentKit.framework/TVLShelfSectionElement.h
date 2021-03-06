/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLShelfSectionElement : TVLElement {

	NSString* _title;
	NSArray* _shelfItems;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * shelfItems;              //@synthesize shelfItems=_shelfItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSArray *)shelfItems;
-(void)setShelfItems:(NSArray *)arg1 ;
@end

