/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString, NSNumber;

@interface PBSRestrictionsSettings : NSObject <MCProfileConnectionObserver> {

	BOOL _gameCenterEnabled;

}

@property (nonatomic,readonly) BOOL restrictionsEnabled; 
@property (assign,nonatomic) unsigned long long allowsExplicitContent; 
@property (assign,nonatomic) unsigned long long allowsPurchaseAndRental; 
@property (assign,nonatomic) BOOL allowsInAppPurchase; 
@property (assign,nonatomic) BOOL allowsSiriExplicitLanaguage; 
@property (assign,nonatomic) unsigned long long allowsBookstoreErotica; 
@property (nonatomic,copy) NSString * contentRestrictionsCountryCode; 
@property (nonatomic,retain) NSNumber * maximumEffectiveMovieRanking; 
@property (nonatomic,retain) NSNumber * maximumEffectiveTVShowRanking; 
@property (nonatomic,retain) NSNumber * maximumEffectiveAppRanking; 
@property (assign,nonatomic) BOOL gameCenterEnabled;                                                //@synthesize gameCenterEnabled=_gameCenterEnabled - In the implementation block
@property (assign,nonatomic) BOOL multiplayerGamingAllowed; 
@property (assign,nonatomic) BOOL addingGameCenterFriendsAllowed; 
@property (assign,nonatomic) BOOL replayKitAllowed; 
@property (assign,nonatomic) unsigned long long allowsAirPlaySettingsUI; 
@property (assign,nonatomic) unsigned long long allowsConferenceRoomDisplaySettingsUI; 
@property (assign,nonatomic) BOOL allowsLocationServicesUI; 
@property (assign,nonatomic) BOOL allowsBackgroundAppRefreshModification; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)allowsExplicitContent;
-(void)setAllowsExplicitContent:(unsigned long long)arg1 ;
-(void)setGameCenterEnabled:(BOOL)arg1 ;
-(NSNumber *)maximumEffectiveTVShowRanking;
-(NSNumber *)maximumEffectiveMovieRanking;
-(NSString *)contentRestrictionsCountryCode;
-(BOOL)restrictionsEnabled;
-(unsigned long long)allowsConferenceRoomDisplaySettingsUI;
-(void)setAllowsPurchaseAndRental:(unsigned long long)arg1 ;
-(void)setAllowsAirPlaySettingsUI:(unsigned long long)arg1 ;
-(void)setAllowsConferenceRoomDisplaySettingsUI:(unsigned long long)arg1 ;
-(void)setMaximumEffectiveAppRanking:(NSNumber *)arg1 ;
-(void)setMaximumEffectiveMovieRanking:(NSNumber *)arg1 ;
-(void)setMaximumEffectiveTVShowRanking:(NSNumber *)arg1 ;
-(void)setAllowsLocationServicesUI:(BOOL)arg1 ;
-(void)resetRestrictionSettings;
-(unsigned long long)allowsBookstoreErotica;
-(void)setAllowsBookstoreErotica:(unsigned long long)arg1 ;
-(unsigned long long)allowsPurchaseAndRental;
-(BOOL)allowsInAppPurchase;
-(void)setAllowsInAppPurchase:(BOOL)arg1 ;
-(BOOL)allowsSiriExplicitLanaguage;
-(void)setAllowsSiriExplicitLanaguage:(BOOL)arg1 ;
-(void)setContentRestrictionsCountryCode:(NSString *)arg1 ;
-(NSNumber *)maximumEffectiveAppRanking;
-(BOOL)gameCenterEnabled;
-(BOOL)multiplayerGamingAllowed;
-(void)setMultiplayerGamingAllowed:(BOOL)arg1 ;
-(BOOL)addingGameCenterFriendsAllowed;
-(void)setAddingGameCenterFriendsAllowed:(BOOL)arg1 ;
-(BOOL)replayKitAllowed;
-(void)setReplayKitAllowed:(BOOL)arg1 ;
-(unsigned long long)allowsAirPlaySettingsUI;
-(BOOL)allowsLocationServicesUI;
-(void)setAllowsBackgroundAppRefreshModification:(BOOL)arg1 ;
-(BOOL)allowsBackgroundAppRefreshModification;
@end

