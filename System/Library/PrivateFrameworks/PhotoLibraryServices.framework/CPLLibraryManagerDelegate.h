/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerHasStatusChanges:(id)arg1;
-(void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(/*^block*/id)arg4;
-(void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(/*^block*/id)arg2;
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableNameForLibraryManager:(id)arg1;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;

@end

