/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class PPConnectionsParameters, PPConnectionsPasteboardSource, PPConnectionsCalendarSource, PPConnectionsDuetSource, PPConnectionsNamedEntitySource, PPConnectionsFoundInAppsSource, PPConnectionsMetricsTracker, NSObject;

@interface PPConnectionsPredictionStore : NSObject {

	PPConnectionsParameters* _parameters;
	PPConnectionsPasteboardSource* _pasteboardSource;
	PPConnectionsCalendarSource* _calendarSource;
	PPConnectionsDuetSource* _duetSource;
	PPConnectionsNamedEntitySource* _namedEntitySource;
	PPConnectionsFoundInAppsSource* _fiaSource;
	PPConnectionsMetricsTracker* _metricsTracker;
	NSObject*<OS_dispatch_queue> _predictionQueue;

}
+(id)defaultStore;
-(id)init;
-(id)parameters;
-(id)initWithParameters:(id)arg1 pasteboardSource:(id)arg2 calendarSource:(id)arg3 duetSource:(id)arg4 namedEntitySource:(id)arg5 fiaSource:(id)arg6 metricsTracker:(id)arg7 ;
-(void)_asyncFillLocationData:(id)arg1 group:(id)arg2 source:(id)arg3 consumer:(unsigned long long)arg4 criteria:(id)arg5 earliestDate:(id)arg6 latestDate:(id)arg7 limit:(unsigned long long)arg8 explanationSet:(id)arg9 ;
-(id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6 ;
-(id)pasteboardSource;
-(id)duetSource;
-(id)calendarSource;
-(id)cutoffActivityTime;
-(id)cutoffNamedEntityTime;
-(id)cutoffLocationAppLastUseTime;
-(id)cutoffPasteboardItemTime;
-(id)cutoffLinguisticTriggerTime;
-(id)cutoffCalendarEventTime;
@end

