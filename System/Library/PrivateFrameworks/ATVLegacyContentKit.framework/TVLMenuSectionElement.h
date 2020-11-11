/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLHeaderElement, NSArray;

@interface TVLMenuSectionElement : TVLElement {

	TVLHeaderElement* _header;
	NSArray* _menuItems;

}

@property (nonatomic,retain) TVLHeaderElement * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                    //@synthesize menuItems=_menuItems - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)menuItems;
-(void)setMenuItems:(NSArray *)arg1 ;
-(TVLHeaderElement *)header;
-(void)setHeader:(TVLHeaderElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

