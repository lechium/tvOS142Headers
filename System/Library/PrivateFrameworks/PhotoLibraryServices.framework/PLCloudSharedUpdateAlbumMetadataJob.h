/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:25 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {

	NSDictionary* _metadata;

}

@property (nonatomic,retain) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(void)updateAlbumMetadata:(id)arg1 ;
-(id)description;
-(void)run;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(id)_argumentsDictionaryAsData:(id)arg1 ;
-(id)_argumentsDictionaryFromXPCEvent:(id)arg1 ;
@end

