/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSString, NSArray;

@interface TVLOptionListElement : TVLRootElement {

	BOOL _autoSelectSingleItem;
	NSString* _title;
	NSString* _footnote;
	NSArray* _items;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footnote;                      //@synthesize footnote=_footnote - In the implementation block
@property (assign,nonatomic) BOOL autoSelectSingleItem;              //@synthesize autoSelectSingleItem=_autoSelectSingleItem - In the implementation block
@property (nonatomic,retain) NSArray * items;                        //@synthesize items=_items - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)footnote;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(void)setAutoSelectSingleItem:(BOOL)arg1 ;
-(BOOL)autoSelectSingleItem;
@end

