/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:23 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject {

	PLLibraryServicesManager* _libraryServicesManager;

}

@property (nonatomic,readonly) PLLibraryServicesManager * libraryServicesManager;              //@synthesize libraryServicesManager=_libraryServicesManager - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(PLPhotoLibrary *)photoLibrary;
-(PLLibraryServicesManager *)libraryServicesManager;
-(id)initWithLibraryServicesManager:(id)arg1 ;
@end

