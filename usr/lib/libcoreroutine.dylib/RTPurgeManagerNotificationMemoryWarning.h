/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPurgeManagerNotificationMemoryWarning : RTNotification {

	long long _pressureState;

}

@property (assign,nonatomic) long long pressureState;              //@synthesize pressureState=_pressureState - In the implementation block
-(id)initWithMemoryPressureState:(long long)arg1 ;
-(long long)pressureState;
-(void)setPressureState:(long long)arg1 ;
@end

