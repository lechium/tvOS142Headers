/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface PLFileSystemPersistence : NSObject {

	NSObject*<OS_dispatch_queue> _writerQueue;

}
+(id)sharedInstance;
+(id)persistenceKeyTypes;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)arg1 ;
+(void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 ;
+(id)persistedAttributesForFileAtURL:(id)arg1 exists:(BOOL*)arg2 includeUnknownAttributes:(BOOL)arg3 ;
+(void)clearAllAttributesForFileAtUrl:(id)arg1 ;
+(void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 ;
+(void)persistMetadata:(id)arg1 fileURL:(id)arg2 ;
+(void)performBlockOnWriterQueue:(/*^block*/id)arg1 ;
-(id)init;
-(void)_backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2 ;
-(void)_performOnWriterQueueWithIdentifier:(const char*)arg1 block:(/*^block*/id)arg2 ;
@end

