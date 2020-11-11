/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegatePrivate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, TROperationQueue, HMHomeManager, HMAccessoryBrowser, HMDeviceSetupOperation, HMAccessory, HMRoom, HMMediaSystem, NSDictionary, HMHome, NSString, ACAccount, TRSession;

@interface SFDeviceOperationHomeKitSetup : NSObject <HMAccessoryBrowserDelegate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate> {

	BOOL _active;
	BOOL _paused;
	unsigned long long _startTicks;
	int _state;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	TROperationQueue* _trOperationQueue;
	BOOL _configuredTVAudio;
	HMHomeManager* _homeKitHomeManager;
	BOOL _homeKitHomeManagerReady;
	HMAccessoryBrowser* _homeKitBrowser;
	BOOL _homeAppInstallUserDidChoose;
	HMDeviceSetupOperation* _homeKitDeviceSetupOperation;
	HMAccessory* _homeKitAccessory;
	BOOL _reselectHome;
	HMRoom* _homeKitSelectedRoom;
	BOOL _homeKitAddedAccessory;
	BOOL _homeKitAddedAppData;
	BOOL _configuredStereoPair;
	HMMediaSystem* _homeKitMediaSystem;
	BOOL _personalRequestsDone;
	BOOL _userInteractive;
	BOOL _hasHomePod;
	BOOL _hasMultipleUsers;
	BOOL _keyExchangeOnly;
	BOOL _pauseAfterUserInput;
	BOOL _personalRequestsEnabled;
	int _stereoRole;
	NSDictionary* _appDataSelf;
	HMAccessory* _tvAudioInput;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	HMHome* _homeKitSelectedHome;
	NSString* _homeKitSelectedRoomName;
	NSString* _iTunesAccountID;
	ACAccount* _iTunesAccount;
	double _metricNonUserSeconds;
	double _metricUserSeconds;
	/*^block*/id _pauseHandler;
	/*^block*/id _promptForHomeHandler;
	/*^block*/id _promptForRoomHandler;
	/*^block*/id _promptToInstallHomeAppHandler;
	HMAccessory* _stereoCounterpart;
	TRSession* _trSession;
	double _timeoutInSeconds;

}

@property (nonatomic,copy) NSDictionary * appDataSelf;                                //@synthesize appDataSelf=_appDataSelf - In the implementation block
@property (nonatomic,retain) HMAccessory * tvAudioInput;                              //@synthesize tvAudioInput=_tvAudioInput - In the implementation block
@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) BOOL userInteractive;                                    //@synthesize userInteractive=_userInteractive - In the implementation block
@property (nonatomic,readonly) BOOL hasHomePod;                                       //@synthesize hasHomePod=_hasHomePod - In the implementation block
@property (nonatomic,readonly) BOOL hasMultipleUsers;                                 //@synthesize hasMultipleUsers=_hasMultipleUsers - In the implementation block
@property (nonatomic,readonly) HMHome * homeKitSelectedHome;                          //@synthesize homeKitSelectedHome=_homeKitSelectedHome - In the implementation block
@property (nonatomic,copy,readonly) NSString * homeKitSelectedRoomName;               //@synthesize homeKitSelectedRoomName=_homeKitSelectedRoomName - In the implementation block
@property (nonatomic,copy) NSString * iTunesAccountID;                                //@synthesize iTunesAccountID=_iTunesAccountID - In the implementation block
@property (nonatomic,retain) ACAccount * iTunesAccount;                               //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (assign,nonatomic) BOOL keyExchangeOnly;                                    //@synthesize keyExchangeOnly=_keyExchangeOnly - In the implementation block
@property (nonatomic,readonly) double metricNonUserSeconds;                           //@synthesize metricNonUserSeconds=_metricNonUserSeconds - In the implementation block
@property (nonatomic,readonly) double metricUserSeconds;                              //@synthesize metricUserSeconds=_metricUserSeconds - In the implementation block
@property (assign,nonatomic) BOOL pauseAfterUserInput;                                //@synthesize pauseAfterUserInput=_pauseAfterUserInput - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                           //@synthesize pauseHandler=_pauseHandler - In the implementation block
@property (assign,nonatomic) BOOL personalRequestsEnabled;                            //@synthesize personalRequestsEnabled=_personalRequestsEnabled - In the implementation block
@property (nonatomic,copy) id promptForHomeHandler;                                   //@synthesize promptForHomeHandler=_promptForHomeHandler - In the implementation block
@property (nonatomic,copy) id promptForRoomHandler;                                   //@synthesize promptForRoomHandler=_promptForRoomHandler - In the implementation block
@property (nonatomic,copy) id promptToInstallHomeAppHandler;                          //@synthesize promptToInstallHomeAppHandler=_promptToInstallHomeAppHandler - In the implementation block
@property (nonatomic,retain) HMAccessory * stereoCounterpart;                         //@synthesize stereoCounterpart=_stereoCounterpart - In the implementation block
@property (assign,nonatomic) int stereoRole;                                          //@synthesize stereoRole=_stereoRole - In the implementation block
@property (nonatomic,retain) TRSession * trSession;                                   //@synthesize trSession=_trSession - In the implementation block
@property (assign,nonatomic) double timeoutInSeconds;                                 //@synthesize timeoutInSeconds=_timeoutInSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)resume;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(BOOL)userInteractive;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_run;
-(void)_cleanup;
-(void)_completeWithError:(id)arg1 ;
-(ACAccount *)iTunesAccount;
-(void)setITunesAccount:(ACAccount *)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1 ;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(BOOL)_isOwnerOfHome:(id)arg1 ;
-(double)timeoutInSeconds;
-(void)setTimeoutInSeconds:(double)arg1 ;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
-(TRSession *)trSession;
-(void)_restoreHomeApp;
-(void)_startTimeout:(double)arg1 ;
-(void)_runInit;
-(id)_runHomeKitAutoSelectHome:(BOOL)arg1 ;
-(void)_updateHomeStats;
-(void)_runHomeKitSelectRoom;
-(void)_runHomeKitDeviceSetup;
-(void)_runHomeKitAddAccessory;
-(void)_runHomeKitSetupRoom;
-(void)_runHomeKitAssignRoom;
-(void)_runHomeKitAddAppData;
-(BOOL)_runHomeKitConfigureStereoPairAndReturnError:(id*)arg1 ;
-(void)_runHomeKitUpdateAppleTVAudioDestination;
-(void)_runPersonalRequestsStart;
-(void)_runHomeKitAddHome;
-(void)_removeSimilarRoomNames:(id)arg1 home:(id)arg2 ;
-(id)_normalizedString:(id)arg1 ;
-(void)_updateAccount;
-(id)_mediaSystemForAccessory:(id)arg1 ;
-(void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2 ;
-(void)homeAppInstallChoice:(BOOL)arg1 ;
-(void)selectHome:(id)arg1 ;
-(void)reselectHome;
-(void)selectRoom:(id)arg1 ;
-(id)findStereoCounterpartsWithSupportedVersions:(unsigned long long)arg1 ;
-(id)findTVs;
-(NSDictionary *)appDataSelf;
-(void)setAppDataSelf:(NSDictionary *)arg1 ;
-(HMAccessory *)tvAudioInput;
-(void)setTvAudioInput:(HMAccessory *)arg1 ;
-(void)setUserInteractive:(BOOL)arg1 ;
-(BOOL)hasHomePod;
-(BOOL)hasMultipleUsers;
-(HMHome *)homeKitSelectedHome;
-(NSString *)homeKitSelectedRoomName;
-(NSString *)iTunesAccountID;
-(void)setITunesAccountID:(NSString *)arg1 ;
-(BOOL)keyExchangeOnly;
-(void)setKeyExchangeOnly:(BOOL)arg1 ;
-(double)metricNonUserSeconds;
-(double)metricUserSeconds;
-(BOOL)pauseAfterUserInput;
-(void)setPauseAfterUserInput:(BOOL)arg1 ;
-(BOOL)personalRequestsEnabled;
-(void)setPersonalRequestsEnabled:(BOOL)arg1 ;
-(id)promptForHomeHandler;
-(void)setPromptForHomeHandler:(id)arg1 ;
-(id)promptForRoomHandler;
-(void)setPromptForRoomHandler:(id)arg1 ;
-(id)promptToInstallHomeAppHandler;
-(void)setPromptToInstallHomeAppHandler:(id)arg1 ;
-(HMAccessory *)stereoCounterpart;
-(void)setStereoCounterpart:(HMAccessory *)arg1 ;
-(int)stereoRole;
-(void)setStereoRole:(int)arg1 ;
-(void)setTrSession:(TRSession *)arg1 ;
@end

