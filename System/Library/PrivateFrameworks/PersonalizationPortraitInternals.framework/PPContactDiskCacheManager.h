/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _PASLock;

@interface PPContactDiskCacheManager : NSObject {

	_PASLock* _lock;

}
-(id)init;
-(id)initWithPath:(id)arg1 ;
-(void)accessCacheWithBlock:(/*^block*/id)arg1 ;
-(void)mutateCacheWithBlock:(/*^block*/id)arg1 ;
@end
