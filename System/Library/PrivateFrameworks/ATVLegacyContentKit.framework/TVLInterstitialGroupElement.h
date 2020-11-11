/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVLegacyContentKit/TVLRootElement.h>

@class NSArray, TVLXMLElement;

@interface TVLInterstitialGroupElement : TVLRootElement {

	NSArray* _interstitials;
	TVLXMLElement* _xml;

}

@property (nonatomic,retain) NSArray * interstitials;                   //@synthesize interstitials=_interstitials - In the implementation block
@property (nonatomic,retain,readonly) TVLXMLElement * xml;              //@synthesize xml=_xml - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(void)setInterstitials:(NSArray *)arg1 ;
-(NSArray *)interstitials;
-(id)initWithXMLElement:(id)arg1 feedDocument:(id)arg2 ;
-(TVLXMLElement *)xml;
@end

