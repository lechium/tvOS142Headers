/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSHashTable* _clients;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
@end
