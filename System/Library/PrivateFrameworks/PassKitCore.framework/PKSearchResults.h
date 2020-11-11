/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKSearchResults : NSObject <NSSecureCoding> {

	NSArray* _suggestedAutocompleteTokens;
	NSArray* _paymentPassResults;
	NSArray* _barcodePassResults;
	NSArray* _categoryResults;
	NSArray* _merchantResults;
	NSArray* _transactionResults;
	NSArray* _personResults;
	NSArray* _locationResults;

}

@property (nonatomic,copy) NSArray * suggestedAutocompleteTokens;              //@synthesize suggestedAutocompleteTokens=_suggestedAutocompleteTokens - In the implementation block
@property (nonatomic,copy) NSArray * paymentPassResults;                       //@synthesize paymentPassResults=_paymentPassResults - In the implementation block
@property (nonatomic,copy) NSArray * barcodePassResults;                       //@synthesize barcodePassResults=_barcodePassResults - In the implementation block
@property (nonatomic,copy) NSArray * categoryResults;                          //@synthesize categoryResults=_categoryResults - In the implementation block
@property (nonatomic,copy) NSArray * merchantResults;                          //@synthesize merchantResults=_merchantResults - In the implementation block
@property (nonatomic,copy) NSArray * transactionResults;                       //@synthesize transactionResults=_transactionResults - In the implementation block
@property (nonatomic,copy) NSArray * personResults;                            //@synthesize personResults=_personResults - In the implementation block
@property (nonatomic,copy) NSArray * locationResults;                          //@synthesize locationResults=_locationResults - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)locationResults;
-(void)setLocationResults:(NSArray *)arg1 ;
-(NSArray *)suggestedAutocompleteTokens;
-(void)setSuggestedAutocompleteTokens:(NSArray *)arg1 ;
-(NSArray *)paymentPassResults;
-(void)setPaymentPassResults:(NSArray *)arg1 ;
-(NSArray *)barcodePassResults;
-(void)setBarcodePassResults:(NSArray *)arg1 ;
-(NSArray *)categoryResults;
-(void)setCategoryResults:(NSArray *)arg1 ;
-(NSArray *)merchantResults;
-(void)setMerchantResults:(NSArray *)arg1 ;
-(NSArray *)transactionResults;
-(void)setTransactionResults:(NSArray *)arg1 ;
-(NSArray *)personResults;
-(void)setPersonResults:(NSArray *)arg1 ;
@end

