/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:10 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSMutableData, NSData;

@interface WPDAdvertisingData : NSObject {

	BOOL _isRanging;
	BOOL _assertPower;
	long long _advertRate;
	NSMutableSet* _types;
	NSMutableData* _internalData;

}

@property (retain) NSMutableData * internalData;                //@synthesize internalData=_internalData - In the implementation block
@property (retain) NSMutableSet * types;                        //@synthesize types=_types - In the implementation block
@property (assign) long long advertRate;                        //@synthesize advertRate=_advertRate - In the implementation block
@property (getter=getData,readonly) NSData * data; 
@property (assign) BOOL isRanging;                              //@synthesize isRanging=_isRanging - In the implementation block
@property (assign) BOOL assertPower;                            //@synthesize assertPower=_assertPower - In the implementation block
-(id)description;
-(id)init;
-(BOOL)isEqualToData:(id)arg1 ;
-(id)getData;
-(NSMutableSet *)types;
-(BOOL)isRanging;
-(void)setIsRanging:(BOOL)arg1 ;
-(NSMutableData *)internalData;
-(void)setTypes:(NSMutableSet *)arg1 ;
-(void)setInternalData:(NSMutableData *)arg1 ;
-(long long)advertRate;
-(BOOL)assertPower;
-(void)setAdvertRate:(long long)arg1 ;
-(void)addAdvertisingRequest:(id)arg1 ;
-(BOOL)isValidWithAdditionalRequest:(id)arg1 ;
-(void)setAssertPower:(BOOL)arg1 ;
@end

