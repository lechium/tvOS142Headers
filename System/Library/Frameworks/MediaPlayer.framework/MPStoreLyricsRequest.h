/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:28 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelSong;

@interface MPStoreLyricsRequest : NSObject <NSCopying> {

	MPModelSong* _song;

}

@property (nonatomic,retain) MPModelSong * song;              //@synthesize song=_song - In the implementation block
+(BOOL)supportsLyricsForURLBagDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPModelSong *)song;
-(void)setSong:(MPModelSong *)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
@end
