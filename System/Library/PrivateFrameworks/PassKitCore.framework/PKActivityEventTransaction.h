/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent {

	PKPaymentTransaction* _transaction;

}

@property (nonatomic,readonly) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(unsigned long long)hash;
-(id)eventType;
-(PKPaymentTransaction *)transaction;
-(id)initWithTransaction:(id)arg1 unread:(BOOL)arg2 ;
-(BOOL)isEqualToActivityEvent:(id)arg1 ;
@end
