/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MROutputContextDataSource.h>

@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {

	NSString* _uniqueIdentifier;
	NSMutableArray* _outputDevices;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;

}
-(id)uniqueIdentifier;
-(float)volume;
-(id)outputDevices;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(unsigned)volumeControlCapabilities;
-(void)removeOutputDevices:(id)arg1 ;
-(void)updateOutputDevices:(id)arg1 ;
-(void)removeAllOutputDevices;
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
@end

