/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class FlexSegment, NSURL;

@interface FlexSegmentAssemblyInfo : NSObject {

	FlexSegment* _segment;
	long long _barsUsed;
	NSURL* _url;
	long long _offset;
	long long _duration;

}

@property (nonatomic,retain) FlexSegment * segment;              //@synthesize segment=_segment - In the implementation block
@property (assign,nonatomic) long long barsUsed;                 //@synthesize barsUsed=_barsUsed - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) long long duration;                 //@synthesize duration=_duration - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(long long)duration;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(void)setDuration:(long long)arg1 ;
-(FlexSegment *)segment;
-(void)setSegment:(FlexSegment *)arg1 ;
-(long long)barsUsed;
-(void)setBarsUsed:(long long)arg1 ;
@end

