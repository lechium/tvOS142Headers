/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:38 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface UNSNotificationServiceExtensionManager : NSObject {

	id _matchingContext;
	NSDictionary* _extensionIdentifierByContainingAppIdentifier;

}

@property (copy) NSDictionary * extensionIdentifierByContainingAppIdentifier;              //@synthesize extensionIdentifierByContainingAppIdentifier=_extensionIdentifierByContainingAppIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_startMonitoringExtensions;
-(void)_stopMonitoringExtensions;
-(NSDictionary *)extensionIdentifierByContainingAppIdentifier;
-(void)setExtensionIdentifierByContainingAppIdentifier:(NSDictionary *)arg1 ;
-(id)extensionForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
@end

