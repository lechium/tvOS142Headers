/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, CAMediaTimingFunction;

@interface TVPlaybackProgressAnimation : NSObject {

	NSDate* _animationStartDate;
	double _animationDuration;
	double _fromPlaybackTime;
	double _toPlaybackTime;
	CAMediaTimingFunction* _mediaTimingFunction;
	NSDate* _currentDate;

}

@property (nonatomic,copy) NSDate * animationStartDate;                                //@synthesize animationStartDate=_animationStartDate - In the implementation block
@property (assign,nonatomic) double animationDuration;                                 //@synthesize animationDuration=_animationDuration - In the implementation block
@property (assign,nonatomic) double fromPlaybackTime;                                  //@synthesize fromPlaybackTime=_fromPlaybackTime - In the implementation block
@property (assign,nonatomic) double toPlaybackTime;                                    //@synthesize toPlaybackTime=_toPlaybackTime - In the implementation block
@property (assign,nonatomic) CAMediaTimingFunction * mediaTimingFunction;              //@synthesize mediaTimingFunction=_mediaTimingFunction - In the implementation block
@property (nonatomic,copy) NSDate * currentDate;                                       //@synthesize currentDate=_currentDate - In the implementation block
+(void)initialize;
-(BOOL)isFinished;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(NSDate *)currentDate;
-(double)currentPlaybackTime;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSDate *)animationStartDate;
-(CAMediaTimingFunction *)mediaTimingFunction;
-(double)fromPlaybackTime;
-(double)toPlaybackTime;
-(void)setAnimationStartDate:(NSDate *)arg1 ;
-(void)setFromPlaybackTime:(double)arg1 ;
-(void)setToPlaybackTime:(double)arg1 ;
-(void)setMediaTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

