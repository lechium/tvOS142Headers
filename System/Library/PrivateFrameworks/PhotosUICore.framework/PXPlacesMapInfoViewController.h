/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@class PXPlacesMapView;

@interface PXPlacesMapInfoViewController : UIViewController {

	PXPlacesMapView* _mapView;

}

@property (__weak) PXPlacesMapView * mapView;              //@synthesize mapView=_mapView - In the implementation block
-(void)setMapView:(PXPlacesMapView *)arg1 ;
-(PXPlacesMapView *)mapView;
-(void)viewDidLoad;
-(id)initWithMapView:(id)arg1 ;
-(void)tappedDone:(id)arg1 ;
-(void)tappedDimView:(id)arg1 ;
-(void)tapped3dButton:(id)arg1 ;
-(void)mapTypeChanged:(id)arg1 ;
-(long long)segmentIndexFor:(unsigned long long)arg1 ;
@end

