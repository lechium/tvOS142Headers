/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPPlaybackViewController.h>

@class IKPlaylistElement, TVPPlaybackReportingEventCollection;

@interface TVCKPlaylistViewController : TVPPlaybackViewController {

	IKPlaylistElement* _playlistElement;
	BOOL _wasPlayingBackgroundAudio;
	TVPPlaybackReportingEventCollection* _eventCollection;

}
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 invalidateWhenDone:(BOOL)arg2 initialPlaybackType:(long long)arg3 ;
-(void)_findExtrasMainVideoBackgroundFromNavigationController:(id)arg1 andStop:(BOOL)arg2 ;
-(id)_storeMediaItemsForVideoElement:(id)arg1 ;
-(id)_auxMediaItemForVideoElement:(id)arg1 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2 ;
@end

