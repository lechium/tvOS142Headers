//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicJSDocumentViewController.h"

@class MPModelPlaylist;

@interface TVMusicJSPlaylistDetailViewController : TVMusicJSDocumentViewController
{
    MPModelPlaylist *_playlist;	// 8 = 0x8
}

+ (id)_contextDictionaryForPlaylistDictionary:(id)arg1;	// IMP=0x0000000100008b6c
+ (id)_stringForPlaylistType:(long long)arg1;	// IMP=0x0000000100008ad8
+ (void)dictionaryForPlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008398
+ (void)getViewControllerForPlaylist:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000080e8
- (void).cxx_destruct;	// IMP=0x0000000100009a8c
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
- (_Bool)_handleCommand:(id)arg1;	// IMP=0x0000000100009884
- (_Bool)_getPlaylistEntryForViewElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000092dc
- (_Bool)_handlePlayForViewElement:(id)arg1;	// IMP=0x0000000100008fc8
- (_Bool)_handleLongPressForViewElement:(id)arg1;	// IMP=0x0000000100008ebc
- (_Bool)_handleActionForViewElement:(id)arg1;	// IMP=0x0000000100008e08
- (_Bool)_isPlaylist:(id)arg1 visuallySameAsPlaylist:(id)arg2;	// IMP=0x0000000100008c38
- (id)representedObject;	// IMP=0x0000000100008084
- (void)reloadData;	// IMP=0x0000000100007c44
- (_Bool)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id *)arg4;	// IMP=0x0000000100007b78
- (id)songsRequest;	// IMP=0x0000000100007b14
- (id)initWithPlaylistDictionary:(id)arg1 playlistModel:(id)arg2;	// IMP=0x0000000100007998

@end
