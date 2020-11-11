/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceBatchSpatialLookupTicket.h>

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

@interface _GEOBatchSpatialLookupTicket : GEOAbstractTicket <GEOMapServiceBatchSpatialLookupTicket> {

	GEOSpatialLookupBatchRequest* _request;
	GEOSpatialLookupBatchResponse* _response;
	NSArray* _parameters;
	NSMapTable* _parametersToMapItems;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(SCD_Struct_GE86)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(id)mapItemsForParameters:(id)arg1 ;
-(id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3 ;
@end
