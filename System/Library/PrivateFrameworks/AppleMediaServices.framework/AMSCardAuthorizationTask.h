/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSTask.h>

@class NSString, AMSMetricsEvent, NSDictionary, NSMutableArray;

@interface AMSCardAuthorizationTask : AMSTask {

	BOOL _didBiometricsLockout;
	BOOL _didCancelHomeButton;
	long long _confirmationStyle;
	NSString* _countryCode;
	NSString* _currencyCode;
	AMSMetricsEvent* _metricsEvent;
	NSString* _passSerialNumber;
	NSString* _passTypeIdentifier;
	NSDictionary* _paymentSession;
	NSMutableArray* _userActions;

}

@property (assign,nonatomic) BOOL didBiometricsLockout;                    //@synthesize didBiometricsLockout=_didBiometricsLockout - In the implementation block
@property (assign,nonatomic) BOOL didCancelHomeButton;                     //@synthesize didCancelHomeButton=_didCancelHomeButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * userActions;                 //@synthesize userActions=_userActions - In the implementation block
@property (assign,nonatomic) long long confirmationStyle;                  //@synthesize confirmationStyle=_confirmationStyle - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * currencyCode;                      //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) AMSMetricsEvent * metricsEvent;                 //@synthesize metricsEvent=_metricsEvent - In the implementation block
@property (nonatomic,retain) NSString * passSerialNumber;                  //@synthesize passSerialNumber=_passSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * passTypeIdentifier;                //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * paymentSession;              //@synthesize paymentSession=_paymentSession - In the implementation block
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSMutableArray *)userActions;
-(void)setUserActions:(NSMutableArray *)arg1 ;
-(NSString *)passTypeIdentifier;
-(void)setConfirmationStyle:(long long)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
-(NSString *)passSerialNumber;
-(long long)confirmationStyle;
-(void)setPassSerialNumber:(NSString *)arg1 ;
-(id)_metricsTimestamp;
-(BOOL)didBiometricsLockout;
-(id)initWithPaymentSession:(id)arg1 ;
-(id)performCardAuthorization;
-(void)_metricsPost;
-(id)_metricsUserActionDictionary;
-(AMSMetricsEvent *)metricsEvent;
-(void)setMetricsEvent:(AMSMetricsEvent *)arg1 ;
-(NSDictionary *)paymentSession;
-(void)setDidBiometricsLockout:(BOOL)arg1 ;
-(BOOL)didCancelHomeButton;
-(void)setDidCancelHomeButton:(BOOL)arg1 ;
@end

