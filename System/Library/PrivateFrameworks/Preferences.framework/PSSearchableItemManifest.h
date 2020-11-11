/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface PSSearchableItemManifest : NSObject {

	NSMutableArray* _searchableItems;

}

@property (nonatomic,retain) NSMutableArray * searchableItems;              //@synthesize searchableItems=_searchableItems - In the implementation block
-(id)init;
-(id)items;
-(void)setSearchableItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchableItems;
-(id)_stringKeyForString:(id)arg1 ;
-(id)_escapedStringForString:(id)arg1 ;
-(void)addSearchableItems:(id)arg1 ;
-(void)addSearchableItem:(id)arg1 ;
-(void)removeSearchableItem:(id)arg1 ;
-(BOOL)writeToPlistAndStringsFilesAtURL:(id)arg1 error:(id*)arg2 ;
@end
