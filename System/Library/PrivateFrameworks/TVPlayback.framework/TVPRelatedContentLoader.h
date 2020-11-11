/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVPPlayback, TVPRelatedContentLoaderDelegate;
@class NSObject, TVPRelatedContentViewController;

@interface TVPRelatedContentLoader : NSObject {

	NSObject*<TVPPlayback> _player;
	TVPRelatedContentViewController* _relatedContentViewController;
	id<TVPRelatedContentLoaderDelegate> _delegate;
	id _itemDidChangeObserver;
	id _metadataDidChangeObserver;
	id _beginningBoundaryTimeObserver;
	id _endingBoundaryTimeObserver;
	id _elapsedTimeObserver;

}

@property (assign,nonatomic,__weak) id itemDidChangeObserver;                                             //@synthesize itemDidChangeObserver=_itemDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id metadataDidChangeObserver;                                         //@synthesize metadataDidChangeObserver=_metadataDidChangeObserver - In the implementation block
@property (nonatomic,retain) id beginningBoundaryTimeObserver;                                            //@synthesize beginningBoundaryTimeObserver=_beginningBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) id endingBoundaryTimeObserver;                                               //@synthesize endingBoundaryTimeObserver=_endingBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) id elapsedTimeObserver;                                                      //@synthesize elapsedTimeObserver=_elapsedTimeObserver - In the implementation block
@property (nonatomic,retain) NSObject*<TVPPlayback> player;                                               //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVPRelatedContentViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TVPRelatedContentLoaderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<TVPRelatedContentLoaderDelegate>)delegate;
-(void)setDelegate:(id<TVPRelatedContentLoaderDelegate>)arg1 ;
-(NSObject*<TVPPlayback>)player;
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(void)_removeObservers;
-(id)_durationUntilPlaybackWillAdvance;
-(id)DurationBinding;
-(void)_updateBoundDuration;
-(id)MediaItemEndActionBinding;
-(void)_updateBoundMediaItemEndAction;
-(void)_updateBoundaryTimeObserversForPlayer:(id)arg1 ;
-(void)_updateDurationUntilPlaybackWillAdvance;
-(TVPRelatedContentViewController *)relatedContentViewController;
-(void)_didLoadRelatedContent:(id)arg1 ;
-(BOOL)_shouldShowRelatedContent:(id)arg1 ;
-(id)_presentationBeginTimeForCurrentMediaItem;
-(id)beginningBoundaryTimeObserver;
-(void)_crossedPresentationBeginTimeBoundary;
-(void)setBeginningBoundaryTimeObserver:(id)arg1 ;
-(id)endingBoundaryTimeObserver;
-(id)_presentationEndTimeForCurrentMediaItem;
-(void)_crossedPresentationEndTimeBoundary;
-(void)setEndingBoundaryTimeObserver:(id)arg1 ;
-(void)tvs_bindDurationBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindMediaItemEndActionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)setRelatedContentViewController:(TVPRelatedContentViewController *)arg1 ;
-(id)itemDidChangeObserver;
-(void)setItemDidChangeObserver:(id)arg1 ;
-(id)metadataDidChangeObserver;
-(void)setMetadataDidChangeObserver:(id)arg1 ;
-(id)elapsedTimeObserver;
-(void)setElapsedTimeObserver:(id)arg1 ;
@end

