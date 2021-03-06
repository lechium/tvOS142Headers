/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:57 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputCore/TISKEvent.h>

@class TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TISKPathEvent : TISKEvent {

	TIKeyboardCandidate* _candidate;
	TIKeyboardTouchEvent* _pathTouchUp;

}
-(id)description;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(BOOL)isMissingATouch;
-(id)init:(id)arg1 candidate:(id)arg2 order:(long long)arg3 ;
@end

