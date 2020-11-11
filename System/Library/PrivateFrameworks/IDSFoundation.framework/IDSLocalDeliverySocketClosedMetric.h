/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSString, NSDictionary;

@interface IDSLocalDeliverySocketClosedMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isToDefaultPairedDevice;
	NSString* _service;
	unsigned long long _closeError;
	unsigned long long _socketError;
	unsigned long long _bytesSent;
	unsigned long long _packetsSent;
	unsigned long long _bytesReceived;
	unsigned long long _packetsReceived;

}

@property (nonatomic,readonly) NSString * service;                              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isToDefaultPairedDevice;                    //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long closeError;                   //@synthesize closeError=_closeError - In the implementation block
@property (nonatomic,readonly) unsigned long long socketError;                  //@synthesize socketError=_socketError - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesSent;                    //@synthesize bytesSent=_bytesSent - In the implementation block
@property (nonatomic,readonly) unsigned long long packetsSent;                  //@synthesize packetsSent=_packetsSent - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesReceived;                //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (nonatomic,readonly) unsigned long long packetsReceived;              //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)service;
-(BOOL)isToDefaultPairedDevice;
-(unsigned long long)closeError;
-(unsigned long long)socketError;
-(unsigned long long)bytesSent;
-(unsigned long long)packetsSent;
-(unsigned long long)bytesReceived;
-(unsigned long long)packetsReceived;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 closeError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 bytesSent:(unsigned long long)arg5 packetsSent:(unsigned long long)arg6 bytesReceived:(unsigned long long)arg7 packetsReceived:(unsigned long long)arg8 ;
@end

