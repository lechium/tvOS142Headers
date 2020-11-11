/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSArray, NSDictionary;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob {

	BOOL _isNewAlbum;
	NSString* _publishAlbumCloudGUID;
	NSArray* _originalAssetUUIDs;
	NSArray* _stillImageOnlyAssetUUIDs;
	NSDictionary* _customExportsInfo;
	NSDictionary* _trimmedVideoPathInfo;
	NSString* _batchCommentText;

}

@property (nonatomic,retain) NSString * publishAlbumCloudGUID;                 //@synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID - In the implementation block
@property (nonatomic,retain) NSArray * originalAssetUUIDs;                     //@synthesize originalAssetUUIDs=_originalAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * stillImageOnlyAssetUUIDs;               //@synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * customExportsInfo;                 //@synthesize customExportsInfo=_customExportsInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * trimmedVideoPathInfo;              //@synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo - In the implementation block
@property (assign,nonatomic) BOOL isNewAlbum;                                  //@synthesize isNewAlbum=_isNewAlbum - In the implementation block
@property (nonatomic,retain) NSString * batchCommentText;                      //@synthesize batchCommentText=_batchCommentText - In the implementation block
+(void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(BOOL)arg6 batchCommentText:(id)arg7 ;
+(id)videoComplementURLForSharingFromAsset:(id)arg1 ;
-(id)description;
-(void)run;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(void)executeDaemonOperation;
-(void)retrieveURLsFromAsset:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id*)arg3 videoComplementURL:(id*)arg4 ;
-(NSString *)publishAlbumCloudGUID;
-(void)setPublishAlbumCloudGUID:(NSString *)arg1 ;
-(NSArray *)originalAssetUUIDs;
-(void)setOriginalAssetUUIDs:(NSArray *)arg1 ;
-(NSArray *)stillImageOnlyAssetUUIDs;
-(void)setStillImageOnlyAssetUUIDs:(NSArray *)arg1 ;
-(NSDictionary *)customExportsInfo;
-(void)setCustomExportsInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)trimmedVideoPathInfo;
-(void)setTrimmedVideoPathInfo:(NSDictionary *)arg1 ;
-(BOOL)isNewAlbum;
-(void)setIsNewAlbum:(BOOL)arg1 ;
-(NSString *)batchCommentText;
-(void)setBatchCommentText:(NSString *)arg1 ;
@end

