/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlayback;
@class NSObject;

@interface TVPlaybackRateMonitor : NSObject {

	NSObject*<TVPPlayback> _player;
	double _effectiveRate;
	id _playerStateDidChangeObserver;

}

@property (assign,nonatomic) double effectiveRate;                                //@synthesize effectiveRate=_effectiveRate - In the implementation block
@property (assign,nonatomic,__weak) id playerStateDidChangeObserver;              //@synthesize playerStateDidChangeObserver=_playerStateDidChangeObserver - In the implementation block
@property (nonatomic,readonly) NSObject*<TVPPlayback> player;                     //@synthesize player=_player - In the implementation block
-(id)init;
-(void)dealloc;
-(double)_playbackRate;
-(NSObject*<TVPPlayback>)player;
-(id)initWithPlayer:(id)arg1 ;
-(id)_playbackState;
-(id)CurrentInterstitialBinding;
-(void)_updateEffectiveRate;
-(id)RateBinding;
-(id)_currentInterstitial;
-(double)_effectiveRateForPlaybackRate:(double)arg1 inState:(id)arg2 withInterstitial:(id)arg3 ;
-(void)setEffectiveRate:(double)arg1 ;
-(void)tvs_bindCurrentInterstitialBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindRateBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(double)effectiveRate;
-(id)playerStateDidChangeObserver;
-(void)setPlayerStateDidChangeObserver:(id)arg1 ;
@end

