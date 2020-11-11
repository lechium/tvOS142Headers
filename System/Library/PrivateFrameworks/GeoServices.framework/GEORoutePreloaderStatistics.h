/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDateInterval;

@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding> {

	NSDateInterval* _dateInterval;
	long long _transportType;
	unsigned long long _tilesPreloaded;
	unsigned long long _tilesUsed;
	unsigned long long _tilesMissed;

}

@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (assign,nonatomic) long long transportType;                           //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) unsigned long long tilesPreloaded;                 //@synthesize tilesPreloaded=_tilesPreloaded - In the implementation block
@property (assign,nonatomic) unsigned long long tilesUsed;                      //@synthesize tilesUsed=_tilesUsed - In the implementation block
@property (assign,nonatomic) unsigned long long tilesMissed;                    //@synthesize tilesMissed=_tilesMissed - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(id)initWithDateInterval:(id)arg1 transportType:(long long)arg2 tilesPreloaded:(unsigned long long)arg3 tilesUsed:(unsigned long long)arg4 tilesMissed:(unsigned long long)arg5 ;
-(NSDateInterval *)dateInterval;
-(unsigned long long)tilesPreloaded;
-(void)setTilesPreloaded:(unsigned long long)arg1 ;
-(unsigned long long)tilesUsed;
-(void)setTilesUsed:(unsigned long long)arg1 ;
-(unsigned long long)tilesMissed;
-(void)setTilesMissed:(unsigned long long)arg1 ;
@end

