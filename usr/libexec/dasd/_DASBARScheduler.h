//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "SBSApplicationUserQuitMonitorDelegate-Protocol.h"

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUserDefaults, SBSApplicationUserQuitMonitor, _DASActivityGroup, _DASDaemon;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log, _DKKnowledgeQuerying;

@interface _DASBARScheduler : NSObject <LSApplicationWorkspaceObserverProtocol, SBSApplicationUserQuitMonitorDelegate>
{
    _Bool _barEnabled;	// 8 = 0x8
    _Bool _barWiFiOnly;	// 9 = 0x9
    int _barSettingsChangedToken;	// 12 = 0xc
    SBSApplicationUserQuitMonitor *_quitMonitor;	// 16 = 0x10
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_schedulingQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_appUpdateTimer;	// 48 = 0x30
    _DASDaemon *_scheduler;	// 56 = 0x38
    _DASActivityGroup *_barGroup;	// 64 = 0x40
    NSUserDefaults *_barPreferences;	// 72 = 0x48
    NSUserDefaults *_delayPreferences;	// 80 = 0x50
    NSUserDefaults *_lastLaunchPreferences;	// 88 = 0x58
    NSUserDefaults *_killedAppPreferences;	// 96 = 0x60
    NSMutableSet *_fetchEnabledApps;	// 104 = 0x68
    NSMutableSet *_pushEnabledApps;	// 112 = 0x70
    NSMutableSet *_newsstandApps;	// 120 = 0x78
    NSMutableSet *_blacklistedApps;	// 128 = 0x80
    NSMutableSet *_killedApps;	// 136 = 0x88
    NSSet *_foregroundApps;	// 144 = 0x90
    NSMutableDictionary *_appToMinimumLaunchDelay;	// 152 = 0x98
    NSMutableDictionary *_appsToPendingTasks;	// 160 = 0xa0
    NSObject<OS_os_log> *_log;	// 168 = 0xa8
    BKSApplicationStateMonitor *_monitor;	// 176 = 0xb0
}

+ (id)barSchedulerWithScheduler:(id)arg1;	// IMP=0x0000000100038078
- (void).cxx_destruct;	// IMP=0x000000010003e208
@property(retain, nonatomic) BKSApplicationStateMonitor *monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *appsToPendingTasks; // @synthesize appsToPendingTasks=_appsToPendingTasks;
@property(retain, nonatomic) NSMutableDictionary *appToMinimumLaunchDelay; // @synthesize appToMinimumLaunchDelay=_appToMinimumLaunchDelay;
@property(retain, nonatomic) NSSet *foregroundApps; // @synthesize foregroundApps=_foregroundApps;
@property(retain, nonatomic) NSMutableSet *killedApps; // @synthesize killedApps=_killedApps;
@property(retain, nonatomic) NSMutableSet *blacklistedApps; // @synthesize blacklistedApps=_blacklistedApps;
@property(retain, nonatomic) NSMutableSet *newsstandApps; // @synthesize newsstandApps=_newsstandApps;
@property(retain, nonatomic) NSMutableSet *pushEnabledApps; // @synthesize pushEnabledApps=_pushEnabledApps;
@property(retain, nonatomic) NSMutableSet *fetchEnabledApps; // @synthesize fetchEnabledApps=_fetchEnabledApps;
@property(retain, nonatomic) NSUserDefaults *killedAppPreferences; // @synthesize killedAppPreferences=_killedAppPreferences;
@property(retain, nonatomic) NSUserDefaults *lastLaunchPreferences; // @synthesize lastLaunchPreferences=_lastLaunchPreferences;
@property(retain, nonatomic) NSUserDefaults *delayPreferences; // @synthesize delayPreferences=_delayPreferences;
@property(retain, nonatomic) NSUserDefaults *barPreferences; // @synthesize barPreferences=_barPreferences;
@property(retain, nonatomic) _DASActivityGroup *barGroup; // @synthesize barGroup=_barGroup;
@property(retain, nonatomic) _DASDaemon *scheduler; // @synthesize scheduler=_scheduler;
@property(nonatomic) int barSettingsChangedToken; // @synthesize barSettingsChangedToken=_barSettingsChangedToken;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *appUpdateTimer; // @synthesize appUpdateTimer=_appUpdateTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *schedulingQueue; // @synthesize schedulingQueue=_schedulingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) SBSApplicationUserQuitMonitor *quitMonitor; // @synthesize quitMonitor=_quitMonitor;
@property(nonatomic) _Bool barWiFiOnly; // @synthesize barWiFiOnly=_barWiFiOnly;
@property(nonatomic) _Bool barEnabled; // @synthesize barEnabled=_barEnabled;
- (_Bool)backgroundLaunchAllowedForBGTaskActivity:(id)arg1;	// IMP=0x000000010003dc68
- (_Bool)appUsesBackgroundTaskScheduler:(id)arg1;	// IMP=0x000000010003dc14
- (void)setMinimumBackgroundFetchInterval:(double)arg1 forApp:(id)arg2;	// IMP=0x000000010003d7f8
- (double)minimumDelayBetweenLaunchesForApp:(id)arg1;	// IMP=0x000000010003d6d4
- (void)queueReloadRequestedDelays;	// IMP=0x000000010003d51c
- (void)reloadRequestedDelays;	// IMP=0x000000010003d4b4
- (void)quitMonitor:(id)arg1 userClosedLastSceneOfApplicationWithBundleID:(id)arg2;	// IMP=0x000000010003d3ec
- (_Bool)isNewsstandApp:(id)arg1;	// IMP=0x000000010003d2d4
- (_Bool)pushLaunchAllowedForApp:(id)arg1 immediately:(_Bool *)arg2;	// IMP=0x000000010003cf6c
- (_Bool)applicationStateRequiresImmediateDelivery:(id)arg1;	// IMP=0x000000010003ce30
- (_Bool)backgroundLaunchAllowedForApp:(id)arg1;	// IMP=0x000000010003cd0c
- (void)handleAppsForegrounded:(id)arg1;	// IMP=0x000000010003c71c
- (void)queueUpdateLastLaunchTimesToDate:(id)arg1 forApps:(id)arg2;	// IMP=0x000000010003c4a0
- (void)start;	// IMP=0x000000010003c364
- (void)recordBARState;	// IMP=0x000000010003c30c
- (void)startIfBAREnabled;	// IMP=0x000000010003c2a4
- (void)queueStartIfBAREnabled;	// IMP=0x000000010003bee8
- (void)createBARApplicationGroup;	// IMP=0x000000010003be88
- (void)queueScheduleActivityForApp:(id)arg1 startingAfter:(id)arg2;	// IMP=0x000000010003b9a0
- (void)queueScheduleActivitiesForEligibleApps:(id)arg1 withDelay:(_Bool)arg2;	// IMP=0x000000010003b760
- (void)queueCancelActivitiesForApps:(id)arg1;	// IMP=0x000000010003b5f4
- (void)cancelActivitiesForAllApps;	// IMP=0x000000010003b58c
- (void)queueCancelActivitiesForAllApps;	// IMP=0x000000010003b3a8
- (id)queuePendingRefreshes;	// IMP=0x000000010003b330
- (void)queue_cancelBackgroundTasksForUnusedApps;	// IMP=0x000000010003b10c
- (id)appsLaunchedInLastDays:(int)arg1;	// IMP=0x000000010003aba0
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000010003a774
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000010003a540
- (void)queueHandleAppsUninstalled:(id)arg1;	// IMP=0x000000010003a364
- (void)queueHandleAppsRevived:(id)arg1;	// IMP=0x000000010003a104
- (void)queueHandleAppKilled:(id)arg1;	// IMP=0x0000000100039f48
- (void)registerForAppKilledNotifications;	// IMP=0x0000000100039d28
- (void)registerForBARNotifications;	// IMP=0x0000000100039a90
- (void)queueHandleBARSettingsChangedNotification:(_Bool)arg1;	// IMP=0x00000001000392dc
- (_Bool)isBAREnabledOnWiFiOnly;	// IMP=0x0000000100039270
- (id)topNAppsUserHasLaunchedInSet:(id)arg1;	// IMP=0x0000000100038a50
- (id)queueAppsWithDelaySpecifiedInSet:(id)arg1;	// IMP=0x0000000100038864
- (void)determineAppsWithBackgroundRunningModes;	// IMP=0x00000001000383f8
- (id)queueObtainAppsEligibleForBackgroundFetch;	// IMP=0x0000000100038330
- (id)queueAppsEligibleForBackgroundFetchInSet:(id)arg1;	// IMP=0x000000010003811c
- (void)cleanupPreferences;	// IMP=0x0000000100038118
- (void)dealloc;	// IMP=0x00000001000380cc
- (id)initWithScheduler:(id)arg1;	// IMP=0x0000000100037ccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

