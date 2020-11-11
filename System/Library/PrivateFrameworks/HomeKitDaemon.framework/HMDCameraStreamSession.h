/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCameraStreamSessionID, HMDStreamingManager, HMDStreamingCapabilities, HMDCameraProtocolParameters, HMDCameraVideoTierParameters, NSString;

@interface HMDCameraStreamSession : HMFObject <HMFLogging> {

	HMDCameraStreamSessionID* _sessionID;
	HMDStreamingManager* _streamingManager;
	HMDStreamingCapabilities* _streamingCapabilities;
	HMDCameraProtocolParameters* _protocolParameters;
	HMDCameraVideoTierParameters* _videoTierParameters;

}

@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDStreamingManager * streamingManager;                          //@synthesize streamingManager=_streamingManager - In the implementation block
@property (nonatomic,readonly) HMDStreamingCapabilities * streamingCapabilities;              //@synthesize streamingCapabilities=_streamingCapabilities - In the implementation block
@property (nonatomic,retain) HMDCameraProtocolParameters * protocolParameters;                //@synthesize protocolParameters=_protocolParameters - In the implementation block
@property (nonatomic,retain) HMDCameraVideoTierParameters * videoTierParameters;              //@synthesize videoTierParameters=_videoTierParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(id)logIdentifier;
-(HMDStreamingCapabilities *)streamingCapabilities;
-(HMDStreamingManager *)streamingManager;
-(void)setProtocolParameters:(HMDCameraProtocolParameters *)arg1 ;
-(HMDCameraVideoTierParameters *)videoTierParameters;
-(id)negotiatedParameters;
-(HMDCameraProtocolParameters *)protocolParameters;
-(void)setStreamingManager:(HMDStreamingManager *)arg1 ;
-(id)initWithSessionID:(id)arg1 streamingTierType:(unsigned long long)arg2 remoteCapabilities:(id)arg3 streamPreference:(id)arg4 ;
-(void)setVideoTierParameters:(HMDCameraVideoTierParameters *)arg1 ;
@end

