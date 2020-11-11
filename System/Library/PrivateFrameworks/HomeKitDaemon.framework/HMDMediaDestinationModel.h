/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSNumber, NSUUID, NSString;

@interface HMDMediaDestinationModel : HMDBackingStoreModelObject <HMFLogging>

@property (retain) NSNumber * type; 
@property (retain) NSNumber * supportedOptions; 
@property (retain) NSUUID * audioGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)logCategory;
-(NSString *)description;
-(id)privateDescription;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(id)initWithDestination:(id)arg1 changeType:(unsigned long long)arg2 ;
@end

