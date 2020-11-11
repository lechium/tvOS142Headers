/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:01 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface AFMediaRemoteDeviceInfo : NSObject {

	NSString* _groupIdentifier;
	BOOL _lastFetchSucceeded;
	NSString* _routeIdentifier;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL lastFetchSucceeded;                               //@synthesize lastFetchSucceeded=_lastFetchSucceeded - In the implementation block
@property (nonatomic,copy) NSString * routeIdentifier;                              //@synthesize routeIdentifier=_routeIdentifier - In the implementation block
+(id)currentDevice;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(NSString *)routeIdentifier;
-(void)setRouteIdentifier:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activeDeviceInfoChanged:(id)arg1 ;
-(void)_updateDeviceInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)getRouteIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)getGroupIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)lastFetchSucceeded;
-(void)setLastFetchSucceeded:(BOOL)arg1 ;
@end

