/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface GEOPowerAssertion : NSObject {

	NSString* _identifier;
	double _timeout;
	unsigned _assertion;
	long long _type;

}
-(id)description;
-(void)dealloc;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 timeout:(double)arg3 ;
@end

