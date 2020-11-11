/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMKappaInternal;

@interface CMKappa : NSObject {

	CMKappaInternal* _internal;

}

@property (nonatomic,readonly) CMKappaInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)areStatsAvailable;
-(id)init;
-(void)dealloc;
-(CMKappaInternal *)_internal;
-(void)startKappaUpdatesForItem:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopKappaUpdates;
-(void)sendConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5 ;
-(void)sendAPConfigNumFastAccel:(int)arg1 andNumAccel:(int)arg2 andNumPressure:(int)arg3 andNumDeviceMotion:(int)arg4 andTimeout:(int)arg5 ;
-(void)sendCmd:(int)arg1 ;
-(void)sendAPCmd:(int)arg1 ;
-(int)getState;
@end
