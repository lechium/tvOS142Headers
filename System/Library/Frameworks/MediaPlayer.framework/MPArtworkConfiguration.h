/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject {

	ML3ArtworkConfiguration* _artworkConfiguration;

}

@property (nonatomic,retain) ML3ArtworkConfiguration * artworkConfiguration;              //@synthesize artworkConfiguration=_artworkConfiguration - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(id)sizesToAutogenerateForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(id)supportedSizesForMediaType:(unsigned long long)arg1 artworkType:(long long)arg2 ;
-(ML3ArtworkConfiguration *)artworkConfiguration;
-(void)setArtworkConfiguration:(ML3ArtworkConfiguration *)arg1 ;
@end

