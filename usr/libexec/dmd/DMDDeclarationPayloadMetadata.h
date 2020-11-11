//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DMDPayloadMetadata.h"

@class NSString;

@interface DMDDeclarationPayloadMetadata : DMDPayloadMetadata
{
}

+ (id)fetchRequestForDeclarationsPendingDeleteFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100038090
+ (id)fetchRequestForFailedDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100037f04
+ (id)fetchRequestForActiveDeclarationFromOrganizationWithIdentifier:(id)arg1 withIdentifier:(id)arg2 serverHash:(id)arg3;	// IMP=0x0000000100037d0c
+ (id)fetchRequestForActiveDeclarationsFromOrganizationWithIdentifier:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x0000000100037b90
+ (id)fetchRequestForActiveDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100037a44
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1 withIdentifiers:(id)arg2;	// IMP=0x00000001000379a4
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1;	// IMP=0x0000000100037994
+ (id)fetchRequestForDeclarationsFromOrganizationWithIdentifier:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0000000100037854
+ (id)declarationsWithDictionaries:(id)arg1 organizationIdentifier:(id)arg2 context:(id)arg3 error:(id *)arg4;	// IMP=0x0000000100037544
- (void)setStateDictionary:(id)arg1;	// IMP=0x0000000100037498
- (id)descriptiveProperties;	// IMP=0x00000001000373ac
- (void)applyPayloadDictionary:(id)arg1;	// IMP=0x000000010003734c
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;

// Remaining properties
@property(nonatomic) _Bool failed; // @dynamic failed;
@property(copy, nonatomic) NSString *serverHash; // @dynamic serverHash;

@end
