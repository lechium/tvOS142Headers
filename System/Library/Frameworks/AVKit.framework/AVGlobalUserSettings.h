/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:50 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSObservation;

@interface AVGlobalUserSettings : NSObject {

	NSUserDefaults* _uikitUserDefaults;
	NSObservation* _experimentalScrubbingMomentumCurveSettingObservation;
	BOOL _experimentalScrubbingMomentumCurveEnabled;

}

@property (nonatomic,readonly) unsigned surroundSound; 
@property (getter=isAtmosDisabled,nonatomic,readonly) BOOL atmosDisabled; 
@property (getter=isExperimentalScrubbingMomentumCurveEnabled,nonatomic,readonly) BOOL experimentalScrubbingMomentumCurveEnabled;              //@synthesize experimentalScrubbingMomentumCurveEnabled=_experimentalScrubbingMomentumCurveEnabled - In the implementation block
+(void)initialize;
+(id)shared;
-(id)description;
-(id)init;
-(unsigned)surroundSound;
-(BOOL)isAtmosDisabled;
-(BOOL)isExperimentalScrubbingMomentumCurveEnabled;
@end

