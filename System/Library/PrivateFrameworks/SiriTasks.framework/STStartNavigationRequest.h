/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class STSiriLocation, NSDate, NSString;

@interface STStartNavigationRequest : AFSiriRequest {

	STSiriLocation* _startLocation;
	STSiriLocation* _destinationLocation;
	long long _directionsType;
	NSDate* _arrivalDate;
	NSDate* _departureDate;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)startLocation;
-(id)destinationLocation;
-(id)arrivalDate;
-(long long)directionsType;
-(id)departureDate;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithStartLocation:(id)arg1 destinationLocation:(id)arg2 directionsType:(long long)arg3 arrivalDate:(id)arg4 departureDate:(id)arg5 extSessionGuid:(id)arg6 extSessionGuidCreatedTimestamp:(id)arg7 ;
@end

