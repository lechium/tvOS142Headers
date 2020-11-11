/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSPointerArray;

@interface VCAudioRedBuilder : NSObject {

	int _redPayloadType;
	unsigned _sampleRate;
	unsigned _numPayloads;
	unsigned _maxDelay;
	BOOL _includeSequenceOffset;
	tagVCAudioRedPayload _latestPrimaryPayload;
	NSPointerArray* _selectedRedPayloads;
	tagVCAudioRedPayload _redPayloadToSend;
	unsigned char _redPayloadBufferToSend[1472];
	tagVCAudioRedPayload _payloadHistory[9];
	unsigned _payloadHistoryCount;
	char* _payloadBufferHistory;
	int _payloadBufferHistoryIndex;

}

@property (assign,nonatomic) unsigned numPayloads;              //@synthesize numPayloads=_numPayloads - In the implementation block
@property (assign,nonatomic) unsigned maxDelay;                 //@synthesize maxDelay=_maxDelay - In the implementation block
@property (nonatomic,readonly) int redPayloadType;              //@synthesize redPayloadType=_redPayloadType - In the implementation block
+(unsigned)redOverheadForNumPayloads:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)maxDelay;
-(void)setMaxDelay:(unsigned)arg1 ;
-(id)redPayloadDescription:(tagVCAudioRedPayload*)arg1 ;
-(id)redundantPayloadsDescription:(id)arg1 ;
-(char*)resetOutputPayload:(tagVCAudioRedPayload*)arg1 ;
-(unsigned)timestampOffsetFor20msBlocks:(int)arg1 ;
-(BOOL)isPayloadTimestampWithinThreshold:(tagVCAudioRedPayload*)arg1 forTimestamp:(unsigned)arg2 ;
-(tagVCAudioRedPayload*)nearestRedPayloadForTimestamp:(unsigned)arg1 ;
-(BOOL)redundantPayloads:(id)arg1 containsPointer:(void*)arg2 ;
-(id)selectRedPayloadsForPrimaryPayload:(tagVCAudioRedPayload*)arg1 ;
-(tagVCAudioRedPayload*)buildRedPayloadWithPrimaryPayload:(tagVCAudioRedPayload*)arg1 redPayloads:(id)arg2 ;
-(id)payloadHistoryDescription;
-(tagVCAudioRedPayload*)redPayloadForPrimaryPayload:(tagVCAudioRedPayload*)arg1 ;
-(void)updatePayloadHistory:(tagVCAudioRedPayload*)arg1 ;
-(id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned)arg2 numPayloads:(unsigned)arg3 maxDelay:(unsigned)arg4 includeSequenceOffset:(BOOL)arg5 ;
-(tagVCAudioRedPayload*)getPrimaryPayloadWithBuffer:(char*)arg1 length:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned)arg4 priority:(unsigned char)arg5 ;
-(unsigned)numPayloads;
-(void)setNumPayloads:(unsigned)arg1 ;
-(int)redPayloadType;
@end

