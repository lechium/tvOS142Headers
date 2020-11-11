/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDMediaDestinationControllerMessageHandlerDelegate
@required
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdateDestinationRequestMessage:(id)arg2 destinationIdentifier:(id)arg3 updateOptions:(unsigned long long)arg4;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationUpdatedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveHomeAccessoryRemovedNotification:(id)arg2 destination:(id)arg3;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemAddedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaSystemRemovedNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveAccessoryChangedRoomNotification:(id)arg2;
-(void)mediaDestinationControllerMessageHandler:(id)arg1 didReceiveMediaDestinationControllerUpdatedDestinationNotification:(id)arg2 destinationControllerIdentifier:(id)arg3 destinationIdentifier:(id)arg4;

@end

