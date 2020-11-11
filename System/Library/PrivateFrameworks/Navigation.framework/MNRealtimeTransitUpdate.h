/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/MNRealtimeUpdate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate : MNRealtimeUpdate <NSSecureCoding> {

	GEOTransitRouteUpdate* _transitUpdate;

}

@property (nonatomic,readonly) GEOTransitRouteUpdate * transitUpdate;              //@synthesize transitUpdate=_transitUpdate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)routeID;
-(id)initWithTransitRouteUpdate:(id)arg1 ;
-(GEOTransitRouteUpdate *)transitUpdate;
@end
