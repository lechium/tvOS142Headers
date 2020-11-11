/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HIDPreferences.framework/HIDPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface HIDPreferencesHelperListener : NSObject {

	NSObject*<OS_xpc_object> _listener;
	NSMutableArray* _clients;

}
-(id)init;
-(void)removeClient:(id)arg1 ;
-(BOOL)setupListener;
-(void)acceptConnection:(id)arg1 ;
@end
