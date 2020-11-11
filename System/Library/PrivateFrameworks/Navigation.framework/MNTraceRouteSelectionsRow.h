/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject {

	double _startTimestamp;
	double _endTimestamp;
	NSData* _routeID;
	unsigned long long _selectedRouteIndex;

}

@property (assign,nonatomic) double startTimestamp;                              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) double endTimestamp;                                //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (nonatomic,copy) NSData * routeID;                                     //@synthesize routeID=_routeID - In the implementation block
@property (assign,nonatomic) unsigned long long selectedRouteIndex;              //@synthesize selectedRouteIndex=_selectedRouteIndex - In the implementation block
-(void)setStartTimestamp:(double)arg1 ;
-(void)setEndTimestamp:(double)arg1 ;
-(double)startTimestamp;
-(double)endTimestamp;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setSelectedRouteIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedRouteIndex;
@end

