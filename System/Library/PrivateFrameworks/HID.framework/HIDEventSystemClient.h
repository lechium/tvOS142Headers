/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HID.framework/HID
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDEventSystemClient : NSObject {

	IOHIDEventSystemClientRef _client;
	/*^block*/id _eventHandler;
	/*^block*/id _resetHandler;
	/*^block*/id _filterHandler;
	/*^block*/id _serviceHandler;
	/*^block*/id _propertyChangedHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * services; 
-(id)description;
-(void)dealloc;
-(id)propertyForKey:(id)arg1 ;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)cancel;
-(IOHIDEventSystemClientRef)client;
-(id)initWithType:(long long)arg1 ;
-(void)activate;
-(NSArray *)services;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setResetHandler:(/*^block*/id)arg1 ;
-(void)setMatching:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(id)initWithType:(long long)arg1 andAttributes:(id)arg2 ;
-(void)setEventFilterHandler:(/*^block*/id)arg1 ;
-(void)setServiceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setPropertyChangedHandler:(/*^block*/id)arg1 matching:(id)arg2 ;
@end

