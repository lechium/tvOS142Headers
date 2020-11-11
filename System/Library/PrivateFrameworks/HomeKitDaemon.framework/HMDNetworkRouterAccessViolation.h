/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVUnsignedNumberValue* _clientIdentifier;
	HAPTLVUnsignedNumberValue* _lastViolationTimestamp;
	HAPTLVUnsignedNumberValue* _lastResetTimestamp;

}

@property (nonatomic,retain) HAPTLVUnsignedNumberValue * clientIdentifier;                    //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lastViolationTimestamp;              //@synthesize lastViolationTimestamp=_lastViolationTimestamp - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * lastResetTimestamp;                  //@synthesize lastResetTimestamp=_lastResetTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(HAPTLVUnsignedNumberValue *)clientIdentifier;
-(void)setClientIdentifier:(HAPTLVUnsignedNumberValue *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setLastViolationTimestamp:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setLastResetTimestamp:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)lastViolationTimestamp;
-(HAPTLVUnsignedNumberValue *)lastResetTimestamp;
-(id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3 ;
@end

