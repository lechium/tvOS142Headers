/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HealthKit/HealthKit-Structs.h>
@class CoreTelephonyClient, RadiosPreferences;

@interface HKMobileCountryCodeManager : NSObject {

	CoreTelephonyClient* _coreTelephonyClient;
	CTServerConnectionRef _coreTelephonyServerConnection;
	RadiosPreferences* _radiosPreferences;

}
-(id)init;
-(void)currentMobileCountryCodeFromCellularWithCompletion:(/*^block*/id)arg1 ;
-(id)_resolveMobileCountryCodeOverridesWithError:(id*)arg1 ;
-(void)fetchMobileCountryCodeFromCellularWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isLocationAvailableWithError:(id*)arg1 ;
-(id)_wrapperWithMobileCountryCode:(id)arg1 error:(id*)arg2 ;
-(id)_overriddenMobileCountryCode;
-(id)_copyISOForMCC:(id)arg1 error:(id*)arg2 ;
-(id)_overriddenISOMobileCountryCode;
-(id)mobileCountryCodeFromCellularWithError:(id*)arg1 ;
@end

