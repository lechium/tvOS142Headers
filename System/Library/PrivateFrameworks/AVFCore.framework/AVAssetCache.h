/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline,nonatomic,readonly) BOOL playableOffline; 
+(id)assetCacheWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)arg1 ;
+(id)assetCacheForHTTPLiveStreamingWithURL:(id)arg1 ;
+(id)assetCacheForProgressiveDownloadWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)allKeys;
-(id)_init;
-(id)URL;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)removeEntryForKey:(id)arg1 ;
-(long long)maxSize;
-(long long)currentSize;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(BOOL)isPlayableOffline;
-(long long)maxEntrySize;
-(long long)sizeOfEntryForKey:(id)arg1 ;
@end

