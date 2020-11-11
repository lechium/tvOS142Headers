/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:07 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface BWSensorConfiguration : NSObject {

	NSString* _portType;
	NSString* _sensorIDString;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfo;

}

@property (nonatomic,readonly) NSString * portType;                            //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * sensorIDString;                      //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) NSDictionary * sensorIDDictionary;              //@synthesize sensorIDDictionary=_sensorIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraInfo;                      //@synthesize cameraInfo=_cameraInfo - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)portType;
-(NSDictionary *)cameraInfo;
-(NSString *)sensorIDString;
-(NSDictionary *)sensorIDDictionary;
-(id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4 ;
@end
