/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
#import <AVFCore/AVContentKeyRecipient.h>

@class AVURLAssetInternal, NSString, AVAssetResourceLoader, NSURL;

@interface AVURLAsset : AVAsset <AVContentKeyRecipient> {

	AVURLAssetInternal* _URLAsset;

}

@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly; 
@property (nonatomic,readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) AVAssetResourceLoader * resourceLoader; 
@property (nonatomic,readonly) BOOL mayRequireContentKeysForMediaDataProcessing; 
@property (nonatomic,copy,readonly) NSURL * URL; 
+(id)im_optionsByApplyingStealthStyle:(long long)arg1 toBaseOptions:(id)arg2 ;
+(id)assetWithIdentifierURL:(id)arg1 ;
+(id)newAssetWithIdentifierURL:(id)arg1 ;
+(void)mediaserverdCrashed;
+(id)blackAsset;
+(id)emptyAsset;
+(id)URLAssetWithURL:(id)arg1 options:(id)arg2 ;
+(id)writableTypeIdentifiersForItemProvider;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1 ;
+(id)readableTypeIdentifiersForItemProvider;
+(long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1 ;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(BOOL)arg3 error:(id*)arg4 ;
+(BOOL)isPlayableExtendedMIMEType:(id)arg1 ;
+(id)audiovisualMIMETypes;
+(id)audiovisualTypes;
+(id)_figFileMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_figFileUTIs;
+(id)_figFilePathExtensions;
+(id)_fileUTTypes;
+(id)_streamingUTTypes;
+(id)_UTTypes;
+(id)_figMIMETypes;
+(id)_avfValidationPlist;
+(id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg1 ;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg1 assetLoggingIdentifier:(id)arg2 figAssetCreationFlags:(unsigned long long*)arg3 error:(id*)arg4 ;
+(id)_figHFSFileTypes;
+(id)instanceIdentifierMapTable;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg1 ;
+(void)setUserInfoObject:(id)arg1 forURLAsset:(id)arg2 ;
+(id)userInfoObjectForURLAsset:(id)arg1 ;
-(void)mpc_addDownloadCompletionHandler:(/*^block*/id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSURL *)URL;
-(unsigned long long)downloadToken;
-(id)resolvedURL;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)_instanceIdentifier;
-(id)tracks;
-(NSString *)cacheKey;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(AVAssetResourceLoader *)resourceLoader;
-(void)cancelLoading;
-(id)assetCache;
-(id)creationOptions;
-(id)lyrics;
-(void)expire;
-(id)contentKeySession;
-(void)_addFigAssetNotifications;
-(void)_removeFigAssetNotifications;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)_absoluteURL;
-(unsigned long long)referenceRestrictions;
-(void)_tracksDidChange;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_hasResourceLoaderDelegate;
-(Class)_classForFigAssetInspectorLoader;
-(void)_setAssetInspectorLoader:(id)arg1 ;
-(id)_resourceLoaderWithRemoteHandlerContext:(id)arg1 ;
-(id)_errorForFigNotificationPayload:(CFDictionaryRef)arg1 key:(CFStringRef)arg2 ;
-(void)_removeUserInfoObject;
-(Class)_classForAssetTracks;
-(void)_ensureAssetDownloadCache;
-(id)_managedAssetCache;
-(BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
-(BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
-(id)identifyingTagClass;
-(id)identifyingTag;
-(id)originalNetworkContentURL;
-(id)SHA1Digest;
-(id)downloadDestinationURL;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(void)_setUserInfoObject:(id)arg1 ;
-(BOOL)mayRequireContentKeysForMediaDataProcessing;
-(int)_attachToContentKeySession:(id)arg1 failedSinceAlreadyAttachedToAnotherSession:(BOOL*)arg2 ;
-(BOOL)_attachedToExternalContentKeySession;
-(id)_installHandlerForNSURLSessionConfiguration:(id)arg1 queue:(id)arg2 ;
@end

