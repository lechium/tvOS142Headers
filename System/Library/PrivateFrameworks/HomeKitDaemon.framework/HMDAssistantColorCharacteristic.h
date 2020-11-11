/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:02 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAssistantColorCharacteristic : HMFObject {

	BOOL _mandatory;
	NSString* _readCharacteristicType;
	NSString* _writeCharacteristicType;
	NSString* _format;

}

@property (nonatomic,readonly) NSString * readCharacteristicType;               //@synthesize readCharacteristicType=_readCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * writeCharacteristicType;              //@synthesize writeCharacteristicType=_writeCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) BOOL mandatory;                                  //@synthesize mandatory=_mandatory - In the implementation block
-(NSString *)format;
-(id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(BOOL)arg4 ;
-(NSString *)readCharacteristicType;
-(NSString *)writeCharacteristicType;
-(BOOL)mandatory;
@end

