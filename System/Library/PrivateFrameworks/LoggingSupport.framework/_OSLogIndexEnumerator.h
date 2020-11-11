/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogTracepointBuffer, _OSLogIndex, _OSLogCatalogFilter;

@interface _OSLogIndexEnumerator : NSObject {

	NSMutableArray* _subchunkStartQ;
	NSMutableArray* _subchunkEndQ;
	NSMutableArray* _catalogStartQ;
	NSMutableArray* _fileStartQ;
	NSMutableArray* _fileEndQ;
	NSMutableArray* _fileBootQ;
	NSMutableArray* _oversizeChunks;
	os_timesync_range_s* _bounds[6];
	os_timesync_range_s* _live_bound;
	_OSLogTracepointBuffer* _tracepoints;
	_OSLogIndex* _index;
	_OSLogCatalogFilter* _catalogFilter;

}

@property (nonatomic,readonly) NSMutableArray * oversizeChunks;              //@synthesize oversizeChunks=_oversizeChunks - In the implementation block
-(void)dealloc;
-(id)initWithIndex:(id)arg1 metadata:(SCD_Struct_OS23*)arg2 fileBootList:(id)arg3 catalogFilter:(id)arg4 ;
-(void)_initTimesyncBounds:(SCD_Struct_OS23*)arg1 ;
-(void)enumerateTracepointsInRange:(os_timesync_range_s*)arg1 timesync:(os_timesync_db_sRef)arg2 options:(unsigned)arg3 usingBlock:(/*^block*/id)arg4 ;
-(NSMutableArray *)oversizeChunks;
@end

