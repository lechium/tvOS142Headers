/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDecimalNumber;

@interface PKPaymentSummaryItem : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useDarkColor;
	BOOL _useLargeFont;
	NSString* _label;
	NSDecimalNumber* _amount;
	unsigned long long _type;
	NSString* _localizedTitle;
	NSString* _localizedAmount;

}

@property (nonatomic,copy) NSString * localizedTitle;                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) NSString * localizedAmount;              //@synthesize localizedAmount=_localizedAmount - In the implementation block
@property (assign,nonatomic) BOOL useDarkColor;                       //@synthesize useDarkColor=_useDarkColor - In the implementation block
@property (assign,nonatomic) BOOL useLargeFont;                       //@synthesize useLargeFont=_useLargeFont - In the implementation block
@property (nonatomic,copy) NSString * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                  //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) unsigned long long type;                 //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)version;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 ;
+(id)itemWithProtobuf:(id)arg1 ;
+(id)summaryItemWithLabel:(id)arg1 amount:(id)arg2 type:(unsigned long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)protobuf;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)localizedAmount;
-(void)setLocalizedAmount:(NSString *)arg1 ;
-(void)setUseDarkColor:(BOOL)arg1 ;
-(void)setUseLargeFont:(BOOL)arg1 ;
-(BOOL)isEqualToPaymentSummaryItem:(id)arg1 ;
-(BOOL)useDarkColor;
-(BOOL)useLargeFont;
@end
