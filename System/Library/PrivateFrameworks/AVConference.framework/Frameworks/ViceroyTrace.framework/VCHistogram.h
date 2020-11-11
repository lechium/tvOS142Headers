/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VCHistogram : NSObject {

	unsigned* _buckets;
	const unsigned* _ranges;
	unsigned _bucketCount;

}

@property (readonly) const unsigned* ranges;              //@synthesize ranges=_ranges - In the implementation block
+(const unsigned*)bucketWithType:(int)arg1 count:(unsigned*)arg2 ;
+(id)rangesDescription:(int)arg1 ;
-(id)description;
-(void)dealloc;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(BOOL)merge:(id)arg1 ;
-(const unsigned*)ranges;
-(id)initWithType:(int)arg1 bucketValues:(id)arg2 ;
-(void)addValue:(unsigned)arg1 withIncrement:(unsigned)arg2 ;
-(unsigned)bucketValueAtIndex:(unsigned)arg1 ;
@end

