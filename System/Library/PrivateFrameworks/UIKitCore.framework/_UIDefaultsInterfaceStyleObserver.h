/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _UIDefaultsInterfaceStyleObserver : NSObject {

	NSString* _notificationName;
	int _notifyToken;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didChange;
-(id)initWithNotificationName:(id)arg1 darwinNotification:(const char*)arg2 ;
-(void)observeUserDefaults:(id)arg1 key:(id)arg2 ;
@end

