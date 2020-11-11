/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HMDSiriAccessoryInfo : NSObject {

	BOOL _supportsDragonSiri;
	id _targetsAccessory;

}

@property (assign,nonatomic,__weak) id targetsAccessory;              //@synthesize targetsAccessory=_targetsAccessory - In the implementation block
@property (assign,nonatomic) BOOL supportsDragonSiri;                 //@synthesize supportsDragonSiri=_supportsDragonSiri - In the implementation block
+(id)infoWithTargetableAccessory:(id)arg1 ;
-(void)setTargetsAccessory:(id)arg1 ;
-(id)targetsAccessory;
-(BOOL)supportsDragonSiri;
-(BOOL)isActiveAndSupportsDragonSiri;
-(void)setSupportsDragonSiri:(BOOL)arg1 ;
@end
