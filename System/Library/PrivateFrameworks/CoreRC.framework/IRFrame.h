/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreRC/CoreRC-Structs.h>
@interface IRFrame : NSObject {

	unsigned* _timings;
	unsigned long long _count;
	unsigned long long _timestamp;

}

@property (nonatomic,readonly) unsigned long long count;                //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)initWithTimings:(const unsigned*)arg1 count:(unsigned long long)arg2 timestamp:(unsigned long long)arg3 ;
-(unsigned)timeIntervalAtIndex:(unsigned long long)arg1 ;
-(void)getTimings:(unsigned*)arg1 range:(NSRange)arg2 ;
@end

