/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCardSection.h>

@protocol SFCardSection;
@class NSString, NSArray;

@interface CRBasicCardSection : NSObject <CRCardSection> {

	NSString* _cardSectionIdentifier;
	id<SFCardSection> _backingCardSection;

}

@property (nonatomic,retain) id<SFCardSection> backingCardSection;              //@synthesize backingCardSection=_backingCardSection - In the implementation block
@property (nonatomic,readonly) NSString * cardSectionIdentifier;                //@synthesize cardSectionIdentifier=_cardSectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)basicCardSectionWithBackingCardSection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFCardSection>)backingCardSection;
-(NSString *)cardSectionIdentifier;
-(void)setBackingCardSection:(id<SFCardSection>)arg1 ;
@end

