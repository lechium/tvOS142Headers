//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKGameSessionService-Protocol.h"

@class NSString;

@interface GKGameSessionService : GKService <GKGameSessionService>
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0000000100127be4
+ (Class)interfaceClass;	// IMP=0x0000000100127bd8
- (id)actualIdentifiersForObsfucatedPlayerIDs:(id)arg1 inSession:(id)arg2;	// IMP=0x000000010012aa50
- (oneway void)sendMessageForSessionWithID:(id)arg1 withLocalizedFormatKey:(id)arg2 arguments:(id)arg3 userMessage:(id)arg4 data:(id)arg5 recipientIDs:(id)arg6 badgePlayers:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x000000010012a3d0
- (oneway void)setBadged:(_Bool)arg1 forPlayerIDs:(id)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100129e70
- (oneway void)fetchShareURLForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100129d14
- (oneway void)sendData:(id)arg1 reliably:(_Bool)arg2 forSessionWithIdentifier:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100129cb8
- (void)didSaveConnectionState:(long long)arg1 forGameSession:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001296d8
- (void)_setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100128e88
- (oneway void)setConnectionState:(long long)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100128e70
- (oneway void)saveData:(id)arg1 forSessionWithIdentifier:(id)arg2 changeTag:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100128aa8
- (oneway void)loadDataForSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001289b4
- (oneway void)removePlayers:(id)arg1 forSessionWithIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100128804
- (oneway void)removeSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001285b0
- (oneway void)loadSessionWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001001284a8
- (oneway void)loadSessionsInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100128108
- (oneway void)createSessionInContainer:(id)arg1 withTitle:(id)arg2 maxConnectedPlayers:(long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100127de4
- (oneway void)primaryPlayerInContainer:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100127c6c
- (id)validateContainer:(id)arg1;	// IMP=0x0000000100127bf4
- (_Bool)requiresAuthentication;	// IMP=0x0000000100127bec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
