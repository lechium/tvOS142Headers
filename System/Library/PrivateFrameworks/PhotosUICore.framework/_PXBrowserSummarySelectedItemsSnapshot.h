/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:16 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PXSelectedItemsSnapshot.h>

@protocol PXBrowserSelectionSnapshot;
@interface _PXBrowserSummarySelectedItemsSnapshot : NSObject <PXSelectedItemsSnapshot> {

	id<PXBrowserSelectionSnapshot> _browserSelectionSnapshot;

}

@property (nonatomic,readonly) id<PXBrowserSelectionSnapshot> browserSelectionSnapshot;              //@synthesize browserSelectionSnapshot=_browserSelectionSnapshot - In the implementation block
@property (nonatomic,readonly) long long count; 
-(id)init;
-(long long)count;
-(id)initWithBrowserSelectionSnapshot:(id)arg1 ;
-(id)itemReferenceAtIndex:(long long)arg1 ;
-(id)containsItemReference:(id)arg1 ;
-(id)itemForItemReference:(id)arg1 ;
-(id<PXBrowserSelectionSnapshot>)browserSelectionSnapshot;
@end
