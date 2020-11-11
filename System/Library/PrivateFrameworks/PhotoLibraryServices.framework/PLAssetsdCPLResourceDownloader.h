/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSString, NSXPCConnection, NSObject, NSMutableDictionary;

@interface PLAssetsdCPLResourceDownloader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _trustedCallerBundleID;
	NSXPCConnection* _clientConnection;
	NSObject*<OS_dispatch_queue> _pendingCPLDownloadsIsolationQueue;
	NSMutableDictionary* _pendingCPLDownloads;

}
-(void)handleInvalidation;
-(id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 track:(BOOL)arg5 notify:(BOOL)arg6 transient:(BOOL)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id*)arg10 ;
-(void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3 ;
-(void)_handleInvalidation;
-(void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2 ;
@end

