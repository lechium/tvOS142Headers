/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <IDS/IDSDatagramChannel.h>

@class VCMockIDSDataChannelLinkContext, NSLock, NSDictionary;

@interface VCMockIDSDatagramChannel : IDSDatagramChannel {

	VCMockIDSDataChannelLinkContext* _linkContext;
	/*^block*/id _eventHandler;
	/*^block*/id _readHandler;
	/*^block*/id _readHandlerWithOptions;
	/*^block*/id _writeDatagramsBlock;
	/*^block*/id _writeDatagramBlock;
	/*^block*/id _readyToReadBlock;
	NSLock* _blockSettingLock;
	VCSingleLinkedList* _datagramPackets;
	CFAllocatorRef _datagramPacketAllocator;
	unsigned long long _datagramPacketNextSequenceNumber;
	BOOL _usingOptions;
	double _emulatedRxPLR;
	opaque_pthread_mutex_t _streamSubscriptionLock;
	NSDictionary* _subscribedStreamsByParticipantID;
	long long _participantGenerationCounter;

}
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)readDatagramWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readDatagramsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)osChannelInfoLog;
-(void)setChannelPreferences:(id)arg1 ;
-(int)underlyingFileDescriptor;
-(void)writeDatagrams:(const void*)arg1 datagramsSize:(unsigned*)arg2 datagramsInfo:(SCD_Struct_VC80*)arg3 datagramsCount:(int)arg4 options:(/*function pointer*/void**)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 flags:(SCD_Struct_VC80)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramInfo:(SCD_Struct_VC80)arg3 options:(SCD_Struct_VC82*)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setReadHandler:(/*^block*/id)arg1 ;
-(void)setReadHandlerWithOptions:(/*^block*/id)arg1 ;
-(int)readyToRead;
-(void)setWiFiAssist:(BOOL)arg1 ;
-(void)startActiveProbingWithOptions:(id)arg1 ;
-(void)stopActiveProbingWithOptions:(id)arg1 ;
-(void)flushLinkProbingStatusWithOptions:(id)arg1 ;
-(void)queryStatusWithOptions:(id)arg1 ;
-(void)requestSessionInfoWithOptions:(id)arg1 ;
-(void)reportFirstPacketTimeForMKI:(id)arg1 ;
-(void)queryProbingResultsWithOptions:(id)arg1 ;
-(BOOL)isControlChannelDatagram:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(id)newArrayOfStreamIdsForPacket:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(BOOL)shouldReadPacket:(VCMockIDSDatagramChannelPacket*)arg1 ;
-(BOOL)enqueueDatagramPacket:(const void*)arg1 datagramSize:(unsigned)arg2 options:(SCD_Struct_VC82*)arg3 error:(id*)arg4 ;
-(void)dequeueDatagramPacket:(/*^block*/id)arg1 ;
-(void)readDatagram:(const void*)arg1 datagramSize:(unsigned)arg2 datagramOptions:(SCD_Struct_VC82*)arg3 ;
-(id)initRequiresOptions:(BOOL)arg1 ;
-(void)setWriteDatagramsBlock:(/*^block*/id)arg1 ;
-(void)setWriteDatagramBlock:(/*^block*/id)arg1 ;
-(void)setReadyToReadBlock:(/*^block*/id)arg1 ;
@end

