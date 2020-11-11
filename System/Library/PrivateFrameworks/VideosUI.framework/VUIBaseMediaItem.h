/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPBaseMediaItem.h>

@class VUIMediaStartTimeCollection;

@interface VUIBaseMediaItem : TVPBaseMediaItem {

	VUIMediaStartTimeCollection* _startTimeCollection;

}

@property (nonatomic,retain) VUIMediaStartTimeCollection * startTimeCollection;              //@synthesize startTimeCollection=_startTimeCollection - In the implementation block
+(void)initialize;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(VUIMediaStartTimeCollection *)startTimeCollection;
-(void)setStartTimeCollection:(VUIMediaStartTimeCollection *)arg1 ;
@end

