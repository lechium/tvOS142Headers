/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INUserContext.h>

@class NSNumber;

@interface INMediaUserContext : INUserContext {

	long long _subscriptionStatus;
	NSNumber* _numberOfLibraryItems;

}

@property (assign,nonatomic) long long subscriptionStatus;               //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy) NSNumber * numberOfLibraryItems;              //@synthesize numberOfLibraryItems=_numberOfLibraryItems - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)_type;
+(id)_sharedFormatter;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)subscriptionStatus;
-(void)setSubscriptionStatus:(long long)arg1 ;
-(id)safeLibraryItems;
-(NSNumber *)numberOfLibraryItems;
-(void)setNumberOfLibraryItems:(NSNumber *)arg1 ;
@end
