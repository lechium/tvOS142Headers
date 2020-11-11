/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_group, OS_dispatch_queue, CalLogWriter;
@class NSMutableArray, NSObject, CalLogFilter;

@interface CalLogNode : NSObject {

	NSMutableArray* _subnodes;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CalLogFilter* _filter;
	id<CalLogWriter> _writer;
	NSMutableArray* _accumulator;
	unsigned long long _accumulatorBufferSize;

}

@property (nonatomic,retain) NSMutableArray * subnodes;                             //@synthesize subnodes=_subnodes - In the implementation block
@property (nonatomic,retain) NSMutableArray * accumulator;                          //@synthesize accumulator=_accumulator - In the implementation block
@property (nonatomic,retain) CalLogFilter * filter;                                 //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) unsigned long long accumulatorBufferSize;              //@synthesize accumulatorBufferSize=_accumulatorBufferSize - In the implementation block
@property (nonatomic,retain) id<CalLogWriter> writer;                               //@synthesize writer=_writer - In the implementation block
-(id)init;
-(CalLogFilter *)filter;
-(BOOL)flush;
-(void)setFilter:(CalLogFilter *)arg1 ;
-(id<CalLogWriter>)writer;
-(void)setWriter:(id<CalLogWriter>)arg1 ;
-(void)addSubnode:(id)arg1 ;
-(int)minimumLevelOfNodeTree;
-(id)allSubnodes;
-(void)processEnvelope:(id)arg1 ;
-(NSMutableArray *)accumulator;
-(NSMutableArray *)subnodes;
-(void)flushAccumulator;
-(unsigned long long)accumulatorBufferSize;
-(void)setAccumulator:(NSMutableArray *)arg1 ;
-(void)clearAccumulator;
-(void)removeSubnode:(id)arg1 ;
-(void)setSubnodes:(NSMutableArray *)arg1 ;
-(void)setAccumulatorBufferSize:(unsigned long long)arg1 ;
@end

