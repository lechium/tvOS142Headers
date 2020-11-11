/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_nw_connection, OS_nw_path_evaluator;
#import <IDS/IDS-Structs.h>
@class NSObject, IDSDataChannelLinkContext, NSMutableDictionary, NSData, NSMutableArray;

@interface _IDSDatagramChannel : NSObject {

	BOOL _verboseFunctionalLogging;
	int _socketDescriptor;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	BOOL _connected;
	os_unfair_lock_s _writeLock;
	os_unfair_lock_s _readLock;
	BOOL _isInvalidated;
	NSObject*<OS_nw_connection> _connection;
	BOOL _hasMetadata;
	BOOL _sentFirstReadLinkInfo;
	BOOL _receivedPreConnectionData;
	BOOL _waitForPreConnectionDataForConnected;
	BOOL _startCalled;
	BOOL _startAutomatically;
	int _osChannelFD;
	NSObject*<OS_nw_path_evaluator> _pathEvaluator;
	channelRef _osChannel;
	channel_ring_descRef _osChannelTXRing;
	channel_ring_descRef _osChannelRXRing;
	unsigned char _nexus_instance[16];
	IDSDataChannelLinkContext* _cellularLink;
	NSMutableDictionary* _linkContexts;
	char _defaultLinkID;
	NSData* _preConnectionData;
	NSMutableArray* _sendingMetadata;
	BOOL _needsMediaEncryptionInfo;
	unsigned long long _outgoingBytes;
	unsigned long long _incomingBytes;
	double _lastOutgoingStatReport;
	double _lastIncomingStatReport;
	NSMutableDictionary* _MKIArrivalTime;
	NSMutableDictionary* _firstPacketArrivalTimeForMKI;
	NSMutableDictionary* _probingDict;

}
-(id)init;
@end

