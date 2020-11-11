/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IDSWRMMetricContainer : NSObject {

	unsigned long long _StreamBytesSent;
	unsigned long long _StreamBytesReceived;
	unsigned long long _StreamPacketsSent;
	unsigned long long _StreamPacketsReceived;
	unsigned long long _MessageSentSize;
	unsigned long long _MessageDeliveredSize;
	unsigned long long _MessageDeliveredRTT;
	unsigned long long _MessageReceivedSize;
	unsigned long long _MessageDeliveredDeliveryError;
	unsigned long long _numMessageSentSize;
	unsigned long long _numMessageDeliveredSize;
	unsigned long long _numMessageDeliveredRTT;
	unsigned long long _numMessageReceivedSize;

}

@property (assign,setter=treamBytesSent,nonatomic) unsigned long long StreamBytesSent;                          //@synthesize StreamBytesSent=_StreamBytesSent - In the implementation block
@property (assign,setter=treamBytesReceived,nonatomic) unsigned long long StreamBytesReceived;                  //@synthesize StreamBytesReceived=_StreamBytesReceived - In the implementation block
@property (assign,setter=treamPacketsSent,nonatomic) unsigned long long StreamPacketsSent;                      //@synthesize StreamPacketsSent=_StreamPacketsSent - In the implementation block
@property (assign,setter=treamPacketsReceived,nonatomic) unsigned long long StreamPacketsReceived;              //@synthesize StreamPacketsReceived=_StreamPacketsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long MessageSentSize;                                                //@synthesize MessageSentSize=_MessageSentSize - In the implementation block
@property (assign,nonatomic) unsigned long long MessageDeliveredSize;                                           //@synthesize MessageDeliveredSize=_MessageDeliveredSize - In the implementation block
@property (assign,nonatomic) unsigned long long MessageDeliveredRTT;                                            //@synthesize MessageDeliveredRTT=_MessageDeliveredRTT - In the implementation block
@property (assign,nonatomic) unsigned long long MessageReceivedSize;                                            //@synthesize MessageReceivedSize=_MessageReceivedSize - In the implementation block
@property (assign,nonatomic) unsigned long long MessageDeliveredDeliveryError;                                  //@synthesize MessageDeliveredDeliveryError=_MessageDeliveredDeliveryError - In the implementation block
@property (nonatomic,readonly) unsigned long long numMessageSentSize;                                           //@synthesize numMessageSentSize=_numMessageSentSize - In the implementation block
@property (nonatomic,readonly) unsigned long long numMessageDeliveredSize;                                      //@synthesize numMessageDeliveredSize=_numMessageDeliveredSize - In the implementation block
@property (nonatomic,readonly) unsigned long long numMessageDeliveredRTT;                                       //@synthesize numMessageDeliveredRTT=_numMessageDeliveredRTT - In the implementation block
@property (nonatomic,readonly) unsigned long long numMessageReceivedSize;                                       //@synthesize numMessageReceivedSize=_numMessageReceivedSize - In the implementation block
-(id)description;
-(id)init;
-(void)resetMetric;
-(void)setStreamBytesSent:(unsigned long long)arg1 ;
-(void)setStreamBytesReceived:(unsigned long long)arg1 ;
-(void)setStreamPacketsSent:(unsigned long long)arg1 ;
-(void)setStreamPacketsReceived:(unsigned long long)arg1 ;
-(void)setMessageSentSize:(unsigned long long)arg1 ;
-(void)setMessageDeliveredSize:(unsigned long long)arg1 ;
-(void)setMessageDeliveredRTT:(unsigned long long)arg1 ;
-(void)setMessageReceivedSize:(unsigned long long)arg1 ;
-(void)setMessageDeliveredDeliveryError:(unsigned long long)arg1 ;
-(unsigned long long)StreamBytesSent;
-(unsigned long long)StreamBytesReceived;
-(unsigned long long)StreamPacketsSent;
-(unsigned long long)StreamPacketsReceived;
-(unsigned long long)MessageSentSize;
-(unsigned long long)MessageDeliveredSize;
-(unsigned long long)MessageDeliveredRTT;
-(unsigned long long)MessageReceivedSize;
-(unsigned long long)MessageDeliveredDeliveryError;
-(unsigned long long)numMessageSentSize;
-(unsigned long long)numMessageDeliveredSize;
-(unsigned long long)numMessageDeliveredRTT;
-(unsigned long long)numMessageReceivedSize;
@end

