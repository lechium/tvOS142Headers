/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSData, NSUUID, NSNumber, NSString;

@interface HMBLocalSQLContextRowRecord : HMFObject {

	unsigned long long _recordRow;
	NSData* _externalData;
	NSData* _externalID;
	NSUUID* _modelID;
	unsigned long long _modelEncoding;
	NSData* _modelData;
	NSUUID* _modelSchema;
	unsigned long long _pushEncoding;
	NSData* _pushData;
	NSNumber* _pushBlockRow;
	NSString* _modelType;

}

@property (nonatomic,readonly) unsigned long long recordRow;                  //@synthesize recordRow=_recordRow - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                         //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) unsigned long long modelEncoding;              //@synthesize modelEncoding=_modelEncoding - In the implementation block
@property (nonatomic,readonly) NSUUID * modelID;                              //@synthesize modelID=_modelID - In the implementation block
@property (nonatomic,readonly) NSData * modelData;                            //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) NSUUID * modelSchema;                          //@synthesize modelSchema=_modelSchema - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                          //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) unsigned long long pushEncoding;               //@synthesize pushEncoding=_pushEncoding - In the implementation block
@property (nonatomic,readonly) NSData * pushData;                             //@synthesize pushData=_pushData - In the implementation block
@property (nonatomic,readonly) NSNumber * pushBlockRow;                       //@synthesize pushBlockRow=_pushBlockRow - In the implementation block
-(NSString *)modelType;
-(NSData *)externalID;
-(NSUUID *)modelID;
-(NSData *)externalData;
-(NSUUID *)modelSchema;
-(id)attributeDescriptions;
-(NSData *)modelData;
-(unsigned long long)modelEncoding;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 returning:(unsigned long long)arg2 ;
-(unsigned long long)recordRow;
-(NSNumber *)pushBlockRow;
-(unsigned long long)pushEncoding;
-(NSData *)pushData;
-(id)initWithRecordRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelID:(id)arg4 modelEncoding:(unsigned long long)arg5 modelData:(id)arg6 modelSchema:(id)arg7 modelType:(id)arg8 pushEncoding:(unsigned long long)arg9 pushData:(id)arg10 pushBlockRow:(id)arg11 ;
@end

