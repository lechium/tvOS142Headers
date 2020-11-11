//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"
#import "_DASActivityMetering-Protocol.h"
#import "_DASActivityOmnibusScheduling-Protocol.h"
#import "_DASPluginDelegate-Protocol.h"

@class NSCountedSet, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults, NSXPCListener, _CDContextualKeyPath, _DASBARScheduler, _DASBatchingQueue, _DASBlueListManager, _DASBudgetManager, _DASClosureManager, _DASControlEngine, _DASENManager, _DASFairScheduleManager, _DASNetworkEvaluationMonitor, _DASRateLimiter, _DASSleepWakeMonitor, _DASTimer, _DASUserRequestedBackupTaskManager;
@protocol OS_dispatch_queue, OS_dispatch_source, _CDLocalContext, _DASDataStore;

@interface _DASDaemon : NSObject <NSXPCListenerDelegate, _DASPluginDelegate, _DASActivityOmnibusScheduling, _DASActivityMetering>
{
    struct os_unfair_lock_s _groupLock;	// 8 = 0x8
    struct os_unfair_lock_s _constraintsLock;	// 12 = 0xc
    NSMutableArray *_clients;	// 16 = 0x10
    struct os_unfair_recursive_lock_s _activityStateLock;	// 24 = 0x18
    NSMutableSet *_pendingTasks;	// 32 = 0x20
    NSMutableSet *_prerunningTasks;	// 40 = 0x28
    NSMutableSet *_runningTasks;	// 48 = 0x30
    NSDictionary *_triggerToPolicyMap;	// 56 = 0x38
    NSMutableDictionary *_triggerToActivitiesMap;	// 64 = 0x40
    NSMutableDictionary *_activityToIncompatibleActivitiesMap;	// 72 = 0x48
    NSMutableDictionary *_groups;	// 80 = 0x50
    NSMutableDictionary *_groupToPendingTasks;	// 88 = 0x58
    NSMutableDictionary *_groupToRunningTasks;	// 96 = 0x60
    NSMutableDictionary *_groupToPrerunningTasks;	// 104 = 0x68
    struct os_unfair_recursive_lock_s _applicationLaunchRequestsLock;	// 112 = 0x70
    NSMutableDictionary *_applicationLaunchRequests;	// 120 = 0x78
    NSMutableDictionary *_extensionLaunchRequests;	// 128 = 0x80
    _DASUserRequestedBackupTaskManager *_backupTaskManager;	// 136 = 0x88
    id <_CDLocalContext> _context;	// 144 = 0x90
    NSXPCListener *_listener;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_timerSchedulingQueue;	// 160 = 0xa0
    _DASTimer *_schedulingTimer;	// 168 = 0xa8
    NSDate *_timerEarliestFireDate;	// 176 = 0xb0
    NSDate *_timerLatestFireDate;	// 184 = 0xb8
    _DASNetworkEvaluationMonitor *_networkEvaluationMonitor;	// 192 = 0xc0
    _DASSleepWakeMonitor *_sleepWakeMonitor;	// 200 = 0xc8
    id <_DASDataStore> _store;	// 208 = 0xd0
    NSObject<OS_dispatch_source> *_optimalScoringTimer;	// 216 = 0xd8
    NSObject<OS_dispatch_source> *_databaseMaintenanceTimer;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_evaluationQueue;	// 232 = 0xe8
    _DASBatchingQueue *_triggerBatchingQueue;	// 240 = 0xf0
    _DASBatchingQueue *_activityCompletedBatchingQueue;	// 248 = 0xf8
    _DASENManager *_enManager;	// 256 = 0x100
    _DASFairScheduleManager *_fairScheduleManager;	// 264 = 0x108
    _DASRateLimiter *_rateLimiter;	// 272 = 0x110
    _DASControlEngine *_controlEnginge;	// 280 = 0x118
    NSMutableDictionary *_recentlyLaunchedApps;	// 288 = 0x120
    NSCountedSet *_launchesPerApp;	// 296 = 0x128
    NSObject<OS_dispatch_source> *_launchTimeResetTimer;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_launchQueue;	// 312 = 0x138
    NSObject<OS_dispatch_queue> *_profilerQueue;	// 320 = 0x140
    _DASBARScheduler *_barScheduler;	// 328 = 0x148
    _DASBlueListManager *_blueListManager;	// 336 = 0x150
    NSObject<OS_dispatch_queue> *_activityLaunchQueue;	// 344 = 0x158
    _DASClosureManager *_closureManager;	// 352 = 0x160
    _DASBudgetManager *_budgetManager;	// 360 = 0x168
    unsigned long long _photosIsBlocked;	// 368 = 0x170
    _CDContextualKeyPath *_utilityConstraintsKP;	// 376 = 0x178
    _CDContextualKeyPath *_maintenanceConstraintsKP;	// 384 = 0x180
    unsigned long long _utilityConstraints;	// 392 = 0x188
    unsigned long long _maintenanceConstraints;	// 400 = 0x190
    NSDictionary *_testModeParameters;	// 408 = 0x198
    NSDictionary *_pausedParameters;	// 416 = 0x1a0
    NSUserDefaults *_testingDefaults;	// 424 = 0x1a8
    NSMutableDictionary *_activitiesWaitingForBGTaskClients;	// 432 = 0x1b0
    NSMutableDictionary *_connectedBGTaskClients;	// 440 = 0x1b8
}

+ (id)sharedInstance;	// IMP=0x0000000100043e54
+ (id)daemon;	// IMP=0x0000000100042f2c
- (void).cxx_destruct;	// IMP=0x0000000100061ce0
@property(retain, nonatomic) NSMutableDictionary *connectedBGTaskClients; // @synthesize connectedBGTaskClients=_connectedBGTaskClients;
@property(retain, nonatomic) NSMutableDictionary *activitiesWaitingForBGTaskClients; // @synthesize activitiesWaitingForBGTaskClients=_activitiesWaitingForBGTaskClients;
@property(retain, nonatomic) NSUserDefaults *testingDefaults; // @synthesize testingDefaults=_testingDefaults;
@property(retain) NSDictionary *pausedParameters; // @synthesize pausedParameters=_pausedParameters;
@property(retain) NSDictionary *testModeParameters; // @synthesize testModeParameters=_testModeParameters;
@property(nonatomic) unsigned long long maintenanceConstraints; // @synthesize maintenanceConstraints=_maintenanceConstraints;
@property(nonatomic) unsigned long long utilityConstraints; // @synthesize utilityConstraints=_utilityConstraints;
@property(retain, nonatomic) _CDContextualKeyPath *maintenanceConstraintsKP; // @synthesize maintenanceConstraintsKP=_maintenanceConstraintsKP;
@property(retain, nonatomic) _CDContextualKeyPath *utilityConstraintsKP; // @synthesize utilityConstraintsKP=_utilityConstraintsKP;
@property(nonatomic) struct os_unfair_lock_s constraintsLock; // @synthesize constraintsLock=_constraintsLock;
@property(nonatomic) unsigned long long photosIsBlocked; // @synthesize photosIsBlocked=_photosIsBlocked;
@property(retain, nonatomic) _DASBudgetManager *budgetManager; // @synthesize budgetManager=_budgetManager;
@property(retain, nonatomic) _DASClosureManager *closureManager; // @synthesize closureManager=_closureManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *activityLaunchQueue; // @synthesize activityLaunchQueue=_activityLaunchQueue;
@property(retain, nonatomic) _DASBlueListManager *blueListManager; // @synthesize blueListManager=_blueListManager;
@property(retain, nonatomic) _DASBARScheduler *barScheduler; // @synthesize barScheduler=_barScheduler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *profilerQueue; // @synthesize profilerQueue=_profilerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue; // @synthesize launchQueue=_launchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *launchTimeResetTimer; // @synthesize launchTimeResetTimer=_launchTimeResetTimer;
@property(retain, nonatomic) NSCountedSet *launchesPerApp; // @synthesize launchesPerApp=_launchesPerApp;
@property(retain, nonatomic) NSMutableDictionary *recentlyLaunchedApps; // @synthesize recentlyLaunchedApps=_recentlyLaunchedApps;
@property(retain, nonatomic) _DASControlEngine *controlEnginge; // @synthesize controlEnginge=_controlEnginge;
@property(retain, nonatomic) _DASRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(retain, nonatomic) _DASFairScheduleManager *fairScheduleManager; // @synthesize fairScheduleManager=_fairScheduleManager;
@property(retain, nonatomic) _DASENManager *enManager; // @synthesize enManager=_enManager;
@property(retain, nonatomic) _DASBatchingQueue *activityCompletedBatchingQueue; // @synthesize activityCompletedBatchingQueue=_activityCompletedBatchingQueue;
@property(retain, nonatomic) _DASBatchingQueue *triggerBatchingQueue; // @synthesize triggerBatchingQueue=_triggerBatchingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *evaluationQueue; // @synthesize evaluationQueue=_evaluationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *databaseMaintenanceTimer; // @synthesize databaseMaintenanceTimer=_databaseMaintenanceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *optimalScoringTimer; // @synthesize optimalScoringTimer=_optimalScoringTimer;
@property(retain, nonatomic) id <_DASDataStore> store; // @synthesize store=_store;
@property(retain, nonatomic) _DASSleepWakeMonitor *sleepWakeMonitor; // @synthesize sleepWakeMonitor=_sleepWakeMonitor;
@property(retain, nonatomic) _DASNetworkEvaluationMonitor *networkEvaluationMonitor; // @synthesize networkEvaluationMonitor=_networkEvaluationMonitor;
@property(retain, nonatomic) NSDate *timerLatestFireDate; // @synthesize timerLatestFireDate=_timerLatestFireDate;
@property(retain, nonatomic) NSDate *timerEarliestFireDate; // @synthesize timerEarliestFireDate=_timerEarliestFireDate;
@property(retain, nonatomic) _DASTimer *schedulingTimer; // @synthesize schedulingTimer=_schedulingTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerSchedulingQueue; // @synthesize timerSchedulingQueue=_timerSchedulingQueue;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) id <_CDLocalContext> context; // @synthesize context=_context;
@property(retain, nonatomic) _DASUserRequestedBackupTaskManager *backupTaskManager; // @synthesize backupTaskManager=_backupTaskManager;
@property(retain, nonatomic) NSMutableDictionary *extensionLaunchRequests; // @synthesize extensionLaunchRequests=_extensionLaunchRequests;
@property(retain, nonatomic) NSMutableDictionary *applicationLaunchRequests; // @synthesize applicationLaunchRequests=_applicationLaunchRequests;
@property(nonatomic) struct os_unfair_recursive_lock_s applicationLaunchRequestsLock; // @synthesize applicationLaunchRequestsLock=_applicationLaunchRequestsLock;
@property(retain, nonatomic) NSMutableDictionary *groupToPrerunningTasks; // @synthesize groupToPrerunningTasks=_groupToPrerunningTasks;
@property(retain, nonatomic) NSMutableDictionary *groupToRunningTasks; // @synthesize groupToRunningTasks=_groupToRunningTasks;
@property(retain, nonatomic) NSMutableDictionary *groupToPendingTasks; // @synthesize groupToPendingTasks=_groupToPendingTasks;
@property(retain, nonatomic) NSMutableDictionary *groups; // @synthesize groups=_groups;
@property(nonatomic) struct os_unfair_lock_s groupLock; // @synthesize groupLock=_groupLock;
@property(retain, nonatomic) NSMutableDictionary *activityToIncompatibleActivitiesMap; // @synthesize activityToIncompatibleActivitiesMap=_activityToIncompatibleActivitiesMap;
@property(retain, nonatomic) NSMutableDictionary *triggerToActivitiesMap; // @synthesize triggerToActivitiesMap=_triggerToActivitiesMap;
@property(retain, nonatomic) NSDictionary *triggerToPolicyMap; // @synthesize triggerToPolicyMap=_triggerToPolicyMap;
@property(retain, nonatomic) NSMutableSet *runningTasks; // @synthesize runningTasks=_runningTasks;
@property(retain, nonatomic) NSMutableSet *prerunningTasks; // @synthesize prerunningTasks=_prerunningTasks;
@property(retain, nonatomic) NSMutableSet *pendingTasks; // @synthesize pendingTasks=_pendingTasks;
@property(nonatomic) struct os_unfair_recursive_lock_s activityStateLock; // @synthesize activityStateLock=_activityStateLock;
@property(retain, nonatomic) NSMutableArray *clients; // @synthesize clients=_clients;
- (void)extensionActivity:(id)arg1 finishedWithStatus:(unsigned char)arg2;	// IMP=0x0000000100061700
- (void)activityStoppedWithParameters:(id)arg1;	// IMP=0x00000001000613f8
- (void)activityStartedWithParameters:(id)arg1;	// IMP=0x00000001000613e8
- (id)tasksNoLongerEligible;	// IMP=0x0000000100061364
- (id)tasksNoLongerEligibleFromTasks:(id)arg1;	// IMP=0x0000000100060cbc
- (id)candidateGroupActivityForPreemption:(id)arg1;	// IMP=0x0000000100060a24
- (id)candidateLongRunningActivityForPreemption:(id)arg1;	// IMP=0x000000010006076c
- (_Bool)shouldPreemptTask:(id)arg1 withStartDate:(id)arg2 atDate:(id)arg3;	// IMP=0x0000000100060560
- (_Bool)activity:(id)arg1 withStartDate:(id)arg2 runningForTooLongAtDate:(id)arg3;	// IMP=0x00000001000603a0
- (void)evaluateScoreAndRunAllActivitiesForReason:(id)arg1;	// IMP=0x00000001000601b8
- (void)unprotectedEvaluateScoreAndRunActivities:(id)arg1;	// IMP=0x000000010005fb54
- (void)evaluateScoreAndRunActivities:(id)arg1;	// IMP=0x000000010005fa88
- (void)chooseActivitiesToRunFromCandidateActivities:(id)arg1 toBeRunActivities:(id)arg2 toLaunchApplications:(id)arg3 toLaunchExtension:(id)arg4;	// IMP=0x000000010005ed2c
- (void)determineNextTimerFireDateAndSchedule;	// IMP=0x000000010005e688
- (void)schedulingTimerFired;	// IMP=0x000000010005e56c
- (void)periodicCalculationForOptimal;	// IMP=0x000000010005e358
- (void)removeActivityFromTriggerMap:(id)arg1;	// IMP=0x000000010005e270
- (void)associateActivity:(id)arg1 withTriggerKeys:(id)arg2;	// IMP=0x000000010005e03c
- (void)addTriggersToActivity:(id)arg1;	// IMP=0x000000010005db80
- (void)registerTriggersWithContextStoreForPolicies:(id)arg1;	// IMP=0x000000010005d7fc
- (void)registerWithContextStoreForId:(id)arg1 contextualPredicate:(id)arg2 dismissalCondition:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(_Bool)arg5;	// IMP=0x000000010005d2ac
- (void)handleCompletedActivities:(id)arg1;	// IMP=0x000000010005cf18
- (void)handleTriggers:(id)arg1;	// IMP=0x000000010005c214
- (void)registerForNetworkPathEvaluation;	// IMP=0x000000010005c08c
- (void)pauseWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005bf1c
- (void)enterTestModeWithParameters:(id)arg1;	// IMP=0x000000010005be34
- (void)blockingPoliciesWithParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b8d4
- (void)clasStatusWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b850
- (void)policiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b68c
- (void)setCapacity:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010005b67c
- (void)setBalance:(double)arg1 forBudgetWithName:(id)arg2;	// IMP=0x000000010005b66c
- (void)remainingBalanceForBudgetWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010005b5e0
- (void)allBudgetsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b570
- (void)statisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005b350
- (id)widgetRefreshStatisticsWithStore:(id)arg1;	// IMP=0x000000010005a98c
- (id)widgetViewsStatisticsWithStore:(id)arg1;	// IMP=0x000000010005a1d8
- (id)earlyToday;	// IMP=0x000000010005a104
- (void)currentPredictionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005a090
- (void)forceRunActivities:(id)arg1;	// IMP=0x0000000100059e1c
- (id)activityRunStatistics;	// IMP=0x0000000100059e14
- (void)activityRunStatisticsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059e00
- (void)scoresForActivityWithName:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100059dec
- (void)runningGroupActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059c04
- (void)runningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000598ac
- (void)delayedRunningActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100059704
- (void)submittedActivitiesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000010005948c
- (void)completeTaskRequest:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000010005944c
- (void)completeTaskRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100059448
- (void)willExpireBGTaskActivities:(id)arg1;	// IMP=0x0000000100059444
- (void)handleLaunchFromDaemonForActivities:(id)arg1;	// IMP=0x0000000100059440
- (void)establishConnectionFromClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058f38
- (void)establishConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058f34
- (void)scheduleConnectionTimeoutForPid:(int)arg1;	// IMP=0x0000000100058a1c
- (void)getPendingTaskRequestsForApplication:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000587f8
- (void)getPendingTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000587f4
- (void)cancelTaskRequestWithIdentifier:(id)arg1 forApplication:(id)arg2;	// IMP=0x000000010005855c
- (void)cancelTaskRequestWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058558
- (void)cancelAllTaskRequestsForApplication:(id)arg1;	// IMP=0x000000010005839c
- (void)cancelAllTaskRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100058398
- (_Bool)canSubmitValidatedTaskRequest:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000100057a18
- (void)submitTaskRequest:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100057a14
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x0000000100057a04
- (void)submitActivity:(id)arg1 inGroup:(id)arg2;	// IMP=0x0000000100057824
- (void)submitActivity:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x00000001000577e4
- (void)createActivityGroup:(id)arg1;	// IMP=0x00000001000576b8
- (void)addPendingActivitiesToGroups:(id)arg1;	// IMP=0x0000000100057554
- (void)addPendingActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100057474
- (void)addRunningActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100057264
- (void)addPrerunningActivity:(id)arg1 toGroupWithName:(id)arg2;	// IMP=0x0000000100056e74
- (void)updateActivity:(id)arg1 withParameters:(id)arg2;	// IMP=0x0000000100056c20
- (void)activityCanceled:(id)arg1;	// IMP=0x000000010005694c
- (void)activityCompleted:(id)arg1;	// IMP=0x0000000100056748
- (void)activityStarted:(id)arg1;	// IMP=0x0000000100056330
- (void)handleNoLongerRunningActivity:(id)arg1;	// IMP=0x0000000100055948
- (void)handleRescindedActivity:(id)arg1;	// IMP=0x00000001000557f8
- (void)handleRunningActivities:(id)arg1;	// IMP=0x0000000100055698
- (void)submitActivities:(id)arg1;	// IMP=0x0000000100054a10
- (void)startedActivities:(id)arg1;	// IMP=0x000000010005477c
- (void)submitActivity:(id)arg1;	// IMP=0x0000000100053464
- (void)advanceAppLaunchDateIfNecessaryForActivity:(id)arg1;	// IMP=0x0000000100052f2c
- (_Bool)shouldEvaluateTask:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100052db4
- (void)handleEligibleActivities:(CDUnknownBlockType)arg1;	// IMP=0x0000000100052db0
- (void)immediatelyBeginWorkForActivity:(id)arg1;	// IMP=0x0000000100052d50
- (void)beginWorkForActivity:(id)arg1;	// IMP=0x0000000100052c74
- (void)moveActivityToRunning:(id)arg1;	// IMP=0x0000000100052aec
- (void)clearActivityFromPrerunning:(id)arg1;	// IMP=0x0000000100052828
- (void)moveActivityToPrerunning:(id)arg1;	// IMP=0x00000001000526ec
- (void)prepareActivityForStart:(id)arg1 atTime:(id)arg2;	// IMP=0x00000001000526ac
- (_Bool)shouldRunActivityNow:(id)arg1;	// IMP=0x0000000100052618
- (_Bool)shouldRunActivityNow:(id)arg1 withOtherActivities:(id)arg2;	// IMP=0x0000000100051b4c
- (_Bool)activityIsTimewiseEligible:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000100051a68
- (_Bool)testModeConstraintsRequireOverridingDecisionWithScores:(id)arg1 ignoredPolicies:(id)arg2 honoredPolicies:(id)arg3;	// IMP=0x000000010005175c
- (_Bool)testModeConstraintsApplyToActivity:(id)arg1;	// IMP=0x0000000100051260
- (_Bool)pausedParametersApplyToActivity:(id)arg1;	// IMP=0x0000000100050aa4
- (void)reportActivity:(id)arg1 isBlockedWithDecision:(long long)arg2;	// IMP=0x0000000100050364
- (void)updateiCPLTasksBlocked:(unsigned long long)arg1;	// IMP=0x000000010005008c
- (void)removeConstraint:(unsigned long long)arg1 forSchedulingPriority:(unsigned long long)arg2;	// IMP=0x000000010004ffa8
- (void)addConstraint:(unsigned long long)arg1 forSchedulingPriority:(unsigned long long)arg2;	// IMP=0x000000010004fee4
- (id)getActivityRunningWithName:(id)arg1;	// IMP=0x000000010004fd48
- (id)getActivityWithName:(id)arg1;	// IMP=0x000000010004fccc
- (id)getActivityWithUUID:(id)arg1;	// IMP=0x000000010004fc50
- (id)activityMatchingPredicate:(id)arg1;	// IMP=0x000000010004fae4
- (void)delayedStartActivities:(id)arg1;	// IMP=0x000000010004fae0
- (void)runActivitiesWithDelayedStart:(id)arg1;	// IMP=0x000000010004fadc
- (void)activity:(id)arg1 runWithoutHonoringPolicies:(id)arg2;	// IMP=0x000000010004f9c0
- (void)activity:(id)arg1 blockedOnPolicies:(id)arg2;	// IMP=0x000000010004f8a4
- (void)cancelActivities:(id)arg1;	// IMP=0x000000010004f684
- (void)suspendActivities:(id)arg1;	// IMP=0x000000010004e8e0
- (void)suspendActivity:(id)arg1;	// IMP=0x000000010004e88c
- (void)deferActivities:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e5b4
- (void)warnBGTaskClientsForActivitiesAboutToExpire:(id)arg1;	// IMP=0x000000010004e3fc
- (void)suspendPlugin:(id)arg1;	// IMP=0x000000010004e138
- (void)runApplicationLaunchActivities:(id)arg1;	// IMP=0x000000010004c930
- (void)runExtensionLaunchActivities:(id)arg1;	// IMP=0x000000010004c340
- (id)assertionForActivity:(id)arg1 pid:(int)arg2;	// IMP=0x000000010004bee4
- (void)launchApplication:(id)arg1 applicationURL:(id)arg2 additionalOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010004ba90
- (void)runLaunchTasks:(id)arg1 forApplication:(id)arg2 forApplicationURL:(id)arg3 onLaunch:(CDUnknownBlockType)arg4 onCompletion:(CDUnknownBlockType)arg5 onFailure:(CDUnknownBlockType)arg6;	// IMP=0x0000000100049660
- (void)clearRecentlyLaunchedApps;	// IMP=0x00000001000491dc
- (void)runActivitiesAndRemoveUnknown:(id)arg1;	// IMP=0x0000000100048c34
- (void)runActivities:(id)arg1;	// IMP=0x000000010004857c
- (void)runLocalActivity:(id)arg1;	// IMP=0x0000000100048410
- (id)clientForActivity:(id)arg1;	// IMP=0x00000001000481f4
- (void)allClientsDo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100048090
- (void)removeClient:(id)arg1;	// IMP=0x0000000100047ef4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100047cc4
@property(readonly, copy) NSString *description;
- (id)allTimewiseEligibleNetworkTasksAllowingCell:(_Bool)arg1;	// IMP=0x00000001000479e8
- (id)allPendingSyncOnBackupTasks;	// IMP=0x0000000100047870
- (id)allPendingBackgroundTasks;	// IMP=0x0000000100047670
- (id)allPendingPushLaunchTasks;	// IMP=0x0000000100047434
- (id)allPendingRestartTasks;	// IMP=0x000000010004736c
- (id)allPendingTasks;	// IMP=0x0000000100047318
- (unsigned long long)submittedTaskCount;	// IMP=0x00000001000472cc
- (void)start;	// IMP=0x00000001000472bc
- (unsigned long long)requestCountForApplication:(id)arg1;	// IMP=0x000000010004722c
- (void)removeLaunchRequest:(id)arg1;	// IMP=0x0000000100046ff0
- (_Bool)addLaunchRequest:(id)arg1;	// IMP=0x0000000100046a20
- (void)delayLaunchesOfType:(id)arg1 forApps:(id)arg2;	// IMP=0x0000000100046614
- (void)cancelAllBackgroundTasks;	// IMP=0x00000001000463dc
- (void)cancelContactTracingTasksForApps:(id)arg1;	// IMP=0x0000000100046174
- (void)cancelBackgroundTasksForApps:(id)arg1;	// IMP=0x00000001000460c8
- (void)cancelAppRefreshTasksForApps:(id)arg1;	// IMP=0x0000000100046034
- (void)cancelPushLaunchTasksForApps:(id)arg1;	// IMP=0x0000000100045fa0
- (void)cancelLaunchesOfTypes:(id)arg1 forApps:(id)arg2;	// IMP=0x0000000100045cd4
- (long long)additionalCapacityForActivity:(id)arg1 inGroupWithName:(id)arg2 shouldTryToSuspend:(_Bool)arg3;	// IMP=0x0000000100045904
- (long long)currentLoadFromActivities:(id)arg1 inGroupWithName:(id)arg2;	// IMP=0x000000010004556c
- (long long)capacityFromGroupMax:(long long)arg1 forPriority:(unsigned long long)arg2;	// IMP=0x0000000100045534
- (void)loadTestingDefaults;	// IMP=0x0000000100045440
- (void)loadStateWhenAvailable;	// IMP=0x0000000100044e64
- (void)loadState;	// IMP=0x0000000100044b40
- (void)removeDuplicateLaunchTasks:(id)arg1;	// IMP=0x0000000100044650
- (void)setupDatabaseMaintenance;	// IMP=0x0000000100044548
- (void)scheduleTimerOnBehalfOf:(id)arg1 between:(double)arg2 and:(double)arg3 waking:(_Bool)arg4;	// IMP=0x0000000100044174
- (void)scheduleTimerForActivity:(id)arg1;	// IMP=0x0000000100044020
- (void)setupTimers;	// IMP=0x0000000100043f28
- (void)solicitActivityResubmission;	// IMP=0x0000000100043e94
- (void)enforceRateLimiting;	// IMP=0x0000000100043e60
- (id)initAsAnonymous:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x0000000100042fe0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

