/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:24 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset, PLCloudFeedCommentsEntry;

@interface PLCloudSharedComment : PLManagedObject

@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSString * commenterHashedPersonID; 
@property (nonatomic,retain) NSNumber * isDeletable; 
@property (nonatomic,retain) NSNumber * isLike; 
@property (nonatomic,retain) NSNumber * isCaption; 
@property (nonatomic,retain) NSNumber * isBatchComment; 
@property (nonatomic,retain) NSNumber * isMyComment; 
@property (nonatomic,retain) NSString * commentText; 
@property (nonatomic,retain) NSDate * commentDate; 
@property (nonatomic,retain) NSDate * commentClientDate; 
@property (nonatomic,retain) PLManagedAsset * commentedAsset; 
@property (nonatomic,retain) PLManagedAsset * likedAsset; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedCommentEntry; 
@property (nonatomic,retain) PLCloudFeedCommentsEntry * cloudFeedLikeCommentEntry; 
@property (nonatomic,readonly) BOOL isLikeBoolValue; 
@property (nonatomic,__weak,readonly) NSString * commenterEmail; 
@property (nonatomic,__weak,readonly) NSString * commenterFirstName; 
@property (nonatomic,__weak,readonly) NSString * commenterLastName; 
@property (nonatomic,__weak,readonly) NSString * commenterFullName; 
@property (nonatomic,__weak,readonly) PLCloudFeedCommentsEntry * cloudFeedEntry; 
@property (nonatomic,retain) NSString * commentType; 
+(id)entityName;
+(id)cloudSharedCommentsWithCommentDate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewCommentIntoAsset:(id)arg1 commentDate:(id)arg2 withText:(id)arg3 isLike:(BOOL)arg4 isMyComment:(BOOL)arg5 inLibrary:(id)arg6 ;
+(id)cloudSharedCommentsWithGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)_cloudSharedCommentsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)cloudSharedCommentWithGUID:(id)arg1 inLibrary:(id)arg2 ;
-(id)init;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)asset;
-(BOOL)matchesCommentText:(id)arg1 isLike:(BOOL)arg2 ;
-(BOOL)isLikeBoolValue;
-(BOOL)isInterestingForAlbumsSorting;
-(id)commenterDisplayName;
-(BOOL)shouldNotifyAsNotificationWithMediaStreamInfo:(id)arg1 asCaptionOnly:(BOOL*)arg2 ;
-(NSString *)commenterEmail;
-(PLCloudFeedCommentsEntry *)cloudFeedEntry;
-(BOOL)_isInterestingToUser;
-(BOOL)canBeDeletedByUser;
-(NSString *)commenterFirstName;
-(NSString *)commenterLastName;
-(NSString *)commenterFullName;
@end

