/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDMediaPropertyRequest, NSError, NSNumber, NSDate;

@interface HMDMediaPropertyResponse : HMFObject {

	HMDMediaPropertyRequest* _request;
	id _value;
	NSError* _error;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;

}

@property (nonatomic,readonly) HMDMediaPropertyRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id value;                                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * stateNumber;                         //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,readonly) NSDate * valueUpdatedTime;                      //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
+(id)responsesFromSerializedResponse:(id)arg1 requests:(id)arg2 home:(id)arg3 ;
+(id)responseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)propertyResponsesFromRequests:(id)arg1 error:(id)arg2 ;
+(id)serializeResponses:(id)arg1 ;
+(id)responseWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
+(id)groupedProfileResponses:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(HMDMediaPropertyRequest *)request;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithRequest:(id)arg1 error:(id)arg2 ;
-(NSDate *)valueUpdatedTime;
-(NSNumber *)stateNumber;
-(id)initWithRequest:(id)arg1 value:(id)arg2 updatedTime:(id)arg3 stateNumber:(id)arg4 ;
@end

