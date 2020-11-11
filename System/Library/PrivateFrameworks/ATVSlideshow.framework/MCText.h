/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObject.h>

@class MCAsset, NSString, MCContainerEffect, NSArray, NSAttributedString;

@interface MCText : MCObject {

	MCAsset* mAsset;
	unsigned long long mIndex;
	NSString* mKeyInAsset;
	MCContainerEffect* mContainer;
	NSArray* mStringAttributes;

}

@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned long long index; 
@property (copy) NSAttributedString * attributedString; 
@property (retain) NSArray * stringAttributes; 
@property (nonatomic,retain) MCAsset * asset; 
@property (copy) NSString * keyInAsset; 
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(MCContainerEffect *)container;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(MCAsset *)asset;
-(NSAttributedString *)attributedString;
-(void)setAsset:(MCAsset *)arg1 ;
-(void)demolish;
-(NSString *)keyInAsset;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setKeyInAsset:(NSString *)arg1 ;
-(NSArray *)stringAttributes;
-(id)attributedStringWithCTAttributes;
-(void)setStringAttributes:(NSArray *)arg1 ;
@end

