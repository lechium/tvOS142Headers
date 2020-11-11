/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:52 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/ASDIAPInfo.h>

@class NSNumber, NSDate, NSString;

@interface ASDMutableIAPInfo : ASDIAPInfo

@property (nonatomic,retain) NSNumber * adamId; 
@property (nonatomic,retain) NSNumber * appAdamId; 
@property (assign,nonatomic) BOOL autoRenewStatus; 
@property (nonatomic,retain) NSDate * expirationDate; 
@property (nonatomic,retain) NSDate * lastModifiedDate; 
@property (nonatomic,retain) NSDate * purchaseDate; 
@property (assign,nonatomic) unsigned char type; 
@property (assign,nonatomic) BOOL hasUsedFreeOffer; 
@property (assign,nonatomic) BOOL hasUsedIntroPricingOffer; 
@property (nonatomic,retain) NSString * subscriptionFamilyId; 
@property (nonatomic,retain) NSNumber * expirationTimestamp; 
@property (nonatomic,retain) NSNumber * lastModifiedTimestamp; 
@property (nonatomic,retain) NSNumber * purchaseTimestamp; 
-(void)setExpirationTimestamp:(NSNumber *)arg1 ;
-(void)setLastModifiedTimestamp:(NSNumber *)arg1 ;
-(void)setPurchaseTimestamp:(NSNumber *)arg1 ;
@end

