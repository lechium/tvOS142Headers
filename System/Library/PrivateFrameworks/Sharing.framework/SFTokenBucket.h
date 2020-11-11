/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SFTokenBucket : NSObject {

	unsigned long long _bucketSize;
	unsigned long long _tokensAvailable;
	unsigned long long _tokenDurationTicks;
	unsigned long long _lastRefreshTicks;

}
-(id)init;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationTicks:(unsigned long long)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokenDurationSec:(double)arg2 ;
-(id)initWithBucketSize:(unsigned long long)arg1 tokensPerSec:(double)arg2 ;
-(BOOL)acquireToken;
@end
