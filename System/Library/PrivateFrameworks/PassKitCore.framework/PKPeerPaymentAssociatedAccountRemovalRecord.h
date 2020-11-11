/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding> {

	BOOL _hasPresentedNotification;
	NSString* _altDSID;
	long long _reason;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasPresentedNotification;              //@synthesize hasPresentedNotification=_hasPresentedNotification - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(NSDate *)date;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setReason:(long long)arg1 ;
-(BOOL)hasPresentedNotification;
-(void)setHasPresentedNotification:(BOOL)arg1 ;
@end

