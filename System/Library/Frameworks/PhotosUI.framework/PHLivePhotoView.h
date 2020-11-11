/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@protocol PHLivePhotoViewDelegate;
@class PHLivePhoto, ISPlayerItem, UIView, ISLivePhotoUIView, ISLivePhotoPlayer, UIGestureRecognizer, NSString;

@interface PHLivePhotoView : UIView <ISChangeObserver> {

	struct {
		BOOL respondsToWillBeginPlaybackWithStyle;
		BOOL respondsToDidEndPlayback;
	}  _delegateFlags;
	struct {
		BOOL respondsToDidEndPlayingVitality;
		BOOL respondsToDidBeginHinting;
		BOOL respondsToDidBeginScrubbing;
		BOOL respondsToDidEndScrubbing;
	}  _delegatePrivateFlags;
	long long _currentPlaybackStyle;
	BOOL _muted;
	BOOL __playingVitality;
	BOOL __playbackRequested;
	BOOL _scrubbing;
	BOOL _shouldApplyTargetReadiness;
	BOOL _showsStatusBorder;
	id<PHLivePhotoViewDelegate> _delegate;
	PHLivePhoto* _livePhoto;
	ISPlayerItem* __playerItem;
	long long _targetReadiness;
	UIView* _photoView;
	ISLivePhotoUIView* _playerView;
	ISLivePhotoPlayer* _player;
	CGPoint _scaleAnchorOffset;
	SCD_Struct_PH2 _trimmedTimeRange;

}

@property (setter=_setPlayerItem:,nonatomic,retain) ISPlayerItem * _playerItem;                  //@synthesize _playerItem=__playerItem - In the implementation block
@property (assign,setter=_setPlayingVitality:,nonatomic) BOOL _playingVitality;                  //@synthesize _playingVitality=__playingVitality - In the implementation block
@property (assign,setter=_setPlaybackRequested:,nonatomic) BOOL _playbackRequested;              //@synthesize _playbackRequested=__playbackRequested - In the implementation block
@property (assign,setter=_setScrubbing:,nonatomic) BOOL scrubbing;                               //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,nonatomic) long long targetReadiness;                                          //@synthesize targetReadiness=_targetReadiness - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyTargetReadiness;                                    //@synthesize shouldApplyTargetReadiness=_shouldApplyTargetReadiness - In the implementation block
@property (nonatomic,retain) UIView * photoView;                                                 //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic) CGPoint scaleAnchorOffset;                                          //@synthesize scaleAnchorOffset=_scaleAnchorOffset - In the implementation block
@property (nonatomic,retain) ISLivePhotoUIView * playerView;                                     //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) ISLivePhotoPlayer * player;                                         //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL showsStatusBorder;                                             //@synthesize showsStatusBorder=_showsStatusBorder - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH2 trimmedTimeRange;                                    //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (assign,nonatomic) CGImageRef overridePhoto; 
@property (assign,nonatomic) SCD_Struct_PH1 seekTime; 
@property (getter=isDisplayingPhoto,nonatomic,readonly) BOOL displayingPhoto; 
@property (assign,nonatomic,__weak) id<PHLivePhotoViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHLivePhoto * livePhoto;                                            //@synthesize livePhoto=_livePhoto - In the implementation block
@property (assign,getter=isMuted,nonatomic) BOOL muted;                                          //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)livePhotoBadgeImageWithOptions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PHLivePhotoViewDelegate>)delegate;
-(void)setDelegate:(id<PHLivePhotoViewDelegate>)arg1 ;
-(ISLivePhotoPlayer *)player;
-(void)setPlayer:(ISLivePhotoPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(void)stopPlayback;
-(void)setContentMode:(long long)arg1 ;
-(PHLivePhoto *)livePhoto;
-(void)setLivePhoto:(PHLivePhoto *)arg1 ;
-(UIView *)photoView;
-(ISPlayerItem *)_playerItem;
-(void)_setPlayerItem:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)generateSnapshotImage;
-(BOOL)isDisplayingPhoto;
-(void)setPlayerView:(ISLivePhotoUIView *)arg1 ;
-(ISLivePhotoUIView *)playerView;
-(SCD_Struct_PH1)seekTime;
-(void)setSeekTime:(SCD_Struct_PH1)arg1 ;
-(void)_commonPHLivePhotoViewInitialization;
-(void)setShowsStatusBorder:(BOOL)arg1 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)setPhotoView:(UIView *)arg1 ;
-(void)setScaleAnchorOffset:(CGPoint)arg1 ;
-(void)setTargetReadiness:(long long)arg1 ;
-(void)_setPlaybackRequested:(BOOL)arg1 ;
-(void)setTrimmedTimeRange:(SCD_Struct_PH2)arg1 ;
-(void)startPlaybackWithStyle:(long long)arg1 ;
-(void)setOverridePhoto:(CGImageRef)arg1 ;
-(CGImageRef)overridePhoto;
-(void)_setScrubbing:(BOOL)arg1 ;
-(void)_updatePlayerAudioEnabled;
-(void)_updatePlayingVitality;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(void)_updateStatusBorder;
-(void)_updateCurrentPlaybackStyleAndSeeking;
-(void)_playerDidBeginHinting;
-(void)_updatePlayerTargetReadiness;
-(void)_handlePlayerItemStatusChanged;
-(BOOL)_playingVitality;
-(BOOL)_playbackRequested;
-(BOOL)scrubbing;
-(long long)targetReadiness;
-(BOOL)shouldApplyTargetReadiness;
-(void)setShouldApplyTargetReadiness:(BOOL)arg1 ;
-(CGPoint)scaleAnchorOffset;
-(BOOL)showsStatusBorder;
-(SCD_Struct_PH2)trimmedTimeRange;
@end

