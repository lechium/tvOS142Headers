/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:18 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSManagedObjectContext, NSString, NSDictionary;

@interface PLGlobalValues : NSObject {

	NSManagedObjectContext* _moc;

}

@property (assign,nonatomic) BOOL didImportFileSystemAssets; 
@property (assign,getter=isJournalRebuildRequired,nonatomic) BOOL journalRebuildRequired; 
@property (nonatomic,readonly) BOOL isRebuildComplete; 
@property (nonatomic,retain) NSString * localeIdentifier; 
@property (nonatomic,retain) NSDictionary * greenValues; 
@property (nonatomic,readonly) unsigned long long libraryCreateOptions; 
+(void)setJournalRebuildRequired:(BOOL)arg1 managedObjectContext:(id)arg2 ;
+(void)setLibraryCreateOptions:(unsigned long long)arg1 managedObjectContext:(id)arg2 ;
-(NSString *)localeIdentifier;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)didImportFileSystemAssets;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)setDidImportFileSystemAssets:(BOOL)arg1 ;
-(void)_setDidImportFileSystemAssets:(BOOL)arg1 ;
-(void)dontImportFileSystemDataIntoDatabase;
-(BOOL)isJournalRebuildRequired;
-(void)setJournalRebuildRequired:(BOOL)arg1 ;
-(BOOL)isRebuildComplete;
-(void)setRebuildComplete;
-(void)_setRebuildComplete;
-(NSDictionary *)greenValues;
-(void)setGreenValues:(NSDictionary *)arg1 ;
-(unsigned long long)libraryCreateOptions;
-(void)setWidgetTimelineGeneratedForDisplaySize:(CGSize)arg1 ;
-(BOOL)shouldPrefetchWidgetResources;
-(id)_getValueUsingPerformBlockAndWait:(/*^block*/id)arg1 ;
-(void)_setValueUsingPerformBlockAndWait:(/*^block*/id)arg1 responsibleCaller:(const char*)arg2 ;
@end

