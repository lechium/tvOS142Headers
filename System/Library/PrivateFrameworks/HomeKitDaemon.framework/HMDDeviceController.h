/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking, HMDDeviceControllerDelegate;
@class NSUUID, HMDDevice, NSString;

@interface HMDDeviceController : HMFObject <HMFLogging> {

	id<HMFLocking> _lock;
	NSUUID* _identifier;
	HMDDevice* _device;
	id<HMDDeviceControllerDelegate> _delegate;

}

@property (__weak) id<HMDDeviceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDDevice * device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id<HMDDeviceControllerDelegate>)delegate;
-(void)setDelegate:(id<HMDDeviceControllerDelegate>)arg1 ;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)updateWithDevice:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

