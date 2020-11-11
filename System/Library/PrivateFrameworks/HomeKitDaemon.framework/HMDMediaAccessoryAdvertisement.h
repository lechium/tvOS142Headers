/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDAccessoryAdvertisement.h>
#import <libobjc.A.dylib/HMDWACAccessoryAssociation.h>

@protocol HMFLocking;
@class HMDMediaOutputDevice;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {

	id<HMFLocking> _lock;
	BOOL _associated;
	HMDMediaOutputDevice* _outputDevice;

}

@property (retain) HMDMediaOutputDevice * outputDevice;              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (getter=isAssociated) BOOL associated;                     //@synthesize associated=_associated - In the implementation block
+(BOOL)canAirPortExpressSupportMediaAccessory:(id)arg1 ;
-(id)description;
-(HMDMediaOutputDevice *)outputDevice;
-(id)initWithOutputDevice:(id)arg1 ;
-(BOOL)isAssociated;
-(void)setAssociated:(BOOL)arg1 ;
-(void)setOutputDevice:(HMDMediaOutputDevice *)arg1 ;
-(long long)associationOptions;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
-(BOOL)matchesWACDeviceID:(id)arg1 ;
@end

