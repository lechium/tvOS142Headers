/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKTransitAppletHistoryRecord.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface PKFelicaAppletHistoryRecord : PKTransitAppletHistoryRecord <NSCopying> {

	NSNumber* _transactionType;
	NSNumber* _sectorCombination;
	NSNumber* _amountType;
	NSString* _transactionID;

}

@property (nonatomic,copy) NSString * transactionID;                  //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSNumber * transactionType;                //@synthesize transactionType=_transactionType - In the implementation block
@property (nonatomic,copy) NSNumber * sectorCombination;              //@synthesize sectorCombination=_sectorCombination - In the implementation block
@property (nonatomic,copy) NSNumber * amountType;                     //@synthesize amountType=_amountType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(NSString *)transactionID;
-(void)setTransactionType:(NSNumber *)arg1 ;
-(NSNumber *)transactionType;
-(NSNumber *)amountType;
-(void)setAmountType:(NSNumber *)arg1 ;
-(NSNumber *)sectorCombination;
-(void)setSectorCombination:(NSNumber *)arg1 ;
@end

