/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GEOServerFormattedString;
@class NSArray;

@interface GEOComposedRouteAdvisory : NSObject <NSSecureCoding> {

	id<GEOServerFormattedString> _inlineTitle;
	id<GEOServerFormattedString> _cardTitle;
	id<GEOServerFormattedString> _cardDetails;
	BOOL _alwaysClickable;
	NSArray* _routeIncidents;

}

@property (nonatomic,retain) id<GEOServerFormattedString> inlineTitle;              //@synthesize inlineTitle=_inlineTitle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> cardTitle;                //@synthesize cardTitle=_cardTitle - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> cardDetails;              //@synthesize cardDetails=_cardDetails - In the implementation block
@property (nonatomic,retain) NSArray * routeIncidents;                              //@synthesize routeIncidents=_routeIncidents - In the implementation block
@property (assign,nonatomic) BOOL alwaysClickable;                                  //@synthesize alwaysClickable=_alwaysClickable - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<GEOServerFormattedString>)cardTitle;
-(id)initWithMessage:(id)arg1 incidents:(id)arg2 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 incidents:(id)arg2 ;
-(id)initWithGeoAdvisoryNotice:(id)arg1 ;
-(id<GEOServerFormattedString>)inlineTitle;
-(void)setCardTitle:(id<GEOServerFormattedString>)arg1 ;
-(NSArray *)routeIncidents;
-(void)setInlineTitle:(id<GEOServerFormattedString>)arg1 ;
-(id<GEOServerFormattedString>)cardDetails;
-(void)setCardDetails:(id<GEOServerFormattedString>)arg1 ;
-(BOOL)alwaysClickable;
-(void)setAlwaysClickable:(BOOL)arg1 ;
-(void)setRouteIncidents:(NSArray *)arg1 ;
@end

