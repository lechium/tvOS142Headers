/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol VCDatabaseProvider, VCSyncDataEndpoint;
@class VCCoreDuetListener, VCVoiceShortcutManager, WFTriggerManager, NSXPCListener, VCCKShortcutSyncCoordinator, NSXPCListenerEndpoint, NSString;

@interface VCXPCServer : NSObject <NSXPCListenerDelegate, NSXPCConnectionDelegate> {

	BOOL _skipEntitlementsCheck;
	VCCoreDuetListener* _coreDuetListener;
	VCVoiceShortcutManager* _voiceShortcutManager;
	WFTriggerManager* _triggerManager;
	NSXPCListener* _xpcListener;
	id<VCDatabaseProvider> _databaseProvider;
	VCCKShortcutSyncCoordinator* _syncCoordinator;
	id<VCSyncDataEndpoint> _syncDataEndpoint;

}

@property (nonatomic,readonly) BOOL skipEntitlementsCheck;                                 //@synthesize skipEntitlementsCheck=_skipEntitlementsCheck - In the implementation block
@property (nonatomic,readonly) NSXPCListener * xpcListener;                                //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;                    //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) VCCoreDuetListener * coreDuetListener;                      //@synthesize coreDuetListener=_coreDuetListener - In the implementation block
@property (nonatomic,readonly) VCCKShortcutSyncCoordinator * syncCoordinator;              //@synthesize syncCoordinator=_syncCoordinator - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                    //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) WFTriggerManager * triggerManager;                          //@synthesize triggerManager=_triggerManager - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) VCVoiceShortcutManager * voiceShortcutManager;              //@synthesize voiceShortcutManager=_voiceShortcutManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCListener *)xpcListener;
-(id<VCDatabaseProvider>)databaseProvider;
-(VCCKShortcutSyncCoordinator *)syncCoordinator;
-(id)initWithDatabaseProvider:(id)arg1 coreDuetListener:(id)arg2 syncCoordinator:(id)arg3 syncDataEndpoint:(id)arg4 ;
-(id)initWithUnsecuredAnonymousListenerAndDatabaseProvider:(id)arg1 ;
-(id)initWithXPCListener:(id)arg1 databaseProvider:(id)arg2 coreDuetListener:(id)arg3 syncCoordinator:(id)arg4 syncDataEndpoint:(id)arg5 ;
-(VCVoiceShortcutManager *)voiceShortcutManager;
-(id)exportedXPCInterface;
-(VCCoreDuetListener *)coreDuetListener;
-(WFTriggerManager *)triggerManager;
-(BOOL)skipEntitlementsCheck;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
@end
