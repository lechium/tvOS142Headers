/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEORouteRestrictionZoneID : NSObject <NSSecureCoding> {

	unsigned long long _identifier;
	unsigned long long _version;
	long long _restrictionType;

}

@property (nonatomic,readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long restrictionType;                  //@synthesize restrictionType=_restrictionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(unsigned long long)version;
-(id)initWithGeoRestrictedZoneId:(id)arg1 ;
-(long long)restrictionType;
@end
