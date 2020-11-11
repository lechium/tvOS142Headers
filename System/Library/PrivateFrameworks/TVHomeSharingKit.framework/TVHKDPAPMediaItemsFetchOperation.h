/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKSimpleMediaEntitiesFetchOperation.h>

@class TVHKDMAPPlaylistIdentifier;

@interface TVHKDPAPMediaItemsFetchOperation : TVHKSimpleMediaEntitiesFetchOperation {

	TVHKDMAPPlaylistIdentifier* _sourcePlaylistIdentifier;

}

@property (nonatomic,retain) TVHKDMAPPlaylistIdentifier * sourcePlaylistIdentifier;              //@synthesize sourcePlaylistIdentifier=_sourcePlaylistIdentifier - In the implementation block
+(id)_mediaEntityTypePredicateForRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 ;
-(TVHKDMAPPlaylistIdentifier *)sourcePlaylistIdentifier;
-(id)_mediaEntityKind;
-(id)_mediaLibraryRequest;
-(id)_mediaEntitiesFromDMAPEntities:(id)arg1 ;
-(void)setSourcePlaylistIdentifier:(TVHKDMAPPlaylistIdentifier *)arg1 ;
@end

