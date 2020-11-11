/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSString, NSNumber;

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSString * manufacturer; 
@property (nonatomic,retain) NSNumber * category; 
@property (nonatomic,retain) NSNumber * targetProtectionMode; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 ;
+(id)modelNamespace;
@end
