/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPPlaybackProgress.h>

@class NSValueTransformer;

@interface TVPDefiniteDurationPlaybackProgress : TVPPlaybackProgress {

	double _elapsedTime;
	double _duration;
	NSValueTransformer* _valueTransformer;

}

@property (nonatomic,retain) NSValueTransformer * valueTransformer;              //@synthesize valueTransformer=_valueTransformer - In the implementation block
@property (assign,nonatomic) double elapsedTime;                                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double duration;                                    //@synthesize duration=_duration - In the implementation block
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(double)elapsedTime;
-(NSValueTransformer *)valueTransformer;
-(void)setValueTransformer:(NSValueTransformer *)arg1 ;
-(void)_updateTitles;
@end

