/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {

	int _maxBufferCount;
	NSMutableDictionary* _bufferPool;

}
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
@end

