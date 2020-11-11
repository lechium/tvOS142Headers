/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKTransitPassProperties.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateComponents, NSNumber, NSString;

@interface PKFelicaPassProperties : PKTransitPassProperties <NSCopying, NSSecureCoding> {

	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _inShinkansenStation;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceGateNotificationEnabled;
	BOOL _hasGreenCarTicket;
	BOOL _hasShinkansenTicket;
	NSDateComponents* _shinkansenValidityStartDate;
	NSNumber* _shinkansenValidityTerm;
	NSString* _shinkansenOriginStation;
	NSString* _shinkansenDestinationStation;
	NSDateComponents* _shinkansenDepartureTime;
	NSDateComponents* _shinkansenArrivalTime;
	NSString* _shinkansenTrainName;
	NSNumber* _shinkansenCarNumber;
	NSNumber* _shinkansenSeatRow;
	NSNumber* _shinkansenSeatNumber;
	NSString* _shinkansenSecondaryOriginStation;
	NSString* _shinkansenSecondaryDestinationStation;
	NSDateComponents* _shinkansenSecondaryDepartureTime;
	NSDateComponents* _shinkansenSecondaryArrivalTime;
	NSString* _shinkansenSecondaryTrainName;
	NSNumber* _shinkansenSecondaryCarNumber;
	NSNumber* _shinkansenSecondarySeatRow;
	NSNumber* _shinkansenSecondarySeatNumber;
	NSString* _greenCarOriginStation;
	NSString* _greenCarDestinationStation;
	NSDateComponents* _greenCarValidityStartDate;

}

@property (assign,getter=isShinkansenTicketActive,nonatomic) BOOL shinkansenTicketActive;                                    //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (assign,getter=isGreenCarTicketUsed,nonatomic) BOOL greenCarTicketUsed;                                            //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (assign,getter=isInShinkansenStation,nonatomic) BOOL inShinkansenStation;                                          //@synthesize inShinkansenStation=_inShinkansenStation - In the implementation block
@property (assign,getter=isBalanceAllowedForCommute,nonatomic) BOOL balanceAllowedForCommute;                                //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (assign,getter=isLowBalanceGateNotificationEnabled,nonatomic) BOOL lowBalanceGateNotificationEnabled;              //@synthesize lowBalanceGateNotificationEnabled=_lowBalanceGateNotificationEnabled - In the implementation block
@property (nonatomic,copy) NSDateComponents * shinkansenValidityStartDate;                                                   //@synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenValidityTerm;                                                                //@synthesize shinkansenValidityTerm=_shinkansenValidityTerm - In the implementation block
@property (nonatomic,copy) NSString * shinkansenOriginStation;                                                               //@synthesize shinkansenOriginStation=_shinkansenOriginStation - In the implementation block
@property (nonatomic,copy) NSString * shinkansenDestinationStation;                                                          //@synthesize shinkansenDestinationStation=_shinkansenDestinationStation - In the implementation block
@property (nonatomic,copy) NSDateComponents * shinkansenDepartureTime;                                                       //@synthesize shinkansenDepartureTime=_shinkansenDepartureTime - In the implementation block
@property (nonatomic,copy) NSDateComponents * shinkansenArrivalTime;                                                         //@synthesize shinkansenArrivalTime=_shinkansenArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenTrainName;                                                                   //@synthesize shinkansenTrainName=_shinkansenTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenCarNumber;                                                                   //@synthesize shinkansenCarNumber=_shinkansenCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatRow;                                                                     //@synthesize shinkansenSeatRow=_shinkansenSeatRow - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatNumber;                                                                  //@synthesize shinkansenSeatNumber=_shinkansenSeatNumber - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryOriginStation;                                                      //@synthesize shinkansenSecondaryOriginStation=_shinkansenSecondaryOriginStation - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryDestinationStation;                                                 //@synthesize shinkansenSecondaryDestinationStation=_shinkansenSecondaryDestinationStation - In the implementation block
@property (nonatomic,copy) NSDateComponents * shinkansenSecondaryDepartureTime;                                              //@synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime - In the implementation block
@property (nonatomic,copy) NSDateComponents * shinkansenSecondaryArrivalTime;                                                //@synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryTrainName;                                                          //@synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryCarNumber;                                                          //@synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatRow;                                                            //@synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatNumber;                                                         //@synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber - In the implementation block
@property (nonatomic,copy) NSString * greenCarOriginStation;                                                                 //@synthesize greenCarOriginStation=_greenCarOriginStation - In the implementation block
@property (nonatomic,copy) NSString * greenCarDestinationStation;                                                            //@synthesize greenCarDestinationStation=_greenCarDestinationStation - In the implementation block
@property (nonatomic,copy) NSDateComponents * greenCarValidityStartDate;                                                     //@synthesize greenCarValidityStartDate=_greenCarValidityStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasGreenCarTicket;                                                                         //@synthesize hasGreenCarTicket=_hasGreenCarTicket - In the implementation block
@property (assign,nonatomic) BOOL hasShinkansenTicket;                                                                       //@synthesize hasShinkansenTicket=_hasShinkansenTicket - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passPropertiesForPass:(id)arg1 ;
+(Class)equalityClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInShinkansenStation;
-(void)setShinkansenTicketActive:(BOOL)arg1 ;
-(void)setGreenCarTicketUsed:(BOOL)arg1 ;
-(void)setBalanceAllowedForCommute:(BOOL)arg1 ;
-(void)setShinkansenValidityStartDate:(NSDateComponents *)arg1 ;
-(void)setShinkansenValidityTerm:(NSNumber *)arg1 ;
-(void)setShinkansenDepartureTime:(NSDateComponents *)arg1 ;
-(void)setShinkansenArrivalTime:(NSDateComponents *)arg1 ;
-(void)setShinkansenTrainName:(NSString *)arg1 ;
-(void)setShinkansenCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenSeatNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryDepartureTime:(NSDateComponents *)arg1 ;
-(void)setShinkansenSecondaryArrivalTime:(NSDateComponents *)arg1 ;
-(void)setShinkansenSecondaryTrainName:(NSString *)arg1 ;
-(void)setShinkansenSecondaryCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatNumber:(NSNumber *)arg1 ;
-(void)setGreenCarValidityStartDate:(NSDateComponents *)arg1 ;
-(void)setHasShinkansenTicket:(BOOL)arg1 ;
-(void)setHasGreenCarTicket:(BOOL)arg1 ;
-(BOOL)isShinkansenTicketActive;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isInStation;
-(id)initWithTransitAppletState:(id)arg1 paymentApplication:(id)arg2 ;
-(NSDateComponents *)shinkansenValidityStartDate;
-(NSNumber *)shinkansenValidityTerm;
-(NSDateComponents *)shinkansenDepartureTime;
-(NSDateComponents *)shinkansenArrivalTime;
-(NSString *)shinkansenTrainName;
-(NSNumber *)shinkansenCarNumber;
-(NSNumber *)shinkansenSeatRow;
-(NSNumber *)shinkansenSeatNumber;
-(NSDateComponents *)shinkansenSecondaryDepartureTime;
-(NSDateComponents *)shinkansenSecondaryArrivalTime;
-(NSString *)shinkansenSecondaryTrainName;
-(NSNumber *)shinkansenSecondaryCarNumber;
-(NSNumber *)shinkansenSecondarySeatRow;
-(NSNumber *)shinkansenSecondarySeatNumber;
-(BOOL)hasShinkansenTicket;
-(NSDateComponents *)greenCarValidityStartDate;
-(BOOL)hasGreenCarTicket;
-(void)setLowBalanceGateNotificationEnabled:(BOOL)arg1 ;
-(void)setShinkansenOriginStation:(NSString *)arg1 ;
-(void)setShinkansenDestinationStation:(NSString *)arg1 ;
-(void)setShinkansenSecondaryOriginStation:(NSString *)arg1 ;
-(void)setShinkansenSecondaryDestinationStation:(NSString *)arg1 ;
-(void)setGreenCarOriginStation:(NSString *)arg1 ;
-(void)setGreenCarDestinationStation:(NSString *)arg1 ;
-(id)_stringForRow:(id)arg1 seat:(id)arg2 ;
-(id)initWithFelicaAppletState:(id)arg1 paymentApplication:(id)arg2 ;
-(id)displayableShinkansenSeat;
-(id)displayableShinkansenSecondarySeat;
-(void)setInShinkansenStation:(BOOL)arg1 ;
-(BOOL)isLowBalanceGateNotificationEnabled;
-(NSString *)shinkansenOriginStation;
-(NSString *)shinkansenDestinationStation;
-(NSString *)shinkansenSecondaryOriginStation;
-(NSString *)shinkansenSecondaryDestinationStation;
-(NSString *)greenCarOriginStation;
-(NSString *)greenCarDestinationStation;
@end

