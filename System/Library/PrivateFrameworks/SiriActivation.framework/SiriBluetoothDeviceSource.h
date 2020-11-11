/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriActivation/SiriLongPressButtonSource.h>

@class SiriBluetoothContext;

@interface SiriBluetoothDeviceSource : SiriLongPressButtonSource {

	long long _buttonIdentifier;
	double _longPressInterval;
	SiriBluetoothContext* _context;

}

@property (assign,nonatomic) long long buttonIdentifier;                  //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (assign,nonatomic) double longPressInterval;                    //@synthesize longPressInterval=_longPressInterval - In the implementation block
@property (nonatomic,retain) SiriBluetoothContext * context;              //@synthesize context=_context - In the implementation block
+(id)bluetoothDeviceForIdentifier:(long long)arg1 bluetoothDevice:(id)arg2 ;
-(SiriBluetoothContext *)context;
-(void)setContext:(SiriBluetoothContext *)arg1 ;
-(void)activate;
-(void)deactivate;
-(long long)buttonIdentifier;
-(double)longPressInterval;
-(void)setLongPressInterval:(double)arg1 ;
-(void)setButtonIdentifier:(long long)arg1 ;
@end

