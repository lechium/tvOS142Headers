/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:22:59 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSNumber, NSString;

@interface VUISettingsManager : NSObject {

	NSNumber* _maxMovieRank;
	NSNumber* _maxTVShowRank;
	NSString* _preferredVideoFormat;

}

@property (nonatomic,readonly) NSString * restrictions; 
@property (nonatomic,copy) NSString * preferredVideoFormat;                                              //@synthesize preferredVideoFormat=_preferredVideoFormat - In the implementation block
@property (nonatomic,copy) NSNumber * maxMovieRank;                                                      //@synthesize maxMovieRank=_maxMovieRank - In the implementation block
@property (nonatomic,copy) NSNumber * maxTVShowRank;                                                     //@synthesize maxTVShowRank=_maxTVShowRank - In the implementation block
@property (getter=isAppInstallationAllowed,nonatomic,readonly) BOOL appInstallationAllowed; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSString *)restrictions;
-(BOOL)isAppInstallationAllowed;
-(NSNumber *)maxMovieRank;
-(NSNumber *)maxTVShowRank;
-(NSString *)preferredVideoFormat;
-(id)_formatStringForVideoFormat:(unsigned long long)arg1 ;
-(unsigned long long)_preferredVideoFormat;
-(void)setPreferredVideoFormat:(NSString *)arg1 ;
-(long long)_resolutionFromString:(id)arg1 defaultResolution:(long long)arg2 ;
-(id)_restrictionsMaximumEffectiveMovieRanking;
-(id)_restrictionsMaximumEffectiveTVShowRanking;
-(BOOL)_hasRestrictionsChanged;
-(BOOL)_hasPreferredVideoFormatChanged;
-(void)_sendSettingsValuesToJS;
-(id)preferencesJSONData;
-(void)checkAndUpdateSettings;
-(void)setMaxMovieRank:(NSNumber *)arg1 ;
-(void)setMaxTVShowRank:(NSNumber *)arg1 ;
@end
