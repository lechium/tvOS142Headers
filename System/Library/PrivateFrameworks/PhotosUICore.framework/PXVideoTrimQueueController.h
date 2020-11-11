/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXVideoTrimQueueControllerDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableArray, NSMutableDictionary, PLPhotoLibrary, NSArray, NSDictionary, PLManagedAlbum, NSString;

@interface PXVideoTrimQueueController : NSObject {

	double _startTime;
	double _endTime;
	NSMutableArray* _sourcesToTransform;
	NSMutableArray* _trimQueue;
	NSMutableDictionary* _trimmedVideoInfo;
	struct {
		unsigned hasWillTrim : 1;
		unsigned hasDidTrim : 1;
		unsigned hasDidFinish : 1;
		unsigned hasDidCancel : 1;
	}  _delegateFlags;
	PLPhotoLibrary* _photoLibrary;
	id<PXVideoTrimQueueControllerDelegate> _delegate;
	NSArray* _videosSources;
	NSDictionary* _videosSourcesSharingInfo;
	NSDictionary* _customExportsInfo;
	PLManagedAlbum* _album;
	NSString* _albumName;
	NSArray* _recipients;
	NSString* _commentText;

}

@property (assign,nonatomic,__weak) id<PXVideoTrimQueueControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * videosSources;                                           //@synthesize videosSources=_videosSources - In the implementation block
@property (nonatomic,readonly) NSDictionary * videosSourcesSharingInfo;                           //@synthesize videosSourcesSharingInfo=_videosSourcesSharingInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * customExportsInfo;                                  //@synthesize customExportsInfo=_customExportsInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * trimmedVideoInfo;                                   //@synthesize trimmedVideoInfo=_trimmedVideoInfo - In the implementation block
@property (nonatomic,readonly) PLManagedAlbum * album;                                            //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumName;                                                //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain) NSString * commentText;                                              //@synthesize commentText=_commentText - In the implementation block
+(BOOL)areVideoSourcesStreamShareSources:(id)arg1 ;
+(id)videoInfoKeyForSource:(id)arg1 ;
+(double)durationFromVideoAtURL:(id)arg1 ;
+(id)photoLibraryFromSources:(id)arg1 album:(id)arg2 ;
-(id<PXVideoTrimQueueControllerDelegate>)delegate;
-(void)setDelegate:(id<PXVideoTrimQueueControllerDelegate>)arg1 ;
-(void)start;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)recipients;
-(PLManagedAlbum *)album;
-(NSString *)albumName;
-(void)setAlbumName:(NSString *)arg1 ;
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(NSDictionary *)customExportsInfo;
-(void)cleanupResources;
-(void)editVideoViewControllerDidCancel:(id)arg1 ;
-(void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)_presentViewController:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 videoSources:(id)arg2 videoSourcesSharingInfo:(id)arg3 customExportsInfo:(id)arg4 album:(id)arg5 ;
-(void)_dismissViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showTrimViewControllerForSource:(id)arg1 ;
-(id)alternateSourceToUseIfNeededFromSource:(id)arg1 ;
-(BOOL)_shouldShowVideoTooLongAlertForVideoSource:(id)arg1 ;
-(void)_dequeueTrimmingControl;
-(id)_videoTooLongAlertController;
-(void)_trimVideoSource:(id)arg1 ;
-(void)_sendDidFinish;
-(NSArray *)videosSources;
-(NSDictionary *)videosSourcesSharingInfo;
-(NSDictionary *)trimmedVideoInfo;
@end

