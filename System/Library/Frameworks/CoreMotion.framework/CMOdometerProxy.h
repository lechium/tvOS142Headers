/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMOdometer;

@interface CMOdometerProxy : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_queue> fCallbackQueue;
	CLConnectionClient* fLocationdConnection;
	/*^block*/id fHandler;
	long long fGpsAvailability;
	CMOdometer* _odometer;
	double _totalDistance;
	double _averageSpeed;
	double _startDate;

}

@property (assign,nonatomic) CMOdometer * odometer;              //@synthesize odometer=_odometer - In the implementation block
@property (assign) double totalDistance;                         //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign) double averageSpeed;                          //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (assign) double startDate;                             //@synthesize startDate=_startDate - In the implementation block
-(void)dealloc;
-(double)startDate;
-(void)setStartDate:(double)arg1 ;
-(void)_teardown;
-(void)_stopOdometerUpdates;
-(CMOdometer *)odometer;
-(void)setTotalDistance:(double)arg1 ;
-(double)totalDistance;
-(void)setAverageSpeed:(double)arg1 ;
-(double)averageSpeed;
-(id)initWithOdometer:(id)arg1 ;
-(void)_startDaemonConnection;
-(void)_startOdometerUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)setOdometer:(CMOdometer *)arg1 ;
@end

