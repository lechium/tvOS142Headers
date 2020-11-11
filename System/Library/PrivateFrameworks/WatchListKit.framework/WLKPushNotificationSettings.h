/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults;

@interface WLKPushNotificationSettings : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                     //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) BOOL allowExplicitNotifications; 
@property (assign,nonatomic) BOOL allowImplicitNotifications; 
@property (assign,nonatomic) BOOL allowMarketingNotifications; 
+(id)defaultSettings;
-(id)init;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)allowExplicitNotifications;
-(void)setAllowExplicitNotifications:(BOOL)arg1 ;
-(BOOL)allowImplicitNotifications;
-(void)setAllowImplicitNotifications:(BOOL)arg1 ;
-(BOOL)allowMarketingNotifications;
-(void)setAllowMarketingNotifications:(BOOL)arg1 ;
@end

