/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKMapServiceTicket, MKMapServiceSpatialPlaceLookupTicket;
@class MKLocalSearchRequest, MKLocalPointsOfInterestRequest;

@interface MKLocalSearch : NSObject {

	MKLocalSearchRequest* _request;
	id<MKMapServiceTicket> _ticket;
	MKLocalPointsOfInterestRequest* _pointsOfInterestRequest;
	id<MKMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;

}

@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
-(id)init;
-(void)cancel;
-(id)initWithRequest:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isSearching;
-(void)_handleMapItems:(id)arg1 boundingRegion:(id)arg2 error:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)_startWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_startPointsOfInterestFetchWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithPointsOfInterestRequest:(id)arg1 ;
-(void)_phoneOnlyStartWithCompletionHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
@end
