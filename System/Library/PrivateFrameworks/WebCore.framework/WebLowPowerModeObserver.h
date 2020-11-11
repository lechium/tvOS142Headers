/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@interface WebLowPowerModeObserver : NSObject {

	BOOL _isLowPowerModeEnabled;
	LowPowerModeNotifier* _notifier;

}

@property (assign,nonatomic) LowPowerModeNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (nonatomic,readonly) BOOL isLowPowerModeEnabled;                //@synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled - In the implementation block
-(void)dealloc;
-(BOOL)isLowPowerModeEnabled;
-(LowPowerModeNotifier*)notifier;
-(void)_didReceiveLowPowerModeChange;
-(id)initWithNotifier:(LowPowerModeNotifier*)arg1 ;
-(void)setNotifier:(LowPowerModeNotifier*)arg1 ;
@end
