/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AFSiriRequest.h>

@class STSiriLocation, NSString, NSDate;

@interface STShowMapsSearchResultsRequest : AFSiriRequest {

	STSiriLocation* _searchResults;
	NSString* _extSessionGuid;
	NSDate* _extSessionGuidCreatedTimestamp;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)searchResults;
-(id)createResponse;
-(id)extSessionGuid;
-(id)extSessionGuidCreatedTimestamp;
-(id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3 ;
@end

