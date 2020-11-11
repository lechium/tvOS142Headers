/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSDictionary, NSNumber, NSDate, NSString, NSArray;

@interface HMDOutgoingHomeInvitationModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSDictionary * user; 
@property (nonatomic,retain) NSNumber * invitationState; 
@property (nonatomic,retain) NSDate * expiryDate; 
@property (nonatomic,retain) NSString * messageIdentifier; 
@property (nonatomic,retain) NSNumber * responseReceived; 
@property (nonatomic,retain) NSString * inviteeDestinationAddress; 
@property (nonatomic,retain) NSArray * operations; 
@property (nonatomic,retain) NSArray * operationIdentifiers; 
+(id)properties;
-(id)dependentUUIDs;
@end

