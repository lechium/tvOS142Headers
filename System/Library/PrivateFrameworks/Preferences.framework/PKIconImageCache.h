/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface PKIconImageCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheAccessQueue;
	NSDictionary* _iconCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cacheAccessQueue;              //@synthesize cacheAccessQueue=_cacheAccessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * iconCache;                                   //@synthesize iconCache=_iconCache - In the implementation block
+(id)settingsIconCache;
+(id)settingsIconCacheWithScale:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(id)imageForKey:(id)arg1 ;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(void)setIconCache:(NSDictionary *)arg1 ;
-(NSDictionary *)iconCache;
-(id)allImageIconKeys;
-(void)setCacheAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

