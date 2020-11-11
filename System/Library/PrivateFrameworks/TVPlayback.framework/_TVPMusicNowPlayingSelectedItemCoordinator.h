/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _TVPMusicNowPlayingSelectedItemCoordinator : NSObject {

	BOOL _trackChanged;
	BOOL _readyForDisplay;
	BOOL _finished;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)beginObservingVideoPlayerViewController:(id)arg1 ;
-(void)notifyEventTrackChanged;
-(void)_finishIfPossible;
@end

