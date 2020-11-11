/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:20 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFShareSheetSlotObserverProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol SFShareSheetSlotManagerDelegate;
@class NSXPCConnection, NSString;

@interface SFShareSheetSlotManager : NSObject <SFShareSheetSlotObserverProtocol, NSXPCConnectionDelegate> {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	id<SFShareSheetSlotManagerDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<SFShareSheetSlotManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<SFShareSheetSlotManagerDelegate>)delegate;
-(void)setDelegate:(id<SFShareSheetSlotManagerDelegate>)arg1 ;
-(id)remoteObjectProxy;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)activate;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)invalidated;
-(id)machServiceName;
-(void)interrupted;
-(void)connectionInterrupted;
-(void)connectionEstablished;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedPersonWithIdentifier:(id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 removedPersonWithIdentifier:(id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 didLongPressShareActivityWithIdentifier:(id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActivityWithIdentifier:(id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedActionWithIdentifier:(id)arg2 ;
-(void)activityViewControllerWithSessionID:(id)arg1 updatedFavoritesProxies:(id)arg2 activityCategory:(long long)arg3 ;
-(void)activityViewControllerWithSessionID:(id)arg1 toggledActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(void)activityViewControllerWithSessionID:(id)arg1 favoritedActivity:(BOOL)arg2 withIdentifier:(id)arg3 activityCategory:(long long)arg4 ;
-(void)activityViewControllerWithSessionID:(id)arg1 selectedDefaultActivityWithIdentifier:(id)arg2 activityCategory:(long long)arg3 ;
-(void)activityViewControllerPerformEditActionsWithSessionID:(id)arg1 ;
-(void)connectToDaemonWithSessionID:(id)arg1 discoveryContext:(id)arg2 assetIdentifiers:(id)arg3 urlsBeingShared:(id)arg4 shouldSuggestFamilyMembers:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)activityViewControllerDidEnterBackgroundWithSessionID:(id)arg1 ;
-(void)activityViewControllerWillEnterForegroundWithSessionID:(id)arg1 ;
-(void)activityViewControllerPerformedActivityWithInfoDictionary:(id)arg1 ;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg1 ;
-(void)sendConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performActivityInHostWithUUID:(id)arg1 ;
-(void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2 ;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1 ;
-(void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2 ;
-(void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4 ;
-(void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6 ;
-(void)ensureConnectionEstablished;
-(void)ensureXPCStarted;
@end

