/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:55 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ExposureNotification/ExposureNotification-Structs.h>
@class NSDictionary, NSData, NSArray, ENXPCServiceClient, NSDate;

@interface ENFileSession : NSObject {

	BOOL _activateCalled;
	BOOL _activateSucceeded;
	BOOL _invalidated;
	unsigned _flags;
	unsigned long long _batchSize;
	unsigned long long _invalidKeyCount;
	NSDictionary* _metadata;
	NSData* _sha256Data;
	NSArray* _signatures;
	ENXPCServiceClient* _serviceClient;

}

@property (assign,nonatomic) unsigned long long batchSize;                      //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) unsigned flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long invalidKeyCount;              //@synthesize invalidKeyCount=_invalidKeyCount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate; 
@property (nonatomic,copy,readonly) NSDate * endDate; 
@property (nonatomic,copy,readonly) NSData * sha256Data;                        //@synthesize sha256Data=_sha256Data - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signatures;                       //@synthesize signatures=_signatures - In the implementation block
@property (nonatomic,readonly) ENXPCServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
-(void)dealloc;
-(unsigned)flags;
-(void)invalidate;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSDictionary *)metadata;
-(void)setFlags:(unsigned)arg1 ;
-(NSArray *)signatures;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)initWithServiceClient:(id)arg1 ;
-(NSData *)sha256Data;
-(id)_activateCreateXPCRequestWithPath:(id)arg1 archive:(BOOL)arg2 signatureData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_activateSyncWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_activateCreateXPCRequestWithFD:(int)arg1 archive:(BOOL)arg2 signatureData:(id)arg3 error:(id*)arg4 ;
-(BOOL)_activateHandleReply:(id)arg1 error:(id*)arg2 ;
-(id)_readTEKBatchHandleReply:(id)arg1 error:(id*)arg2 ;
-(BOOL)activateWithArchivePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)activateWithFD:(int)arg1 signatureData:(id)arg2 error:(id*)arg3 ;
-(BOOL)activateWithFilePath:(id)arg1 error:(id*)arg2 ;
-(id)readTEKBatchAndReturnError:(id*)arg1 ;
-(id)verifySignatureWithPublicKey:(SecKeyRef)arg1 error:(id*)arg2 ;
-(unsigned long long)invalidKeyCount;
-(ENXPCServiceClient *)serviceClient;
@end

