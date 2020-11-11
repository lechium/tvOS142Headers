/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSDate;


@protocol INListRideOptionsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * rideOptions; 
@property (nonatomic,copy) NSArray * paymentMethods; 
@property (nonatomic,copy) NSDate * expirationDate; 
@required
-(long long)code;
-(void)setExpirationDate:(id)arg1;
-(NSDate *)expirationDate;
-(NSArray *)paymentMethods;
-(void)setPaymentMethods:(id)arg1;
-(NSArray *)rideOptions;
-(void)setRideOptions:(id)arg1;

@end

