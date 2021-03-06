/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:40 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TVCKStoreLookupItem, NSSet;

@interface TVCKStoreItemInfo : NSObject {

	TVCKStoreLookupItem* _requestedItem;
	NSSet* _leafItems;

}

@property (nonatomic,retain) TVCKStoreLookupItem * requestedItem;              //@synthesize requestedItem=_requestedItem - In the implementation block
@property (nonatomic,copy) NSSet * leafItems;                                  //@synthesize leafItems=_leafItems - In the implementation block
-(TVCKStoreLookupItem *)requestedItem;
-(void)setRequestedItem:(TVCKStoreLookupItem *)arg1 ;
-(NSSet *)leafItems;
-(void)setLeafItems:(NSSet *)arg1 ;
@end

