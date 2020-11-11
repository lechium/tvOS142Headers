/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (nonatomic,copy) NSData * projectData; 
@property (nonatomic,copy) NSString * projectDocumentType; 
@property (nonatomic,copy) NSString * projectExtensionIdentifier; 
@property (nonatomic,copy) NSString * projectRenderUuid; 
+(id)entityName;
+(id)validKindsForPersistence;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 documentType:(id)arg3 projectExtensionIdentifier:(id)arg4 ;
+(BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)arg1 error:(id*)arg2 ;
-(void)awakeFromInsert;
-(void)prepareForDeletion;
-(void)willSave;
-(id)projectPreviewImageData;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)supportsAssetOrderKeys;
-(BOOL)setProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)duplicateProjectPreviewImageData:(id)arg1 error:(id*)arg2 ;
-(id)_previewImageFilename;
@end

