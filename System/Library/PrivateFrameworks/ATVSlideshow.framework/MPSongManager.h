/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString, NSRecursiveLock;

@interface MPSongManager : NSObject {

	NSMutableDictionary* mSongDescriptions;
	NSMutableDictionary* mSongBeats;
	NSMutableDictionary* mSongMetaData;
	NSString* mSongCacheFilePath;
	NSRecursiveLock* mSongLock;
	void* mDaFunc;

}
+(id)sharedManager;
+(void)releaseSharedManager;
-(id)init;
-(void)dealloc;
-(id)initWithPaths:(id)arg1 ;
-(id)cachedBeatsForSongAtPath:(id)arg1 ;
-(id)beatsForSongAtPath:(id)arg1 progressCallback:(/*function pointer*/void*)arg2 context:(void*)arg3 ;
-(BOOL)hasBeatsForSongAtPath:(id)arg1 ;
-(id)songMetadataForPath:(id)arg1 ;
-(void)storeBeats:(id)arg1 forPath:(id)arg2 ;
@end
