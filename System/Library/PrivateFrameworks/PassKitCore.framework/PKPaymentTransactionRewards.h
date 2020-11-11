/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying> {

	NSArray* _rewardsItems;

}

@property (nonatomic,retain) NSArray * rewardsItems;              //@synthesize rewardsItems=_rewardsItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
+(id)_rewardsItemsSetFromJsonString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)itemType;
-(id)primaryIdentifier;
-(id)jsonString;
-(id)jsonArrayRepresentation;
-(id)_rewardItemsFromRecord:(id)arg1 ;
-(id)initWithRewardsItems:(id)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(BOOL)isEqualToRewards:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(id)initWithJsonString:(id)arg1 ;
-(id)totalEligibleValueForUnit:(unsigned long long)arg1 ;
-(NSArray *)rewardsItems;
-(void)setRewardsItems:(NSArray *)arg1 ;
@end

