/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:11:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOPDMapsIdentifier, NSData;

@interface GEOMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {

	GEOPDMapsIdentifier* _mapsIdentifier;

}

@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) int resultProviderID; 
@property (getter=hasCoordinate,nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,readonly) NSData * comparableRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)mapItemIdentifiersFromMapsIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOCoarseLocationLatLng)coordinate;
-(unsigned long long)muid;
-(id)initWithMapsIdentifier:(id)arg1 ;
-(int)resultProviderID;
-(BOOL)hasCoordinate;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)isEqualToGEOMapItemIdentifier:(id)arg1 ;
-(id)initWithXPCCoder:(id)arg1 ;
-(void)encodeWithXPCCoder:(id)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(GEOCoarseLocationLatLng)arg2 ;
-(id)initWithBasemapId:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(GEOCoarseLocationLatLng)arg3 ;
-(id)mapsIdentifier;
-(id)shortDebugDescription;
-(NSData *)comparableRepresentation;
@end

