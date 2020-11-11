/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:13 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSData, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudAccessoryModel : HMBModel <HMFLogging>

@property (nonatomic,retain) NSData * networkDeclarationsData; 
@property (nonatomic,retain) NSData * pairedMetadataData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)hmbProperties;
+(id)modelIDForRecordID:(id)arg1 ;
+(id)namespaceID;
-(id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 pairedMetadataData:(id)arg4 ;
-(id)initWithModelID:(id)arg1 parentModelID:(id)arg2 networkDeclarationsData:(id)arg3 ;
-(id)initWithCloudZoneID:(id)arg1 recordID:(id)arg2 networkDeclarationsData:(id)arg3 ;
@end

