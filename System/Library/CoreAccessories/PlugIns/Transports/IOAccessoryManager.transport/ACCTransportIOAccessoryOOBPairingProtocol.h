/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:51 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACCTransportIOAccessoryOOBPairingProtocol <NSObject>
@required
-(BOOL)IOAccessoryOOBPairingDataArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingInfoArrived:(id)arg1 endpointUUID:(id)arg2;
-(BOOL)IOAccessoryOOBPairingDataStartedForEndpointUUID:(id)arg1;
-(BOOL)IOAccessoryOOBPairingDataFinishedForEndpointUUID:(id)arg1;

@end

