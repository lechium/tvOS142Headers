/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKTransitLineMarker.h>

@protocol GEOTransitLine;
@class NSString;

@interface _GEOTransitLineMarker : NSObject <MKTransitLineMarker> {

	id<GEOTransitLine> _line;
	CLLocationCoordinate2D _locationHint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)artwork;
-(id)labelText;
-(id)mapItemIdentifier;
-(id)initWithGEOTransitLine:(id)arg1 locationHint:(CLLocationCoordinate2D)arg2 ;
@end

