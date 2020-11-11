/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:45 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Navigation/Navigation-Structs.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOComposedWaypoint, NSDate, _MNTimepointAndTransportType, NSUUID, MNTimepoint, NSString;

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying> {

	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _expirationDate;
	_MNTimepointAndTransportType* _internalTimepoint;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) _MNTimepointAndTransportType * _internalTimepoint;              //@synthesize internalTimepoint=_internalTimepoint - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                      //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (assign,nonatomic) int transportType; 
@property (nonatomic,copy) MNTimepoint * timepoint; 
@property (nonatomic,copy) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)destinationFromArchiveData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(NSUUID *)uuid;
-(BOOL)isExpired;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setTimepoint:(MNTimepoint *)arg1 ;
-(MNTimepoint *)timepoint;
-(GEOComposedWaypoint *)destinationWaypoint;
-(id)jsonDictionary;
-(BOOL)isDuplicateOf:(id)arg1 ;
-(id)archiveData;
-(void)_setTimepoint:(id)arg1 transportType:(int)arg2 ;
-(id)initWithWaypoint:(id)arg1 transportType:(int)arg2 ;
-(_MNTimepointAndTransportType *)_internalTimepoint;
@end

