/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:37 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (nonatomic,retain) NSString * contentID; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSString * mimeType; 
@property (nonatomic,retain) NoteObject * note; 
+(id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2 ;
+(BOOL)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2 ;
-(void)prepareForDeletion;
-(BOOL)persistAttachmentData:(id)arg1 error:(id*)arg2 ;
-(id)attachmentDataFileURLWithError:(id*)arg1 ;
-(id)attachmentDataWithError:(id*)arg1 ;
@end

