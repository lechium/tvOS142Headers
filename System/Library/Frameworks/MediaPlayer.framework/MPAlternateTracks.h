/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemLegibleOutputPushDelegate.h>

@class MPAVItem, NSDictionary, NSMutableDictionary, AVPlayerItemLegibleOutput, MPAlternateTextTrack, NSArray, NSString;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate> {

	MPAVItem* _item;
	NSDictionary* _alternateTracks;
	NSMutableDictionary* _trackChangeDictionary;
	BOOL _disableAlternateTextTrackRendering;
	AVPlayerItemLegibleOutput* _legibleOutput;
	MPAlternateTextTrack* _currentTextTrack;
	NSArray* _outOfBandTextTracks;

}

@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,retain) NSArray * outOfBandTextTracks;                                  //@synthesize outOfBandTextTracks=_outOfBandTextTracks - In the implementation block
@property (assign,nonatomic) BOOL disableAlternateTextTrackRendering;                        //@synthesize disableAlternateTextTrackRendering=_disableAlternateTextTrackRendering - In the implementation block
@property (nonatomic,retain) MPAlternateTextTrack * selectedAlternateTextTrack; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)subtitleLanguages;
-(BOOL)isLoaded;
-(void)reloadData;
-(void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(SCD_Struct_MP3)arg4 ;
-(id)initWithItem:(id)arg1 ;
-(void)beginTrackChanges;
-(void)commitTrackChanges;
-(id)currentTrackForType:(unsigned long long)arg1 ;
-(unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1 ;
-(void)setDisableAlternateTextTrackRendering:(BOOL)arg1 ;
-(MPAlternateTextTrack *)selectedAlternateTextTrack;
-(void)setSelectedAlternateTextTrack:(MPAlternateTextTrack *)arg1 ;
-(void)setOutOfBandTextTracks:(NSArray *)arg1 ;
-(void)setTrack:(id)arg1 forType:(unsigned long long)arg2 ;
-(id)tracksForType:(unsigned long long)arg1 ;
-(BOOL)hasTracksForTypes:(unsigned long long)arg1 ;
-(unsigned long long)trackCountForTypes:(unsigned long long)arg1 ;
-(void)reloadDataWithChangedCaptionDisplayType:(BOOL)arg1 ;
-(void)enableLegibleOutputIfNecessary;
-(id)_keyForTrackType:(unsigned long long)arg1 ;
-(id)_currentTextTrackAccordingToAVF;
-(void)_suppressAVFSubtitleRendering;
-(NSArray *)outOfBandTextTracks;
-(BOOL)disableAlternateTextTrackRendering;
@end
