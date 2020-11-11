/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:47 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL, ATStoreInfo, NSError, NSData, NSNumber, NMSMediaItemDownloadInfo;

@interface ATAsset : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _dataclass;
	NSString* _assetType;
	NSDictionary* _variantOptions;
	NSString* _localPath;
	NSURL* _icon;
	NSString* _prettyName;
	BOOL _isDownload;
	BOOL _isRestore;
	BOOL _bypassStore;
	BOOL _installOnly;
	BOOL _readyForStore;
	BOOL _isPrioritized;
	BOOL _isForeground;
	BOOL _lyricsEmbeddedInAsset;
	long long _storePID;
	unsigned _priority;
	float _downloadProgress;
	float _installProgress;
	BOOL _powerRequired;
	BOOL _canUseCellularData;
	int _protectionType;
	ATStoreInfo* _storeInfo;
	NSString* _storePlist;
	NSString* _infoPlist;
	NSError* _error;
	NSDictionary* _clientParams;
	double _transferStartTime;
	double _transferDuration;
	double _queueStartTime;
	double _queueDuration;
	NSData* _resumeData;
	long long _enqueueSource;
	BOOL _allowDownloadOnConstrainedNetwork;
	unsigned long long _downloadPauseReason;
	NSNumber* _downloadSourceContainerId;
	BOOL _downloadOnly;
	BOOL _installStarted;
	BOOL _legacy;
	BOOL _installed;
	long long _assetState;
	NMSMediaItemDownloadInfo* _mediaItemDownloadInfo;
	unsigned long long _totalBytes;
	unsigned long long _bytesRemaining;
	unsigned long long _completedAssetParts;
	/*^block*/id _completionBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                //@synthesize progressBlock=_progressBlock - In the implementation block
@property (assign,nonatomic) unsigned long long completedAssetParts;                        //@synthesize completedAssetParts=_completedAssetParts - In the implementation block
@property (assign,getter=isLegacy,nonatomic) BOOL legacy;                                   //@synthesize legacy=_legacy - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;                             //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) double transferStartTime;                                      //@synthesize transferStartTime=_transferStartTime - In the implementation block
@property (assign,nonatomic) double queueStartTime;                                         //@synthesize queueStartTime=_queueStartTime - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * dataclass;                                          //@synthesize dataclass=_dataclass - In the implementation block
@property (nonatomic,retain) NSString * assetType;                                          //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSDictionary * variantOptions;                                 //@synthesize variantOptions=_variantOptions - In the implementation block
@property (nonatomic,retain) NSString * prettyName;                                         //@synthesize prettyName=_prettyName - In the implementation block
@property (nonatomic,retain) NSString * path;                                               //@synthesize localPath=_localPath - In the implementation block
@property (nonatomic,retain) NSURL * icon;                                                  //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL isDownload;                                               //@synthesize isDownload=_isDownload - In the implementation block
@property (assign,nonatomic) BOOL isRestore;                                                //@synthesize isRestore=_isRestore - In the implementation block
@property (assign,nonatomic) BOOL bypassStore;                                              //@synthesize bypassStore=_bypassStore - In the implementation block
@property (assign,nonatomic) BOOL installOnly;                                              //@synthesize installOnly=_installOnly - In the implementation block
@property (assign,nonatomic) BOOL downloadOnly;                                             //@synthesize downloadOnly=_downloadOnly - In the implementation block
@property (assign,nonatomic) BOOL readyForStore;                                            //@synthesize readyForStore=_readyForStore - In the implementation block
@property (assign,nonatomic) BOOL isPrioritized;                                            //@synthesize isPrioritized=_isPrioritized - In the implementation block
@property (assign,nonatomic) BOOL isForeground;                                             //@synthesize isForeground=_isForeground - In the implementation block
@property (assign,nonatomic) BOOL lyricsEmbeddedInAsset;                                    //@synthesize lyricsEmbeddedInAsset=_lyricsEmbeddedInAsset - In the implementation block
@property (assign,nonatomic) long long storePID;                                            //@synthesize storePID=_storePID - In the implementation block
@property (assign,nonatomic) unsigned priority;                                             //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) float downloadProgress;                                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) float installProgress;                                         //@synthesize installProgress=_installProgress - In the implementation block
@property (nonatomic,retain) ATStoreInfo * storeInfo;                                       //@synthesize storeInfo=_storeInfo - In the implementation block
@property (nonatomic,retain) NSString * storePlist;                                         //@synthesize storePlist=_storePlist - In the implementation block
@property (nonatomic,retain) NSString * infoPlist;                                          //@synthesize infoPlist=_infoPlist - In the implementation block
@property (nonatomic,retain) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL installStarted;                                           //@synthesize installStarted=_installStarted - In the implementation block
@property (assign,nonatomic) long long assetState;                                          //@synthesize assetState=_assetState - In the implementation block
@property (assign,nonatomic) double queueDuration;                                          //@synthesize queueDuration=_queueDuration - In the implementation block
@property (assign,nonatomic) double transferDuration;                                       //@synthesize transferDuration=_transferDuration - In the implementation block
@property (assign,nonatomic) int protectionType;                                            //@synthesize protectionType=_protectionType - In the implementation block
@property (nonatomic,retain) NSData * resumeData;                                           //@synthesize resumeData=_resumeData - In the implementation block
@property (assign,nonatomic) long long enqueueSource;                                       //@synthesize enqueueSource=_enqueueSource - In the implementation block
@property (assign,nonatomic) BOOL allowDownloadOnConstrainedNetwork;                        //@synthesize allowDownloadOnConstrainedNetwork=_allowDownloadOnConstrainedNetwork - In the implementation block
@property (nonatomic,retain) NMSMediaItemDownloadInfo * mediaItemDownloadInfo;              //@synthesize mediaItemDownloadInfo=_mediaItemDownloadInfo - In the implementation block
@property (assign,nonatomic) unsigned long long downloadPauseReason;                        //@synthesize downloadPauseReason=_downloadPauseReason - In the implementation block
@property (nonatomic,retain) NSNumber * downloadSourceContainerId;                          //@synthesize downloadSourceContainerId=_downloadSourceContainerId - In the implementation block
@property (assign,nonatomic) BOOL powerRequired;                                            //@synthesize powerRequired=_powerRequired - In the implementation block
@property (assign,nonatomic) BOOL canUseCellularData;                                       //@synthesize canUseCellularData=_canUseCellularData - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                                 //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long bytesRemaining;                             //@synthesize bytesRemaining=_bytesRemaining - In the implementation block
@property (nonatomic,retain) NSDictionary * clientParams;                                   //@synthesize clientParams=_clientParams - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)downloadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3 ;
+(id)uploadAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 sourcePath:(id)arg3 prettyName:(id)arg4 ;
+(id)iCloudRestoreAssetWithIdentifier:(id)arg1 dataclass:(id)arg2 assetType:(id)arg3 restorePath:(id)arg4 displayName:(id)arg5 ;
+(id)assetWithSerializedAsset:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setCompletionBlock:(id)arg1 ;
-(NSData *)resumeData;
-(void)setError:(NSError *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(unsigned)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(unsigned)arg1 ;
-(id)completionBlock;
-(id)shortDescription;
-(BOOL)isForeground;
-(float)installProgress;
-(BOOL)isInstalled;
-(NSURL *)icon;
-(void)setIcon:(NSURL *)arg1 ;
-(unsigned long long)totalBytes;
-(void)setInstalled:(BOOL)arg1 ;
-(NSString *)assetType;
-(void)setAssetType:(NSString *)arg1 ;
-(NSString *)dataclass;
-(id)progressBlock;
-(void)setDataclass:(NSString *)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(ATStoreInfo *)storeInfo;
-(void)setStoreInfo:(ATStoreInfo *)arg1 ;
-(BOOL)isRestore;
-(void)setIsRestore:(BOOL)arg1 ;
-(void)setTotalBytes:(unsigned long long)arg1 ;
-(void)setLegacy:(BOOL)arg1 ;
-(float)downloadProgress;
-(void)setDownloadProgress:(float)arg1 ;
-(BOOL)powerRequired;
-(BOOL)isLegacy;
-(int)protectionType;
-(void)setResumeData:(NSData *)arg1 ;
-(BOOL)canUseCellularData;
-(void)setCanUseCellularData:(BOOL)arg1 ;
-(unsigned long long)downloadPauseReason;
-(BOOL)downloadOnly;
-(void)setProtectionType:(int)arg1 ;
-(id)_variantDescription;
-(id)_ATAssetTypeFromDataClass:(id)arg1 ;
-(unsigned long long)assetParts;
-(id)initWithIdentifier:(id)arg1 dataclass:(id)arg2 prettyName:(id)arg3 ;
-(NSDictionary *)variantOptions;
-(void)setVariantOptions:(NSDictionary *)arg1 ;
-(NSString *)prettyName;
-(void)setPrettyName:(NSString *)arg1 ;
-(BOOL)isDownload;
-(BOOL)bypassStore;
-(void)setBypassStore:(BOOL)arg1 ;
-(BOOL)installOnly;
-(void)setInstallOnly:(BOOL)arg1 ;
-(BOOL)readyForStore;
-(void)setReadyForStore:(BOOL)arg1 ;
-(BOOL)isPrioritized;
-(void)setIsPrioritized:(BOOL)arg1 ;
-(void)setIsForeground:(BOOL)arg1 ;
-(BOOL)lyricsEmbeddedInAsset;
-(void)setLyricsEmbeddedInAsset:(BOOL)arg1 ;
-(long long)storePID;
-(void)setStorePID:(long long)arg1 ;
-(void)setInstallProgress:(float)arg1 ;
-(NSString *)storePlist;
-(void)setStorePlist:(NSString *)arg1 ;
-(NSString *)infoPlist;
-(void)setInfoPlist:(NSString *)arg1 ;
-(NSDictionary *)clientParams;
-(void)setClientParams:(NSDictionary *)arg1 ;
-(double)transferStartTime;
-(void)setTransferStartTime:(double)arg1 ;
-(double)transferDuration;
-(void)setTransferDuration:(double)arg1 ;
-(double)queueStartTime;
-(void)setQueueStartTime:(double)arg1 ;
-(double)queueDuration;
-(void)setQueueDuration:(double)arg1 ;
-(unsigned long long)completedAssetParts;
-(void)setCompletedAssetParts:(unsigned long long)arg1 ;
-(void)setPowerRequired:(BOOL)arg1 ;
-(long long)enqueueSource;
-(void)setEnqueueSource:(long long)arg1 ;
-(BOOL)allowDownloadOnConstrainedNetwork;
-(void)setAllowDownloadOnConstrainedNetwork:(BOOL)arg1 ;
-(void)setDownloadPauseReason:(unsigned long long)arg1 ;
-(NSNumber *)downloadSourceContainerId;
-(void)setDownloadSourceContainerId:(NSNumber *)arg1 ;
-(id)serializedAsset;
-(long long)assetState;
-(void)setAssetState:(long long)arg1 ;
-(void)setDownloadOnly:(BOOL)arg1 ;
-(BOOL)installStarted;
-(void)setInstallStarted:(BOOL)arg1 ;
-(NMSMediaItemDownloadInfo *)mediaItemDownloadInfo;
-(void)setMediaItemDownloadInfo:(NMSMediaItemDownloadInfo *)arg1 ;
-(unsigned long long)bytesRemaining;
-(void)setBytesRemaining:(unsigned long long)arg1 ;
@end

