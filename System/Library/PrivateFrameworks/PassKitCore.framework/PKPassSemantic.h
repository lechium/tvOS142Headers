/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, PKLocation, PKCurrencyAmount, NSPersonNameComponents, NSArray;

@interface PKPassSemantic : NSObject <NSSecureCoding> {

	NSString* _semanticKey;
	NSString* _fieldKey;
	NSString* _stringValue;
	NSDate* _dateValue;
	NSNumber* _numberValue;
	PKLocation* _locationValue;
	PKCurrencyAmount* _currencyAmountValue;
	NSPersonNameComponents* _personNameComponentsValue;
	NSArray* _stringsValue;
	NSArray* _dictionariesValue;

}

@property (nonatomic,copy) NSString * semanticKey;                                            //@synthesize semanticKey=_semanticKey - In the implementation block
@property (nonatomic,copy) NSString * fieldKey;                                               //@synthesize fieldKey=_fieldKey - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                                            //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,retain) NSDate * dateValue;                                              //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,retain) NSNumber * numberValue;                                          //@synthesize numberValue=_numberValue - In the implementation block
@property (nonatomic,retain) PKLocation * locationValue;                                      //@synthesize locationValue=_locationValue - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * currencyAmountValue;                          //@synthesize currencyAmountValue=_currencyAmountValue - In the implementation block
@property (nonatomic,retain) NSPersonNameComponents * personNameComponentsValue;              //@synthesize personNameComponentsValue=_personNameComponentsValue - In the implementation block
@property (nonatomic,retain) NSArray * stringsValue;                                          //@synthesize stringsValue=_stringsValue - In the implementation block
@property (nonatomic,retain) NSArray * dictionariesValue;                                     //@synthesize dictionariesValue=_dictionariesValue - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
+(BOOL)supportsSecureCoding;
+(id)_supportedDictionaryValueTypes;
+(BOOL)isSupportedDictionaryValueType:(id)arg1 ;
+(BOOL)isSupportedDictionaryKeyType:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(NSDate *)dateValue;
-(void)setDateValue:(NSDate *)arg1 ;
-(BOOL)hasValue;
-(NSNumber *)numberValue;
-(void)setLocationValue:(PKLocation *)arg1 ;
-(PKLocation *)locationValue;
-(void)setNumberValue:(NSNumber *)arg1 ;
-(void)setSemanticKey:(NSString *)arg1 ;
-(void)setFieldKey:(NSString *)arg1 ;
-(void)setCurrencyAmountValue:(PKCurrencyAmount *)arg1 ;
-(void)setPersonNameComponentsValue:(NSPersonNameComponents *)arg1 ;
-(void)setStringsValue:(NSArray *)arg1 ;
-(void)setDictionariesValue:(NSArray *)arg1 ;
-(NSString *)semanticKey;
-(NSString *)fieldKey;
-(PKCurrencyAmount *)currencyAmountValue;
-(NSPersonNameComponents *)personNameComponentsValue;
-(NSArray *)stringsValue;
-(NSArray *)dictionariesValue;
@end
