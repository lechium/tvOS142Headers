/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTCameraManagerNotificationCameraPowerChanged : RTNotification {

	long long _powerState;
	long long _cameraType;

}

@property (nonatomic,readonly) long long powerState;              //@synthesize powerState=_powerState - In the implementation block
@property (nonatomic,readonly) long long cameraType;              //@synthesize cameraType=_cameraType - In the implementation block
-(long long)powerState;
-(long long)cameraType;
-(id)initWithCameraType:(long long)arg1 powerState:(long long)arg2 ;
@end

