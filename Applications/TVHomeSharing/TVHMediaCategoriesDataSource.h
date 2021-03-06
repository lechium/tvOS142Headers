//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVHDiffableDataSourceContentProvider-Protocol.h"

@class NSArray, NSOrderedSet, NSString;
@protocol TVHDiffableDataSourceContentProviderDelegate;

@interface TVHMediaCategoriesDataSource : NSObject <TVHDiffableDataSourceContentProvider>
{
    id <TVHDiffableDataSourceContentProviderDelegate> _diffableDataSourceContentProviderDelegate;	// 8 = 0x8
    NSOrderedSet *_mediaCategoryTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ab264
@property(copy, nonatomic) NSOrderedSet *mediaCategoryTypes; // @synthesize mediaCategoryTypes=_mediaCategoryTypes;
@property(nonatomic) __weak id <TVHDiffableDataSourceContentProviderDelegate> diffableDataSourceContentProviderDelegate; // @synthesize diffableDataSourceContentProviderDelegate=_diffableDataSourceContentProviderDelegate;
- (id)_mediaCategoryTypeAtIndexPath:(id)arg1;	// IMP=0x00000001000ab16c
@property(readonly, copy) NSString *description;
- (id)indexPathForIndexTitle:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000aaf7c
@property(readonly, copy, nonatomic) NSArray *indexTitles;
- (id)itemIdentifierForIndexPath:(id)arg1;	// IMP=0x00000001000aaf68
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;	// IMP=0x00000001000aaf5c
- (id)sectionTitleAIndex:(unsigned long long)arg1;	// IMP=0x00000001000aaf54
@property(readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;
- (id)mediaCategoryTypeStringAtIndexPath:(id)arg1;	// IMP=0x00000001000aae98
- (id)mediaCategoryTypeAtIndexPath:(id)arg1;	// IMP=0x00000001000aae8c
- (id)mediaCategoryTypeStringForItemIdentifier:(id)arg1;	// IMP=0x00000001000aadec
- (id)mediaCategoryTypeForItemIdentifier:(id)arg1;	// IMP=0x00000001000aadd4
- (id)init;	// IMP=0x00000001000aac78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

