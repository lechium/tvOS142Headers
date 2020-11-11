/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:04 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, RMConnectionClient, NSOperationQueue, CMDeviceMotion, CMAttitude;

@interface CMHeadphoneMotionManagerInternal : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RMConnectionClient* _connectionClient;
	NSOperationQueue* _callbackQueue;
	/*^block*/id _callbackHandler;
	BOOL _deviceMotionActive;
	BOOL _deviceMotionStreaming;
	BOOL _deviceConnected;
	double _deviceMotionStartTime;
	CMDeviceMotion* _deviceMotion;
	CMAttitude* _initialReferenceAttitude;

}

@property (retain) CMDeviceMotion * deviceMotion;                                //@synthesize deviceMotion=_deviceMotion - In the implementation block
@property (nonatomic,retain) CMAttitude * initialReferenceAttitude;              //@synthesize initialReferenceAttitude=_initialReferenceAttitude - In the implementation block
-(id)init;
-(void)dealloc;
-(void)disconnect;
-(void)connect;
-(CMDeviceMotion *)deviceMotion;
-(void)setDeviceMotion:(CMDeviceMotion *)arg1 ;
-(CMAttitude *)initialReferenceAttitude;
-(void)setInitialReferenceAttitude:(CMAttitude *)arg1 ;
@end

