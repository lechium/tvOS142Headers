/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:35 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, MPMediaItemCollection, MPPlaybackArchive;

@interface WFPlayMusicActionContent : NSObject {

	NSArray* _storeIDs;
	MPMediaItemCollection* _mediaCollection;
	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy) NSArray * storeIDs;                                     //@synthesize storeIDs=_storeIDs - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * mediaCollection;              //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;                  //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(MPMediaItemCollection *)mediaCollection;
-(void)setMediaCollection:(MPMediaItemCollection *)arg1 ;
-(id)initWithStoreIDs:(id)arg1 ;
-(NSArray *)storeIDs;
-(void)setStoreIDs:(NSArray *)arg1 ;
-(id)initWithPlaybackArchive:(id)arg1 ;
-(MPPlaybackArchive *)playbackArchive;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(id)initWithMediaCollection:(id)arg1 ;
@end

