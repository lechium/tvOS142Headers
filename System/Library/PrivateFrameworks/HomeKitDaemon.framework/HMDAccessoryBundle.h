/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDHAPAccessory, HMFObject;

@interface HMDAccessoryBundle : HMFObject {

	HMDHAPAccessory* accessory;
	HMFObject* context;

}

@property (nonatomic,retain) HMDHAPAccessory * accessory; 
@property (nonatomic,retain) HMFObject * context; 
-(HMFObject *)context;
-(void)setContext:(HMFObject *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(id)initWithAccessory:(id)arg1 context:(id)arg2 ;
@end

