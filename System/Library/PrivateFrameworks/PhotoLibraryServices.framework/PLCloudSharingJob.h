/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, PLPhotoLibrary;

@interface PLCloudSharingJob : PLDaemonJob {

	NSString* _archiveFilename;
	BOOL _shouldPrioritize;

}

@property (nonatomic,readonly) PLPhotoLibrary * transientPhotoLibrary; 
@property (assign,nonatomic) BOOL shouldPrioritize;                                 //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
+(id)lowPriorityOperationQueue;
+(id)highPriorityOperationQueue;
+(id)recoveredEventsWithPathManager:(id)arg1 ;
+(void)deleteAllRecoveryEventsWithPathManager:(id)arg1 ;
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)runDaemonSide;
-(BOOL)shouldPrioritize;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(PLPhotoLibrary *)transientPhotoLibrary;
-(void)archiveXPCToDisk:(id)arg1 ;
-(void)runAndWaitForMessageToBeSent;
-(void)setShouldPrioritize:(BOOL)arg1 ;
@end
