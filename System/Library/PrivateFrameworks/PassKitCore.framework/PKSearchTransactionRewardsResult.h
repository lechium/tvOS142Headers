/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class NSDecimalNumber, NSString;

@interface PKSearchTransactionRewardsResult : NSObject <PKSearchAutocompleteToken> {

	NSDecimalNumber* _rewardsValue;
	unsigned long long _rewardsValueUnit;

}

@property (nonatomic,retain) NSDecimalNumber * rewardsValue;                   //@synthesize rewardsValue=_rewardsValue - In the implementation block
@property (assign,nonatomic) unsigned long long rewardsValueUnit;              //@synthesize rewardsValueUnit=_rewardsValueUnit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)tokenType;
-(NSDecimalNumber *)rewardsValue;
-(void)setRewardsValue:(NSDecimalNumber *)arg1 ;
-(unsigned long long)rewardsValueUnit;
-(void)setRewardsValueUnit:(unsigned long long)arg1 ;
@end

