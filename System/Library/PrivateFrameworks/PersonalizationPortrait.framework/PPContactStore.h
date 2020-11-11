/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPRecordMonitoringHelper, PPClientFeedbackHelper, NSString;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPRecordMonitoringHelper* _monitoringHelper;
	PPClientFeedbackHelper* _clientFeedbackHelper;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_recordGenerator;
-(void)_sendChangesToDelegates;
-(BOOL)iterRankedContactsWithQuery:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)contactHandlesForTopics:(id)arg1 error:(id*)arg2 ;
-(id)contactHandlesForSource:(id)arg1 error:(id*)arg2 ;
-(void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadContactNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
@end

