/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSSet, PLPerson, PLDetectedFace;

@interface PLDetectedFaceGroup : PLManagedObject

@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * detectedFaces; 
@property (assign,nonatomic) int unnamedFaceCount; 
@property (nonatomic,retain) PLPerson * associatedPerson; 
@property (nonatomic,retain) PLDetectedFace * keyFace; 
@property (assign,nonatomic) int personBuilderState; 
+(id)entityName;
+(id)detectedFaceGroupWithUUID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)batchFetchFaceGroupByFaceUUIDWithFaceUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)awakeFromInsert;
-(void)willSave;
-(id)mutableDetectedFaces;
-(void)refreshFaces;
@end
