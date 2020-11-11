/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HAPDataStreamTransportParameters : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _tcpListeningPort;
	HAPTLVUnsignedNumberValue* _sessionIdentifier;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * tcpListeningPort;               //@synthesize tcpListeningPort=_tcpListeningPort - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPTLVUnsignedNumberValue *)sessionIdentifier;
-(void)setSessionIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)tcpListeningPort;
-(void)setTcpListeningPort:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithTcpListeningPort:(id)arg1 sessionIdentifier:(id)arg2 ;
@end

