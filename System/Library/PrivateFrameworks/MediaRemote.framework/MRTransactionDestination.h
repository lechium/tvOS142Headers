/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class MRTransactionPacketizer, NSObject, MRPlayerPath;

@interface MRTransactionDestination : NSObject {

	MRTransactionPacketizer* _packetizer;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _name;
	MRPlayerPath* _playerPath;

}

@property (nonatomic,readonly) unsigned long long name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(unsigned long long)name;
-(MRPlayerPath *)playerPath;
-(void)unpacketize:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(unsigned long long)arg1 playerPath:(id)arg2 ;
-(void)packetsFromMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

