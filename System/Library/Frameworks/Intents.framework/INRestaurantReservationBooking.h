/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INRestaurantReservationBookingExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSString, NSDate, NSArray;

@interface INRestaurantReservationBooking : NSObject <INRestaurantReservationBookingExport, NSSecureCoding, NSCopying> {

	BOOL _bookingAvailable;
	BOOL _requiresManualRequest;
	BOOL _requiresEmailAddress;
	BOOL _requiresName;
	BOOL _requiresPhoneNumber;
	INRestaurant* _restaurant;
	NSString* _bookingDescription;
	NSDate* _bookingDate;
	unsigned long long _partySize;
	NSString* _bookingIdentifier;
	NSArray* _offers;

}

@property (nonatomic,copy) INRestaurant * restaurant;                                      //@synthesize restaurant=_restaurant - In the implementation block
@property (nonatomic,copy) NSString * bookingDescription;                                  //@synthesize bookingDescription=_bookingDescription - In the implementation block
@property (nonatomic,copy) NSDate * bookingDate;                                           //@synthesize bookingDate=_bookingDate - In the implementation block
@property (assign,nonatomic) unsigned long long partySize;                                 //@synthesize partySize=_partySize - In the implementation block
@property (nonatomic,copy) NSString * bookingIdentifier;                                   //@synthesize bookingIdentifier=_bookingIdentifier - In the implementation block
@property (assign,getter=isBookingAvailable,nonatomic) BOOL bookingAvailable;              //@synthesize bookingAvailable=_bookingAvailable - In the implementation block
@property (nonatomic,copy) NSArray * offers;                                               //@synthesize offers=_offers - In the implementation block
@property (assign,nonatomic) BOOL requiresManualRequest;                                   //@synthesize requiresManualRequest=_requiresManualRequest - In the implementation block
@property (assign,nonatomic) BOOL requiresEmailAddress;                                    //@synthesize requiresEmailAddress=_requiresEmailAddress - In the implementation block
@property (assign,nonatomic) BOOL requiresName;                                            //@synthesize requiresName=_requiresName - In the implementation block
@property (assign,nonatomic) BOOL requiresPhoneNumber;                                     //@synthesize requiresPhoneNumber=_requiresPhoneNumber - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1 ;
-(NSString *)bookingDescription;
-(void)setBookingDescription:(NSString *)arg1 ;
-(NSDate *)bookingDate;
-(void)setBookingDate:(NSDate *)arg1 ;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(NSString *)arg1 ;
-(BOOL)isBookingAvailable;
-(void)setBookingAvailable:(BOOL)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(BOOL)requiresManualRequest;
-(void)setRequiresManualRequest:(BOOL)arg1 ;
-(BOOL)requiresEmailAddress;
-(void)setRequiresEmailAddress:(BOOL)arg1 ;
-(BOOL)requiresName;
-(void)setRequiresName:(BOOL)arg1 ;
-(BOOL)requiresPhoneNumber;
-(void)setRequiresPhoneNumber:(BOOL)arg1 ;
-(id)initWithRestaurant:(id)arg1 bookingDate:(id)arg2 partySize:(unsigned long long)arg3 bookingIdentifier:(id)arg4 ;
@end

