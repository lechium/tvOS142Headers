/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface GEOComposedRouteLengthMarker : NSObject {

	unsigned long long _pathIndex;
	unsigned long long _pointIndex;
	double _length;

}

@property (assign,nonatomic) unsigned long long pathIndex;               //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pointIndex;              //@synthesize pointIndex=_pointIndex - In the implementation block
@property (assign,nonatomic) double length;                              //@synthesize length=_length - In the implementation block
-(id)description;
-(double)length;
-(void)setLength:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)pathIndex;
-(void)setPathIndex:(unsigned long long)arg1 ;
-(unsigned long long)pointIndex;
-(void)setPointIndex:(unsigned long long)arg1 ;
@end

