/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:56 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSArray, NSString;

@interface ManagedConfigurationUtils : NSObject <MCProfileConnectionObserver> {

	void* _managedConfigurationDylibHandle;
	BOOL _diagnosticsAndUsageEnabled;
	NSArray* _installedVisibleProfileIdentifiers;

}

@property (assign,nonatomic) BOOL diagnosticsAndUsageEnabled;                           //@synthesize diagnosticsAndUsageEnabled=_diagnosticsAndUsageEnabled - In the implementation block
@property (nonatomic,retain) NSArray * installedVisibleProfileIdentifiers;              //@synthesize installedVisibleProfileIdentifiers=_installedVisibleProfileIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)setInstalledVisibleProfileIdentifiers:(NSArray *)arg1 ;
-(void)setDiagnosticsAndUsageEnabled:(BOOL)arg1 ;
-(NSArray *)installedVisibleProfileIdentifiers;
-(BOOL)diagnosticsAndUsageEnabled;
@end

