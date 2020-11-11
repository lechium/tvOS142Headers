/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:19 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2EncodedRequest.h>

@class HAP2AccessoryServerEncodingThreadBTLERequest, NSString;

@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {

	BOOL _enforcePDUBodyLength;
	HAP2AccessoryServerEncodingThreadBTLERequest* _btleRequest;

}

@property (nonatomic,readonly) HAP2AccessoryServerEncodingThreadBTLERequest * btleRequest;              //@synthesize btleRequest=_btleRequest - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)arg1 ;
+(unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(BOOL)isEncrypted;
-(id)serialize;
-(id)initWithBTLERequest:(id)arg1 enforcePDUBodyLength:(BOOL)arg2 ;
-(HAP2AccessoryServerEncodingThreadBTLERequest *)btleRequest;
@end
