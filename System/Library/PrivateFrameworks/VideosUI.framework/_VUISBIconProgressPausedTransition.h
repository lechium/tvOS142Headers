/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/_VUISBIconProgressTransition.h>

@class CAMediaTimingFunction;

@interface _VUISBIconProgressPausedTransition : _VUISBIconProgressTransition {

	double _totalElapsedTime;
	double _duration;
	CAMediaTimingFunction* _timingFunction;
	BOOL _toPaused;
	double _fraction;

}
+(id)newTransitionToPaused:(BOOL)arg1 ;
-(void)dealloc;
-(void)completeTransitionAndUpdateView:(id)arg1 ;
-(void)updateToPaused:(BOOL)arg1 ;
-(BOOL)isCompleteWithView:(id)arg1 ;
-(void)updateView:(id)arg1 withElapsedTime:(double)arg2 ;
-(void)_updateView:(id)arg1 ;
-(id)_initToPaused:(BOOL)arg1 ;
-(void)_updateTimingFunction;
-(void)_updateElapsedTimeFromFraction;
@end
