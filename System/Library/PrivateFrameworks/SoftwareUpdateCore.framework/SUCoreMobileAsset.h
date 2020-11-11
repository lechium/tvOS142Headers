/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_os_transaction;
@class NSString, MAAsset, MADownloadOptions, MADownloadConfig, NSObject;

@interface SUCoreMobileAsset : NSObject {

	BOOL _downloadingAsset;
	BOOL _checkedDownloadState;
	BOOL _assetDownloaded;
	BOOL _removingAsset;
	BOOL _assetRemoved;
	id _maDelegate;
	NSString* _updateUUID;
	MAAsset* _asset;
	MADownloadOptions* _downloadOptions;
	MADownloadConfig* _currentDownloadConfig;
	MADownloadConfig* _requestedDownloadConfig;
	MADownloadConfig* _desiredDownloadConfig;
	NSObject*<OS_dispatch_queue> _clientDelegateCallbackQueue;
	NSObject*<OS_dispatch_queue> _clientCompletionQueue;
	NSObject*<OS_dispatch_queue> _maControlQueue;
	NSString* _operationName;
	/*^block*/id _downloadCompletion;
	/*^block*/id _alterDownloadCompletion;
	/*^block*/id _removeCompletion;
	NSObject*<OS_os_transaction> _downloadAssetTransaction;
	NSObject*<OS_os_transaction> _alterDownloadTransaction;
	NSObject*<OS_os_transaction> _removeAssetTransaction;

}

@property (nonatomic,__weak,readonly) id maDelegate;                                                  //@synthesize maDelegate=_maDelegate - In the implementation block
@property (nonatomic,retain) NSString * updateUUID;                                                   //@synthesize updateUUID=_updateUUID - In the implementation block
@property (nonatomic,retain) MAAsset * asset;                                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) MADownloadOptions * downloadOptions;                                     //@synthesize downloadOptions=_downloadOptions - In the implementation block
@property (nonatomic,retain) MADownloadConfig * currentDownloadConfig;                                //@synthesize currentDownloadConfig=_currentDownloadConfig - In the implementation block
@property (nonatomic,retain) MADownloadConfig * requestedDownloadConfig;                              //@synthesize requestedDownloadConfig=_requestedDownloadConfig - In the implementation block
@property (nonatomic,retain) MADownloadConfig * desiredDownloadConfig;                                //@synthesize desiredDownloadConfig=_desiredDownloadConfig - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientDelegateCallbackQueue;              //@synthesize clientDelegateCallbackQueue=_clientDelegateCallbackQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientCompletionQueue;                    //@synthesize clientCompletionQueue=_clientCompletionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> maControlQueue;                           //@synthesize maControlQueue=_maControlQueue - In the implementation block
@property (assign,nonatomic) BOOL downloadingAsset;                                                   //@synthesize downloadingAsset=_downloadingAsset - In the implementation block
@property (assign,nonatomic) BOOL checkedDownloadState;                                               //@synthesize checkedDownloadState=_checkedDownloadState - In the implementation block
@property (assign,nonatomic) BOOL assetDownloaded;                                                    //@synthesize assetDownloaded=_assetDownloaded - In the implementation block
@property (assign,nonatomic) BOOL removingAsset;                                                      //@synthesize removingAsset=_removingAsset - In the implementation block
@property (assign,nonatomic) BOOL assetRemoved;                                                       //@synthesize assetRemoved=_assetRemoved - In the implementation block
@property (nonatomic,retain) NSString * operationName;                                                //@synthesize operationName=_operationName - In the implementation block
@property (nonatomic,copy) id downloadCompletion;                                                     //@synthesize downloadCompletion=_downloadCompletion - In the implementation block
@property (nonatomic,copy) id alterDownloadCompletion;                                                //@synthesize alterDownloadCompletion=_alterDownloadCompletion - In the implementation block
@property (nonatomic,copy) id removeCompletion;                                                       //@synthesize removeCompletion=_removeCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> downloadAssetTransaction;                   //@synthesize downloadAssetTransaction=_downloadAssetTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> alterDownloadTransaction;                   //@synthesize alterDownloadTransaction=_alterDownloadTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> removeAssetTransaction;                     //@synthesize removeAssetTransaction=_removeAssetTransaction - In the implementation block
+(id)downloadConfigSummary:(id)arg1 ;
+(BOOL)downloadConfig:(id)arg1 isEqualToConfig:(id)arg2 ;
+(id)downloadConfigCopy:(id)arg1 ;
+(id)downloadOptionsDescription:(id)arg1 ;
+(void)reloadDescriptor:(id)arg1 allowingDifferences:(id)arg2 forceReload:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)_callReloadCompletion:(/*^block*/id)arg1 withDescriptor:(id)arg2 suError:(id)arg3 docError:(id)arg4 ;
+(void)reloadDescriptor:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)description;
-(id)downloadCompletion;
-(void)setDownloadOptions:(MADownloadOptions *)arg1 ;
-(MADownloadOptions *)downloadOptions;
-(MAAsset *)asset;
-(void)removeAsset:(/*^block*/id)arg1 ;
-(void)setAsset:(MAAsset *)arg1 ;
-(NSString *)operationName;
-(void)setOperationName:(NSString *)arg1 ;
-(BOOL)assetDownloaded;
-(id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)alterDownloadOptions:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientCompletionQueue;
-(NSString *)updateUUID;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2 ;
-(void)removeAsset;
-(NSObject*<OS_dispatch_queue>)clientDelegateCallbackQueue;
-(id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3 withCallbackQueue:(id)arg4 withCompletionQueue:(id)arg5 ;
-(id)maDelegate;
-(void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadAssetWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)alterDownloadOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)maControlQueue;
-(id)alterDownloadCompletion;
-(BOOL)removingAsset;
-(BOOL)downloadingAsset;
-(void)setAlterDownloadCompletion:(id)arg1 ;
-(void)setAlterDownloadTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(MADownloadConfig *)desiredDownloadConfig;
-(MADownloadConfig *)requestedDownloadConfig;
-(void)setDesiredDownloadConfig:(MADownloadConfig *)arg1 ;
-(MADownloadConfig *)currentDownloadConfig;
-(void)_issueAlterDownloadCompletion:(long long)arg1 forReason:(id)arg2 ;
-(void)_requestChangeConfigDownload:(id)arg1 ;
-(void)_trackMAAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3 ;
-(void)_reportAnomaly:(id)arg1 issuingCompletion:(/*^block*/id)arg2 ;
-(void)setRemoveAssetTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setRemoveCompletion:(id)arg1 ;
-(void)setRemovingAsset:(BOOL)arg1 ;
-(void)setAssetDownloaded:(BOOL)arg1 ;
-(void)setAssetRemoved:(BOOL)arg1 ;
-(id)_updateAssetTypeName;
-(void)_cancelDownloadAndPurge;
-(void)setDownloadAssetTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setCurrentDownloadConfig:(MADownloadConfig *)arg1 ;
-(void)setRequestedDownloadConfig:(MADownloadConfig *)arg1 ;
-(void)setDownloadCompletion:(id)arg1 ;
-(void)setDownloadingAsset:(BOOL)arg1 ;
-(void)_registerProgressAndStartDownload;
-(BOOL)assetRemoved;
-(void)_reportDownloadProgress:(id)arg1 ;
-(void)_reportDownloadFailed:(id)arg1 ;
-(void)_trackMobileAssetBegin:(id)arg1 ;
-(void)_trackMobileAssetEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3 ;
-(void)_reportDownloaded:(id)arg1 ;
-(void)_trackMobileAssetBegin:(id)arg1 withIdentifier:(id)arg2 ;
-(void)_trackMobileAssetEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4 ;
-(BOOL)checkedDownloadState;
-(void)setCheckedDownloadState:(BOOL)arg1 ;
-(NSObject*<OS_os_transaction>)alterDownloadTransaction;
-(void)_reportAssetRemoved;
-(void)_reportAssetRemoveFailed:(id)arg1 ;
-(NSObject*<OS_os_transaction>)downloadAssetTransaction;
-(id)removeCompletion;
-(NSObject*<OS_os_transaction>)removeAssetTransaction;
-(void)_reportAnomaly:(id)arg1 ;
-(void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2 ;
-(void)downloadConfigStatus:(/*^block*/id)arg1 ;
-(void)setUpdateUUID:(NSString *)arg1 ;
@end

