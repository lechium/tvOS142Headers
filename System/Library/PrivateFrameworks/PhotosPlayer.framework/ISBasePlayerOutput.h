/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ISBasePlayerOutput <NSObject>
@property (nonatomic,readonly) BOOL isVideoReadyForDisplay; 
@property (nonatomic,copy) id videoLayerReadyForDisplayChangeHandler; 
@optional
-(BOOL)isVideoReadyForDisplay;
-(void)setVideoLayerReadyForDisplayChangeHandler:(/*^block*/id)arg1;
-(id)videoLayerReadyForDisplayChangeHandler;

@required
-(void)setContent:(id)arg1;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3;

@end

