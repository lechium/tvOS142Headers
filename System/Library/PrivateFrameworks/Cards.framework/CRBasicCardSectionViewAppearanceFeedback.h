/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRCardSectionViewAppearanceFeedback.h>

@protocol CRCardSection;
@class SFFeedback, NSString;

@interface CRBasicCardSectionViewAppearanceFeedback : NSObject <CRCardSectionViewAppearanceFeedback> {

	id<CRCardSection> _cardSection;

}

@property (nonatomic,retain) id<CRCardSection> cardSection;               //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,readonly) SFFeedback * backingFeedback; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CRCardSection>)cardSection;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
@end

