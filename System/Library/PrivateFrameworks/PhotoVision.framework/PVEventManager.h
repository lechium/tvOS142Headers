/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, PVContext;

@interface PVEventManager : NSObject {

	NSMutableArray* _notificationListeners;
	PVContext* _context;

}
-(id)initWithContext:(id)arg1 ;
-(void)addNotificationListener:(id)arg1 ;
-(void)removeNotificationListener:(id)arg1 ;
-(void)publishEvent:(id)arg1 source:(id)arg2 ;
-(void)notifyListeners:(id)arg1 ;
@end

