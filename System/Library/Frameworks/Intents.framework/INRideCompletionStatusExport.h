/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSUserActivity, INCurrencyAmount;


@protocol INRideCompletionStatusExport <NSObject,JSExport>
@property (nonatomic,retain) NSUserActivity * completionUserActivity; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (assign,getter=isMissedPickup,nonatomic) BOOL missedPickup; 
@property (nonatomic,retain) INCurrencyAmount * paymentAmount; 
@property (assign,getter=isOutstanding,nonatomic) BOOL outstanding; 
@property (assign,getter=isCanceledByService,nonatomic) BOOL canceledByService; 
@required
+(BOOL)completed;
+(BOOL)canceledByService;
+(id)completedWithSettledPaymentAmount:(id)arg1;
+(id)completedWithOutstandingPaymentAmount:(id)arg1;
+(id)canceledByUser;
+(id)canceledMissedPickup;
-(id)init;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCanceled;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(id)arg1;
-(void)setCanceledByService:(BOOL)arg1;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(id)arg1;
-(void)setMissedPickup:(BOOL)arg1;
-(void)setOutstanding:(BOOL)arg1;
-(BOOL)isCompleted;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;

@end

