/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNCompoundRequest.h>

@class NSMapTable;

@interface VNUniqueObservationClassCompoundRequest : VNCompoundRequest {

	NSMapTable* _requestToObservationClassMap;

}
-(void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2 ;
-(id)initWithSubrequestsAndUniqueObservationClasses:(id)arg1 ;
-(id)initWithSubrequests:(id)arg1 uniqueObservationClasses:(id)arg2 ;
-(id)initWithOriginalRequests:(id)arg1 requestToObservationClassMap:(id)arg2 ;
@end
