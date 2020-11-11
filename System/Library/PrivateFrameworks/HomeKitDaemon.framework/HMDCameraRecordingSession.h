/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraRecordingSessionVideoAnalyzerDelegate.h>
#import <libobjc.A.dylib/HMDCameraClipUploaderDelegate.h>

@protocol HMDCameraRecordingSessionDelegate, OS_dispatch_queue, HMDCameraRecordingSessionFactory, HMDCameraRecordingSessionVideoAnalyzer;
@class NSDictionary, HMDCameraRecordingSessionTimelineManager, NSUUID, NSObject, HMDCameraProfile, NSString, HMFActivity, HMDCameraSignificantEventServer, HMDCameraRecordingSessionSignificantEventManager, HMDCameraClipUploader, HMDStreamData, HMICameraVideoFragment, HMICameraVideoAnalyzerResult, NSData, NSNumber;

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate> {

	BOOL _noMoreFragmentsAvailable;
	BOOL _active;
	NSDictionary* _homePresenceByPairingIdentity;
	HMDCameraRecordingSessionTimelineManager* _timelineManager;
	unsigned long long _currentFragmentNumber;
	NSUUID* _identifier;
	double _configuredFragmentDuration;
	id<HMDCameraRecordingSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDCameraProfile* _camera;
	NSString* _logIdentifier;
	id<HMDCameraRecordingSessionFactory> _factory;
	id<HMDCameraRecordingSessionVideoAnalyzer> _videoAnalyzer;
	HMFActivity* _sessionActivity;
	HMDCameraSignificantEventServer* _significantEventServer;
	HMDCameraRecordingSessionSignificantEventManager* _significantEventManager;
	unsigned long long _pendingFragmentsCount;
	double _cumulativeFragmentDuration;
	double _currentClipDuration;
	HMDCameraClipUploader* _clipUploader;
	HMDStreamData* _cameraVideoInitFragment;
	HMICameraVideoFragment* _introFragment;
	HMICameraVideoAnalyzerResult* _introAnalyzerResult;
	NSData* _analysisVideoInitData;
	NSNumber* _remainingRecordingExtensionDuration;
	NSString* _fragmentDirectoryPath;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMDCameraProfile * camera;                                                               //@synthesize camera=_camera - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                                           //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) id<HMDCameraRecordingSessionFactory> factory;                                            //@synthesize factory=_factory - In the implementation block
@property (readonly) id<HMDCameraRecordingSessionVideoAnalyzer> videoAnalyzer;                                //@synthesize videoAnalyzer=_videoAnalyzer - In the implementation block
@property (readonly) HMFActivity * sessionActivity;                                                           //@synthesize sessionActivity=_sessionActivity - In the implementation block
@property (readonly) HMDCameraSignificantEventServer * significantEventServer;                                //@synthesize significantEventServer=_significantEventServer - In the implementation block
@property (readonly) HMDCameraRecordingSessionSignificantEventManager * significantEventManager;              //@synthesize significantEventManager=_significantEventManager - In the implementation block
@property (readonly) unsigned long long recordingEventTriggers; 
@property (assign) BOOL noMoreFragmentsAvailable;                                                             //@synthesize noMoreFragmentsAvailable=_noMoreFragmentsAvailable - In the implementation block
@property (getter=isActive) BOOL active;                                                                      //@synthesize active=_active - In the implementation block
@property (assign) unsigned long long currentFragmentNumber;                                                  //@synthesize currentFragmentNumber=_currentFragmentNumber - In the implementation block
@property (assign) unsigned long long pendingFragmentsCount;                                                  //@synthesize pendingFragmentsCount=_pendingFragmentsCount - In the implementation block
@property (assign) double cumulativeFragmentDuration;                                                         //@synthesize cumulativeFragmentDuration=_cumulativeFragmentDuration - In the implementation block
@property (assign) double currentClipDuration;                                                                //@synthesize currentClipDuration=_currentClipDuration - In the implementation block
@property (retain) HMDCameraClipUploader * clipUploader;                                                      //@synthesize clipUploader=_clipUploader - In the implementation block
@property (retain) HMDStreamData * cameraVideoInitFragment;                                                   //@synthesize cameraVideoInitFragment=_cameraVideoInitFragment - In the implementation block
@property (retain) HMICameraVideoFragment * introFragment;                                                    //@synthesize introFragment=_introFragment - In the implementation block
@property (retain) HMICameraVideoAnalyzerResult * introAnalyzerResult;                                        //@synthesize introAnalyzerResult=_introAnalyzerResult - In the implementation block
@property (retain) NSData * analysisVideoInitData;                                                            //@synthesize analysisVideoInitData=_analysisVideoInitData - In the implementation block
@property (copy) NSNumber * remainingRecordingExtensionDuration;                                              //@synthesize remainingRecordingExtensionDuration=_remainingRecordingExtensionDuration - In the implementation block
@property (copy) NSString * fragmentDirectoryPath;                                                            //@synthesize fragmentDirectoryPath=_fragmentDirectoryPath - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) double configuredFragmentDuration;                                                       //@synthesize configuredFragmentDuration=_configuredFragmentDuration - In the implementation block
@property (copy,readonly) NSDictionary * homePresenceByPairingIdentity;                                       //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
@property (readonly) HMDCameraRecordingSessionTimelineManager * timelineManager;                              //@synthesize timelineManager=_timelineManager - In the implementation block
@property (__weak) id<HMDCameraRecordingSessionDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id<HMDCameraRecordingSessionDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSessionDelegate>)arg1 ;
-(NSUUID *)identifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)configure;
-(HMDCameraProfile *)camera;
-(id<HMDCameraRecordingSessionFactory>)factory;
-(NSString *)logIdentifier;
-(id)attributeDescriptions;
-(unsigned long long)recordingEventTriggers;
-(id)activityZones;
-(HMDCameraRecordingSessionTimelineManager *)timelineManager;
-(HMDCameraSignificantEventServer *)significantEventServer;
-(NSDictionary *)homePresenceByPairingIdentity;
-(double)configuredFragmentDuration;
-(unsigned long long)currentFragmentNumber;
-(void)handleFragment:(id)arg1 ;
-(void)handleNoMoreFragmentsAvailable;
-(BOOL)activityZonesIncludedForSignificantEventDetection;
-(id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6 ;
-(id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6 factory:(id)arg7 ;
-(id<HMDCameraRecordingSessionVideoAnalyzer>)videoAnalyzer;
-(HMDStreamData *)cameraVideoInitFragment;
-(BOOL)_isValidFirstSessionFragment:(id)arg1 ;
-(void)setCameraVideoInitFragment:(HMDStreamData *)arg1 ;
-(void)_writeFragment:(id)arg1 ;
-(BOOL)_isValidNonFirstSessionFragment:(id)arg1 ;
-(HMFActivity *)sessionActivity;
-(void)setCurrentFragmentNumber:(unsigned long long)arg1 ;
-(unsigned long long)pendingFragmentsCount;
-(void)setPendingFragmentsCount:(unsigned long long)arg1 ;
-(void)setNoMoreFragmentsAvailable:(BOOL)arg1 ;
-(void)_endSessionWithError:(id)arg1 ;
-(void)_handleFragment:(id)arg1 withResult:(id)arg2 ;
-(void)_handleDidFailAnalysisForFragment:(id)arg1 withError:(id)arg2 ;
-(BOOL)_shouldRecordFragmentWithAnalyzerResult:(id)arg1 sequenceNumber:(unsigned long long)arg2 recordingEventTriggers:(unsigned long long)arg3 fragmentAnalyzedEvent:(id)arg4 ;
-(void)setRemainingRecordingExtensionDuration:(NSNumber *)arg1 ;
-(NSNumber *)remainingRecordingExtensionDuration;
-(double)cumulativeFragmentDuration;
-(double)currentClipDuration;
-(HMICameraVideoFragment *)introFragment;
-(HMICameraVideoAnalyzerResult *)introAnalyzerResult;
-(void)_finishCurrentClipUploader;
-(HMDCameraClipUploader *)clipUploader;
-(void)setClipUploader:(HMDCameraClipUploader *)arg1 ;
-(void)_notifyForAnalyzerResult:(id)arg1 fragment:(id)arg2 dateOfOccurrence:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5 ;
-(void)_uploadFragment:(id)arg1 withDuration:(double)arg2 posterFrames:(id)arg3 clipFinalizedBecauseMaxDurationExceeded:(BOOL)arg4 ;
-(void)setIntroFragment:(HMICameraVideoFragment *)arg1 ;
-(void)setIntroAnalyzerResult:(HMICameraVideoAnalyzerResult *)arg1 ;
-(void)setCumulativeFragmentDuration:(double)arg1 ;
-(BOOL)_shouldEndSession;
-(NSData *)analysisVideoInitData;
-(void)setAnalysisVideoInitData:(NSData *)arg1 ;
-(void)setCurrentClipDuration:(double)arg1 ;
-(HMDCameraRecordingSessionSignificantEventManager *)significantEventManager;
-(void)_notifyForSignificantEvent:(id)arg1 recordingEventTriggers:(unsigned long long)arg2 fragmentNumber:(unsigned long long)arg3 ;
-(void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)arg1 fragmentNumber:(unsigned long long)arg2 ;
-(BOOL)noMoreFragmentsAvailable;
-(NSString *)fragmentDirectoryPath;
-(void)setFragmentDirectoryPath:(NSString *)arg1 ;
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3 ;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3 ;
-(void)uploaderDidFailUpload:(id)arg1 ;
@end

