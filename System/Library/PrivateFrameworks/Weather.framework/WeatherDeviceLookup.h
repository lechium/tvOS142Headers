/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Weather/Weather-Structs.h>
@class ACAccountStore;

@interface WeatherDeviceLookup : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(void)checkAllDevicesRunningMinimumiOSVersion:(SCD_Struct_We2)arg1 macOSVersion:(SCD_Struct_We2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

