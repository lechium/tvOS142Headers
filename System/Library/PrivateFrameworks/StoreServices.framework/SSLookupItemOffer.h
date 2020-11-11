/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString, NSNumber;

@interface SSLookupItemOffer : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * formattedPrice; 
@property (nonatomic,readonly) NSString * offerType; 
@property (nonatomic,readonly) NSNumber * price; 
@property (nonatomic,readonly) NSString * subscriptionType; 
-(void)dealloc;
-(NSNumber *)price;
-(NSString *)subscriptionType;
-(NSString *)buyParameters;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(id)actionTextForType:(id)arg1 ;
-(NSString *)formattedPrice;
-(NSString *)offerType;
@end
