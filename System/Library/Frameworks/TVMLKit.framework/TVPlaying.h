/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:12 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVPlayer, TVMediaItem, TVPlaylist, NSDate, NSDictionary;


@protocol TVPlaying <NSObject>
@property (nonatomic,readonly) AVPlayer * avPlayer; 
@property (assign,nonatomic,__weak) id<TVPlayerBridging> bridge; 
@property (nonatomic,readonly) TVMediaItem * currentMediaItem; 
@property (nonatomic,retain) TVPlaylist * playlist; 
@property (assign,nonatomic) double elapsedTime; 
@property (nonatomic,retain) NSDate * elapsedDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long modifier; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (assign,nonatomic) double scanRate; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (assign,nonatomic) long long resumeMenuBehavior; 
@property (nonatomic,readonly) TVMediaItem * nextMediaItem; 
@property (nonatomic,readonly) TVMediaItem * previousMediaItem; 
@property (nonatomic,readonly) BOOL currentMediaItemHasVideoContent; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@optional
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(void)pause;
-(void)reset;
-(void)next;
-(void)previous;
-(double)scanRate;
-(void)setScanRate:(double)arg1;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
-(void)stopObservingEvent:(id)arg1;
-(TVMediaItem *)nextMediaItem;
-(TVMediaItem *)previousMediaItem;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1;
-(BOOL)preventsSleepDuringVideoPlayback;
-(BOOL)currentMediaItemHasVideoContent;
-(long long)resumeMenuBehavior;
-(void)setResumeMenuBehavior:(long long)arg1;
-(id)playbackDate;
-(void)changeToMediaItemAtIndex:(long long)arg1;
-(id)accessLogs;
-(id)errorLogs;

@required
-(long long)state;
-(void)stop;
-(long long)modifier;
-(double)duration;
-(void)begin;
-(void)setElapsedTime:(double)arg1;
-(double)elapsedTime;
-(void)play;
-(TVPlaylist *)playlist;
-(void)setPlaylist:(id)arg1;
-(void)setBridge:(id)arg1;
-(id<TVPlayerBridging>)bridge;
-(TVMediaItem *)currentMediaItem;
-(AVPlayer *)avPlayer;
-(NSDate *)elapsedDate;
-(void)setElapsedDate:(id)arg1;

@end

