/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class MKPlaceReservationRowView, _MKPlaceReservationInfo, NSString;

@interface MKPlaceReservationViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	MKPlaceReservationRowView* _reservationCell;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;              //@synthesize reservationInfo=_reservationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_updateReservationInfoAnimated:(BOOL)arg1 ;
-(_MKPlaceReservationInfo *)reservationInfo;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
@end

