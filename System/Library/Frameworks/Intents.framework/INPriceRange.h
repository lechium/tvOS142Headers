/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPriceRangeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding> {

	NSDecimalNumber* _minimumPrice;
	NSDecimalNumber* _maximumPrice;
	NSString* _currencyCode;

}

@property (nonatomic,readonly) NSDecimalNumber * minimumPrice;              //@synthesize minimumPrice=_minimumPrice - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * maximumPrice;              //@synthesize maximumPrice=_maximumPrice - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                     //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_priceWithPriceRangeValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)currencyCode;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSDecimalNumber *)maximumPrice;
-(NSDecimalNumber *)minimumPrice;
-(id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3 ;
-(id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2 ;
@end

