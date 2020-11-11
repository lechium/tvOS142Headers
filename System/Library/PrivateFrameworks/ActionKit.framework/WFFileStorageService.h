/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, WFContentAttributionSet;


@protocol WFFileStorageService <NSObject>
@property (nonatomic,readonly) Class objectRepresentationClass; 
@property (nonatomic,readonly) Class accessResourceClass; 
@property (nonatomic,readonly) NSString * storageLocationPrefix; 
@property (nonatomic,readonly) BOOL hasPublicURLs; 
@property (nonatomic,readonly) BOOL supportsJumpingToSubdirectoryInUI; 
@property (nonatomic,readonly) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,readonly) WFContentAttributionSet * contentAttributionSet; 
@optional
-(void)retrieveFilesWithUserInterface:(id)arg1 initialDirectoryPath:(id)arg2 consumingBundleID:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 userInterface:(id)arg3 consumingBundleID:(id)arg4 options:(unsigned long long)arg5 progress:(id)arg6 completionHandler:(/*^block*/id)arg7;

@required
+(id)serviceName;
+(Class)resultItemClass;
-(NSString *)associatedAppBundleIdentifier;
-(void)retrieveFilesAtPath:(id)arg1 options:(unsigned long long)arg2 progress:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)saveFiles:(id)arg1 withManagedLevel:(unsigned long long)arg2 toPath:(id)arg3 options:(unsigned long long)arg4 progress:(id)arg5 completionHandler:(/*^block*/id)arg6;
-(void)getSharingURLsForFiles:(id)arg1 usePublicURLs:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteFiles:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createFolderAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)appendText:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4;
-(void)searchFiles:(id)arg1 inPath:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(Class)objectRepresentationClass;
-(Class)accessResourceClass;
-(NSString *)storageLocationPrefix;
-(BOOL)hasPublicURLs;
-(BOOL)supportsJumpingToSubdirectoryInUI;
-(WFContentAttributionSet *)contentAttributionSet;

@end

