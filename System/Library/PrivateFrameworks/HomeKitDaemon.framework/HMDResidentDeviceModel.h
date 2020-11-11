/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:11 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSNumber, HMDDevice;

@interface HMDResidentDeviceModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * deviceUUID; 
@property (nonatomic,retain) NSNumber * enabled; 
@property (nonatomic,retain) NSNumber * confirmed; 
@property (nonatomic,retain) HMDDevice * device; 
+(id)properties;
@end

