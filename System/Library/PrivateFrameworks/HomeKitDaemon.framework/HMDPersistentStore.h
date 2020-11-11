/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:06 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDPersistentStore.h>

@protocol HMDPersistentStore <NSObject>
@required
+(id)unarchiveBulletinBoard;
+(void)archiveBulletinBoard:(id)arg1;

@end


@class NSString;

@interface HMDPersistentStore : HMFObject <HMDPersistentStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)removeTransactionJournal;
+(id)unarchiveHomeData:(id*)arg1 decryptionFailed:(BOOL*)arg2 ;
+(void)resetConfiguration;
+(id)loadBuiltinPlainMetadataDictionary;
+(id)loadPlainMetadataDictionary;
+(BOOL)archiveMetadata:(id)arg1 ;
+(id)unarchiveBulletinBoard;
+(void)archiveBulletinBoard:(id)arg1 ;
+(id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long*)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(BOOL*)arg5 successfulKeyUserName:(id*)arg6 error:(id*)arg7 ;
+(id)archiveCloudServerTokenData:(id)arg1 ;
+(BOOL)deserializeHomeData:(id*)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3 ;
+(id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3 ;
+(id)encryptDataWithControllerKey:(id)arg1 error:(id*)arg2 ;
+(id)decryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(id)encryptDataWithMetadataKey:(id)arg1 error:(id*)arg2 ;
+(BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2 ;
+(id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id*)arg3 ;
+(id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3 ;
+(void)cleanupKeysInStore;
+(void)resetMetadata;
+(id)archiveHomeData:(id)arg1 ;
+(void)archiveVendorStore:(id)arg1 ;
+(id)unarchiveVendorStore;
+(id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id*)arg2 ;
+(id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3 ;
+(void)removeServerTokenDataFile;
+(id)archiveIDSDataSyncJournal:(id)arg1 ;
+(id)unarchiveIDSDataSyncJournal;
+(id)archiveDataStoreWithPath:(id)arg1 serializedData:(id)arg2 forKey:(id)arg3 ;
+(id)unarchiveDataStoreWithPath:(id)arg1 forKey:(id)arg2 ;
@end

