/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:27 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences, NSString;

@interface IKNetworkUtilities : NSObject <RadiosPreferencesDelegate> {

	id _isNetworkTypeChangedToken;
	id _networkReachabilityChangedToken;
	RadiosPreferences* _radioPrefs;

}

@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled; 
@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (nonatomic,readonly) NSString * networkType; 
@property (nonatomic,readonly) double lastNetworkChangedTime; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)airplaneModeChanged;
-(BOOL)isAirplaneModeEnabled;
-(NSString *)networkType;
-(void)_notifyObservers;
-(double)lastNetworkChangedTime;
@end

