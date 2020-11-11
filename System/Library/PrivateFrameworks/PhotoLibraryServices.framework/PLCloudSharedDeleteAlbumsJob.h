/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {

	NSArray* _albumCloudGUIDsToDelete;
	NSString* _inviterAddress;

}

@property (nonatomic,retain) NSArray * albumCloudGUIDsToDelete;              //@synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete - In the implementation block
@property (nonatomic,retain) NSString * inviterAddress;                      //@synthesize inviterAddress=_inviterAddress - In the implementation block
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1 ;
+(void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2 ;
-(id)description;
-(void)run;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(NSArray *)albumCloudGUIDsToDelete;
-(void)setAlbumCloudGUIDsToDelete:(NSArray *)arg1 ;
-(NSString *)inviterAddress;
-(void)setInviterAddress:(NSString *)arg1 ;
@end

