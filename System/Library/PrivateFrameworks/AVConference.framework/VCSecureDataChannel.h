/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:22 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class VCTransport;

@interface VCSecureDataChannel : NSObject {

	unsigned _localCallID;
	unsigned _remoteCallID;
	tls_record_sRef tlsRecord;
	id _delegate;
	VCTransport* _transport;
	unsigned long long _maxUDPPayloadSize;

}

@property (assign,nonatomic) id<VCSecureDataChannelDelegate> delegate; 
@property (nonatomic,readonly) long long maxEncryptedDataSize; 
@property (nonatomic,readonly) long long maxUnencryptedDataSize; 
@property (assign,nonatomic) unsigned long long maxUDPPayloadSize;                  //@synthesize maxUDPPayloadSize=_maxUDPPayloadSize - In the implementation block
-(void)dealloc;
-(id<VCSecureDataChannelDelegate>)delegate;
-(void)setDelegate:(id<VCSecureDataChannelDelegate>)arg1 ;
-(void)setMaxUDPPayloadSize:(unsigned long long)arg1 ;
-(int)sendData:(id)arg1 messageType:(unsigned)arg2 encrypted:(BOOL)arg3 ;
-(id)initWithLocalCallID:(unsigned)arg1 remoteCallID:(unsigned)arg2 isCaller:(BOOL)arg3 sharedSecret:(id)arg4 error:(id*)arg5 ;
-(int)setupWithSharedSecret:(id)arg1 isCaller:(BOOL)arg2 error:(id*)arg3 ;
-(int)convertEncryptedData:(id)arg1 toData:(id*)arg2 encrypted:(BOOL)arg3 ;
-(long long)maxEncryptedDataSize;
-(long long)maxUnencryptedDataSize;
-(int)convertData:(id)arg1 toEncryptedData:(id*)arg2 encrypted:(BOOL)arg3 ;
-(unsigned long long)maxUDPPayloadSize;
@end

