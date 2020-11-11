/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKMapServicePublisherViewTicket;
@class MKMapItemIdentifier;

@interface MKPlacePublisherRefiner : NSObject {

	MKMapItemIdentifier* _publisherIdentifier;
	id<MKMapServicePublisherViewTicket> _ticket;

}
-(void)fetchWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 providerIdentifier:(int)arg2 ;
-(id)initWithPublisherIdentifier:(unsigned long long)arg1 ;
@end

