/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(BOOL)isInternalBuild;
+(id)deviceUUID;
+(BOOL)isAudioAccessory;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)isDNUEnabled;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end

