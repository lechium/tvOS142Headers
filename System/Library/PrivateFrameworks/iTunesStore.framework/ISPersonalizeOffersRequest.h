/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:32 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSMutableDictionary* _itemIDsByType;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allItemTypes; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)allItemTypes;
-(id)itemIdentifiersForItemType:(id)arg1 ;
-(void)addItemIdentifier:(id)arg1 forItemType:(id)arg2 ;
@end

