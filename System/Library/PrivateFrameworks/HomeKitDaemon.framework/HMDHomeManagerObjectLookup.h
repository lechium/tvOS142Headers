/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDObjectLookup.h>

@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup {

	HMDHomeManager* _homeManager;

}

@property (__weak) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
+(id)logCategory;
-(void)scanObjects;
-(HMDHomeManager *)homeManager;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(id)initWithHomeManager:(id)arg1 ;
-(void)_scanHomes;
-(void)_scanCloudZones;
-(void)_scanAccounts;
@end

