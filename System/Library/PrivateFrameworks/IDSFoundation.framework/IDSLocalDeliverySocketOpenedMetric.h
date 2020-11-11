/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric> {

	BOOL _isToDefaultPairedDevice;
	NSString* _service;
	unsigned long long _openError;
	unsigned long long _socketError;

}

@property (nonatomic,readonly) NSString * service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL isToDefaultPairedDevice;                //@synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice - In the implementation block
@property (nonatomic,readonly) unsigned long long openError;                //@synthesize openError=_openError - In the implementation block
@property (nonatomic,readonly) unsigned long long socketError;              //@synthesize socketError=_socketError - In the implementation block
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
-(unsigned long long)socketError;
-(unsigned long long)openError;
-(id)initWithService:(id)arg1 isToDefaultPairedDevice:(BOOL)arg2 openError:(unsigned long long)arg3 socketError:(unsigned long long)arg4 ;
@end

