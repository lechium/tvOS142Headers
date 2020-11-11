/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSString;

@interface _MPMediaLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {

	long long _artworkType;
	NSString* _availableArtworkToken;
	NSString* _fetchableArtworkToken;

}

@property (nonatomic,readonly) long long artworkType;                         //@synthesize artworkType=_artworkType - In the implementation block
@property (nonatomic,readonly) NSString * availableArtworkToken;              //@synthesize availableArtworkToken=_availableArtworkToken - In the implementation block
@property (nonatomic,readonly) NSString * fetchableArtworkToken;              //@synthesize fetchableArtworkToken=_fetchableArtworkToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(id)stringRepresentation;
-(long long)artworkType;
-(NSString *)availableArtworkToken;
-(NSString *)fetchableArtworkToken;
-(id)initWithArtworkType:(long long)arg1 availableArtworkToken:(id)arg2 fetchableArtworkToken:(id)arg3 ;
@end
