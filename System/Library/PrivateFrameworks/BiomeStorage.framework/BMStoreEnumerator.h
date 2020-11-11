/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:58 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BMStreamDatastore, BMFrameStore, BMStoreBookmark;

@interface BMStoreEnumerator : NSObject {

	BMStreamDatastore* _ds;
	BMFrameStore* _currentFrameStore;
	unsigned long long _frameStoreOffset;
	double _iterationStartTime;

}

@property (nonatomic,readonly) BMFrameStore * currentFrameStore;              //@synthesize currentFrameStore=_currentFrameStore - In the implementation block
@property (nonatomic,readonly) BMStoreBookmark * bookmark; 
-(void)dealloc;
-(BMStoreBookmark *)bookmark;
-(id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 ;
-(id)copyPeekUntypedEvent;
-(id)copyNextUntypedEvent;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg1 ;
-(id)copyNextEvent;
-(id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 ;
-(id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 ;
-(void)nextEventWithContext:(/*^block*/id)arg1 ;
-(id)copyPeekEvent;
-(BMFrameStore *)currentFrameStore;
@end

