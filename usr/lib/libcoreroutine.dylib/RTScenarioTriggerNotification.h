/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:48 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@class RTScenarioTrigger;

@interface RTScenarioTriggerNotification : RTNotification {

	RTScenarioTrigger* _scenarioTrigger;

}

@property (nonatomic,readonly) RTScenarioTrigger * scenarioTrigger;              //@synthesize scenarioTrigger=_scenarioTrigger - In the implementation block
-(RTScenarioTrigger *)scenarioTrigger;
-(id)initWithScenarioTrigger:(id)arg1 ;
@end

