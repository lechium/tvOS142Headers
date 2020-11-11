/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(id)operationWithLocation:(id)arg1 ;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
+(double)recommendedAccuracy;
-(void)dealloc;
-(void)cancelOperation;
-(unsigned long long)launchOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(NSArray *)placemarks;
@end

