/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:23:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGalleryWorkflow.h>

@class CKRecordID, NSString, NSNumber, NSArray, WFWorkflowRecord, NSDate, WFFileRepresentation, WFWorkflowIcon;

@interface WFMutableGalleryWorkflow : WFGalleryWorkflow {

	CKRecordID* identifier;
	NSString* name;
	NSString* shortDescription;
	NSString* longDescription;
	NSNumber* searchable;
	long long minVersion;
	NSArray* hiddenRegions;
	WFWorkflowRecord* workflowRecord;
	NSDate* createdAt;
	NSDate* modifiedAt;
	NSString* language;
	CKRecordID* base;
	NSString* persistentIdentifier;
	WFFileRepresentation* shortcutFile;
	WFFileRepresentation* iconFile;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * shortDescription; 
@property (nonatomic,copy) NSString * longDescription; 
@property (nonatomic,retain) WFWorkflowIcon * icon; 
@property (nonatomic,retain) WFWorkflowRecord * workflowRecord; 
@property (nonatomic,retain) NSNumber * searchable; 
@property (assign,nonatomic) long long minVersion; 
@property (nonatomic,retain) NSArray * hiddenRegions; 
@property (nonatomic,retain) NSDate * createdAt; 
@property (nonatomic,retain) NSDate * modifiedAt; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
@property (nonatomic,copy) NSString * persistentIdentifier; 
@property (nonatomic,retain) WFFileRepresentation * shortcutFile; 
@property (nonatomic,retain) WFFileRepresentation * iconFile; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSString *)persistentIdentifier;
-(NSString *)shortDescription;
-(void)setIcon:(WFWorkflowIcon *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(void)setSearchable:(NSNumber *)arg1 ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(long long)minVersion;
-(void)setMinVersion:(long long)arg1 ;
-(WFFileRepresentation *)iconFile;
-(void)setIconFile:(WFFileRepresentation *)arg1 ;
-(WFWorkflowRecord *)workflowRecord;
-(NSDate *)modifiedAt;
-(void)setModifiedAt:(NSDate *)arg1 ;
-(NSNumber *)searchable;
-(NSArray *)hiddenRegions;
-(WFFileRepresentation *)shortcutFile;
-(void)setShortcutFile:(WFFileRepresentation *)arg1 ;
-(void)setWorkflowRecord:(WFWorkflowRecord *)arg1 ;
-(void)setHiddenRegions:(NSArray *)arg1 ;
@end
