/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:49 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GKOnboardingFlowDelegate;
@class NSMutableDictionary;

@interface GKOnboardingController : NSObject {

	id<GKOnboardingFlowDelegate> _delegate;
	NSMutableDictionary* _analyticsPayload;

}

@property (assign,nonatomic,__weak) id<GKOnboardingFlowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * analyticsPayload;                    //@synthesize analyticsPayload=_analyticsPayload - In the implementation block
+(id)shared;
-(id<GKOnboardingFlowDelegate>)delegate;
-(void)setDelegate:(id<GKOnboardingFlowDelegate>)arg1 ;
-(NSMutableDictionary *)analyticsPayload;
-(void)presentViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(unsigned long long)getPrivacyNoticeVersion;
-(void)presentProfilePrivacyScreen:(id)arg1 ;
-(void)presentPersonalizationScreen:(id)arg1 ;
-(BOOL)didShowPrivacyNotice;
-(void)setAnalyticsPayload:(NSMutableDictionary *)arg1 ;
@end

