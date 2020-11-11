/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDSupportedVideoStreamConfiguration, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject {

	HMDSupportedVideoStreamConfiguration* _supportedVideoStreamConfiguration;
	HMDSupportedAudioStreamConfiguration* _supportedAudioStreamConfiguration;
	HMDSupportedRTPConfiguration* _supportedRTPConfiguration;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,retain) HMDSupportedVideoStreamConfiguration * supportedVideoStreamConfiguration;              //@synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedAudioStreamConfiguration * supportedAudioStreamConfiguration;              //@synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedRTPConfiguration * supportedRTPConfiguration;                              //@synthesize supportedRTPConfiguration=_supportedRTPConfiguration - In the implementation block
-(BOOL)isValid;
-(HMDSupportedAudioStreamConfiguration *)supportedAudioStreamConfiguration;
-(HMDSupportedVideoStreamConfiguration *)supportedVideoStreamConfiguration;
-(void)setSupportedVideoStreamConfiguration:(HMDSupportedVideoStreamConfiguration *)arg1 ;
-(void)setSupportedAudioStreamConfiguration:(HMDSupportedAudioStreamConfiguration *)arg1 ;
-(HMDSupportedRTPConfiguration *)supportedRTPConfiguration;
-(void)setSupportedRTPConfiguration:(HMDSupportedRTPConfiguration *)arg1 ;
@end

