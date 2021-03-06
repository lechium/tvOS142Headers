/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKAnnotationView.h>

@class MKMapView;

@interface _MKLabelMarkerView : MKAnnotationView {

	MKMapView* _mapView;

}

@property (assign,nonatomic,__weak) MKMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
+(BOOL)_followsTerrain;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAnnotation:(id)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowCallout;
-(void)_deregisterObserver;
-(void)_registerObserver;
-(void)_updateAnchorOffset;
@end

